{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Box.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:42
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qt.Glome.Box (box) where
import Qt.Glome.Vec
import Qt.Glome.Solid


data Box = Box !Bbox deriving Show

box :: Vec -> Vec -> SolidItem
box (Vec x1 y1 z1) (Vec x2 y2 z2) =
 SolidItem (Box (Bbox (Vec (fmin x1 x2) (fmin y1 y2) (fmin z1 z2))
                      (Vec (fmax x1 x2) (fmax y1 y2) (fmax z1 z2))))

rayint_box :: Box -> Ray -> Flt -> Texture -> Rayint
rayint_box (Box (Bbox (Vec p1x p1y p1z) (Vec p2x p2y p2z))) r d t =
 let (Ray orig dir) = r
     (Vec ox oy oz) = orig
     (Vec dx dy dz) = dir
     dxrcp = 1/dx
     dyrcp = 1/dy
     dzrcp = 1/dz
     Interval inx outx = if dx > 0 
                         then Interval ((p1x-ox)*dxrcp) ((p2x-ox)*dxrcp)
                         else Interval ((p2x-ox)*dxrcp) ((p1x-ox)*dxrcp)
     Interval iny outy = if dy > 0
                         then Interval ((p1y-oy)*dyrcp) ((p2y-oy)*dyrcp)
                         else Interval ((p2y-oy)*dyrcp) ((p1y-oy)*dyrcp)
     Interval inz outz = if dz > 0
                         then Interval ((p1z-oz)*dzrcp) ((p2z-oz)*dzrcp)
                         else Interval ((p2z-oz)*dzrcp) ((p1z-oz)*dzrcp)
     lastin   = (fmax3 inx iny inz)
     firstout = (fmin3 outx outy outz)
 in if lastin > firstout || firstout < 0 || lastin > d
    then RayMiss
    else 
     let n = if inx == lastin 
             then if dx > 0 then nvx else vx
             else if iny == lastin
                  then if dy > 0 then nvy else vy
                  else if dz > 0 then nvz else vz
         norm = if lastin > 0 then n else vinvert n
         hitdepth = fmax 0 lastin
     in
         RayHit hitdepth (vscaleadd orig dir hitdepth) norm t 

shadow_box :: Box -> Ray -> Flt -> Bool
shadow_box (Box box) r d =
 let Interval near far = bbclip r box 
 in
  if (near > far) || far <= 0 || far > d
  then False
  else True

inside_box :: Box -> Vec -> Bool
inside_box (Box (Bbox (Vec x1 y1 z1) (Vec x2 y2 z2))) (Vec x y z) =
 x > x1 && x < x2 && 
 y > y1 && y < y2 && 
 z > z1 && z < z2

bound_box :: Box -> Bbox
bound_box (Box box) = box

instance Solid Box where
 rayint = rayint_box
 shadow = shadow_box
 inside = inside_box
 bound = bound_box
