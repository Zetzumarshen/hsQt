{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : QHostAddress.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:36
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.Enums.Network.QHostAddress (
 SpecialAddress, eBroadcast, eLocalHost, eLocalHostIPv6, eAnyIPv6
 )
 where

import Foreign.C.Types
import Qtc.Classes.Base
import Qtc.ClassTypes.Core (QObject, TQObject, qObjectFromPtr)
import Qtc.Core.Base (Qcs, connectSlot, qtc_connectSlot_int, wrapSlotHandler_int)
import Qtc.Enums.Base
import Qtc.Enums.Classes.Core

data CSpecialAddress a = CSpecialAddress a
type SpecialAddress = QEnum(CSpecialAddress Int)

ieSpecialAddress :: Int -> SpecialAddress
ieSpecialAddress x = QEnum (CSpecialAddress x)

instance QEnumC (CSpecialAddress Int) where
 qEnum_toInt (QEnum (CSpecialAddress x)) = x
 qEnum_fromInt x = QEnum (CSpecialAddress x)
 withQEnumResult x
   = do
     ti <- x
     return $ qEnum_fromInt $ fromIntegral ti
 withQEnumListResult x
   = do
     til <- x
     return $ map qEnum_fromInt til

instance Qcs (QObject c -> SpecialAddress -> IO ()) where
 connectSlot _qsig_obj _qsig_nam _qslt_obj _qslt_nam _handler
  = do
    funptr  <- wrapSlotHandler_int slotHandlerWrapper_int
    stptr   <- newStablePtr (Wrap _handler)
    withObjectPtr _qsig_obj $ \cobj_sig ->
      withCWString _qsig_nam $ \cstr_sig ->
      withObjectPtr _qslt_obj $ \cobj_slt ->
      withCWString _qslt_nam $ \cstr_slt ->
      qtc_connectSlot_int cobj_sig cstr_sig cobj_slt cstr_slt (toCFunPtr funptr) (castStablePtrToPtr stptr)
    return ()
  where
    slotHandlerWrapper_int :: Ptr fun -> Ptr () -> Ptr (TQObject c) -> CInt -> IO ()
    slotHandlerWrapper_int funptr stptr qobjptr cint
      = do qobj <- qObjectFromPtr qobjptr
           let hint = fromCInt cint
           if (objectIsNull qobj)
            then do when (stptr/=ptrNull)
                      (freeStablePtr (castPtrToStablePtr stptr))
                    when (funptr/=ptrNull)
                      (freeHaskellFunPtr (castPtrToFunPtr funptr))
            else _handler qobj (qEnum_fromInt hint)
           return ()

instance QeNull SpecialAddress where
 eNull
  = ieSpecialAddress $ 0
eBroadcast :: SpecialAddress
eBroadcast
  = ieSpecialAddress $ 1
eLocalHost :: SpecialAddress
eLocalHost
  = ieSpecialAddress $ 2
eLocalHostIPv6 :: SpecialAddress
eLocalHostIPv6
  = ieSpecialAddress $ 3
instance QeAny SpecialAddress where
 eAny
  = ieSpecialAddress $ 4
eAnyIPv6 :: SpecialAddress
eAnyIPv6
  = ieSpecialAddress $ 5

