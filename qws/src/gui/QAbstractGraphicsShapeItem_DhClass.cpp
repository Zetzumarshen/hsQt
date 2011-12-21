/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractGraphicsShapeItem_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QAbstractGraphicsShapeItem_DhClass.h>

void DhQAbstractGraphicsShapeItem::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQAbstractGraphicsShapeItem::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQAbstractGraphicsShapeItem::isObscuredBy(const QGraphicsItem* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QAbstractGraphicsShapeItem::isObscuredBy(x1);
}

bool DhQAbstractGraphicsShapeItem::DhisObscuredBy(const QGraphicsItem* x1) const {
  return QAbstractGraphicsShapeItem::isObscuredBy(x1);
}

bool DhQAbstractGraphicsShapeItem::DvhisObscuredBy(const QGraphicsItem* x1) const {
  return isObscuredBy(x1);
}

QPainterPath DhQAbstractGraphicsShapeItem::opaqueArea() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPainterPath*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QAbstractGraphicsShapeItem::opaqueArea();
}

QPainterPath DhQAbstractGraphicsShapeItem::DhopaqueArea() const {
  return QAbstractGraphicsShapeItem::opaqueArea();
}

QPainterPath DhQAbstractGraphicsShapeItem::DvhopaqueArea() const {
  return opaqueArea();
}

void DhQAbstractGraphicsShapeItem::addToIndex() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::addToIndex();
}

void DhQAbstractGraphicsShapeItem::DhaddToIndex() {
  return QGraphicsItem::addToIndex();
}

void DhQAbstractGraphicsShapeItem::DvhaddToIndex() {
  return addToIndex();
}

void DhQAbstractGraphicsShapeItem::advance(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)(ro_ptr, x1);
  return QGraphicsItem::advance(x1);
}

void DhQAbstractGraphicsShapeItem::Dhadvance(int x1) {
  return QGraphicsItem::advance(x1);
}

void DhQAbstractGraphicsShapeItem::Dvhadvance(int x1) {
  return advance(x1);
}

QRectF DhQAbstractGraphicsShapeItem::boundingRect() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRectF*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return DhboundingRect();
}

QRectF DhQAbstractGraphicsShapeItem::DhboundingRect() const {
  QRectF tr;
  return tr;
}

QRectF DhQAbstractGraphicsShapeItem::DvhboundingRect() const {
  return boundingRect();
}

bool DhQAbstractGraphicsShapeItem::collidesWithItem(const QGraphicsItem* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::collidesWithItem(x1);
}

bool DhQAbstractGraphicsShapeItem::DhcollidesWithItem(const QGraphicsItem* x1) const {
  return QGraphicsItem::collidesWithItem(x1);
}

bool DhQAbstractGraphicsShapeItem::DvhcollidesWithItem(const QGraphicsItem* x1) const {
  return collidesWithItem(x1);
}

bool DhQAbstractGraphicsShapeItem::collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long))rf_ptr)(ro_ptr, (void*)x1, (long)x2);
  return QGraphicsItem::collidesWithItem(x1, x2);
}

bool DhQAbstractGraphicsShapeItem::DhcollidesWithItem(const QGraphicsItem* x1, long x2) const {
  return QGraphicsItem::collidesWithItem(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQAbstractGraphicsShapeItem::DvhcollidesWithItem(const QGraphicsItem* x1, long x2) const {
  return collidesWithItem(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQAbstractGraphicsShapeItem::collidesWithPath(const QPainterPath& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QGraphicsItem::collidesWithPath(x1);
}

bool DhQAbstractGraphicsShapeItem::DhcollidesWithPath(const QPainterPath& x1) const {
  return QGraphicsItem::collidesWithPath(x1);
}

bool DhQAbstractGraphicsShapeItem::DvhcollidesWithPath(const QPainterPath& x1) const {
  return collidesWithPath(x1);
}

bool DhQAbstractGraphicsShapeItem::collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long))rf_ptr)(ro_ptr, (void*)&x1, (long)x2);
  return QGraphicsItem::collidesWithPath(x1, x2);
}

bool DhQAbstractGraphicsShapeItem::DhcollidesWithPath(const QPainterPath& x1, long x2) const {
  return QGraphicsItem::collidesWithPath(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQAbstractGraphicsShapeItem::DvhcollidesWithPath(const QPainterPath& x1, long x2) const {
  return collidesWithPath(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQAbstractGraphicsShapeItem::contains(const QPointF& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QGraphicsItem::contains(x1);
}

bool DhQAbstractGraphicsShapeItem::Dhcontains(const QPointF& x1) const {
  return QGraphicsItem::contains(x1);
}

bool DhQAbstractGraphicsShapeItem::Dvhcontains(const QPointF& x1) const {
  return contains(x1);
}

void DhQAbstractGraphicsShapeItem::contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::contextMenuEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhcontextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  return QGraphicsItem::contextMenuEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhcontextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQAbstractGraphicsShapeItem::dragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dragEnterEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhdragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dragEnterEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhdragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQAbstractGraphicsShapeItem::dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dragLeaveEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhdragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dragLeaveEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhdragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQAbstractGraphicsShapeItem::dragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dragMoveEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhdragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dragMoveEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhdragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQAbstractGraphicsShapeItem::dropEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dropEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhdropEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dropEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhdropEvent(QGraphicsSceneDragDropEvent* x1) {
  return dropEvent(x1);
}

QVariant DhQAbstractGraphicsShapeItem::extension(const QVariant& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QGraphicsItem::extension(x1);
}

QVariant DhQAbstractGraphicsShapeItem::Dhextension(const QVariant& x1) const {
  return QGraphicsItem::extension(x1);
}

QVariant DhQAbstractGraphicsShapeItem::Dvhextension(const QVariant& x1) const {
  return extension(x1);
}

void DhQAbstractGraphicsShapeItem::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::focusInEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhfocusInEvent(QFocusEvent* x1) {
  return QGraphicsItem::focusInEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQAbstractGraphicsShapeItem::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::focusOutEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhfocusOutEvent(QFocusEvent* x1) {
  return QGraphicsItem::focusOutEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQAbstractGraphicsShapeItem::hoverEnterEvent(QGraphicsSceneHoverEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::hoverEnterEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhhoverEnterEvent(QGraphicsSceneHoverEvent* x1) {
  return QGraphicsItem::hoverEnterEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhhoverEnterEvent(QGraphicsSceneHoverEvent* x1) {
  return hoverEnterEvent(x1);
}

void DhQAbstractGraphicsShapeItem::hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::hoverLeaveEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhhoverLeaveEvent(QGraphicsSceneHoverEvent* x1) {
  return QGraphicsItem::hoverLeaveEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhhoverLeaveEvent(QGraphicsSceneHoverEvent* x1) {
  return hoverLeaveEvent(x1);
}

void DhQAbstractGraphicsShapeItem::hoverMoveEvent(QGraphicsSceneHoverEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::hoverMoveEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhhoverMoveEvent(QGraphicsSceneHoverEvent* x1) {
  return QGraphicsItem::hoverMoveEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhhoverMoveEvent(QGraphicsSceneHoverEvent* x1) {
  return hoverMoveEvent(x1);
}

void DhQAbstractGraphicsShapeItem::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::inputMethodEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QGraphicsItem::inputMethodEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQAbstractGraphicsShapeItem::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)(ro_ptr, (long)x1);
  return QGraphicsItem::inputMethodQuery(x1);
}

QVariant DhQAbstractGraphicsShapeItem::DhinputMethodQuery(long x1) const {
  return QGraphicsItem::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQAbstractGraphicsShapeItem::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQAbstractGraphicsShapeItem::itemChange(QGraphicsItem::GraphicsItemChange x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long,void*))rf_ptr)(ro_ptr, (long)x1, (void*)&x2);
  return QGraphicsItem::itemChange(x1, x2);
}

QVariant DhQAbstractGraphicsShapeItem::DhitemChange(long x1, const QVariant& x2) {
  return QGraphicsItem::itemChange((QGraphicsItem::GraphicsItemChange)x1, x2);
}

QVariant DhQAbstractGraphicsShapeItem::DvhitemChange(long x1, const QVariant& x2) {
  return itemChange((QGraphicsItem::GraphicsItemChange)x1, x2);
}

void DhQAbstractGraphicsShapeItem::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::keyPressEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhkeyPressEvent(QKeyEvent* x1) {
  return QGraphicsItem::keyPressEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQAbstractGraphicsShapeItem::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::keyReleaseEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QGraphicsItem::keyReleaseEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQAbstractGraphicsShapeItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mouseDoubleClickEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhmouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mouseDoubleClickEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhmouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQAbstractGraphicsShapeItem::mouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mouseMoveEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhmouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mouseMoveEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhmouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQAbstractGraphicsShapeItem::mousePressEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mousePressEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhmousePressEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mousePressEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhmousePressEvent(QGraphicsSceneMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQAbstractGraphicsShapeItem::mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mouseReleaseEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhmouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mouseReleaseEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhmouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQAbstractGraphicsShapeItem::paint(QPainter* x1, const QStyleOptionGraphicsItem* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)(ro_ptr, (void*)x1, (void*)x2);
  return Dhpaint(x1, x2);
}

void DhQAbstractGraphicsShapeItem::Dhpaint(QPainter* x1, const QStyleOptionGraphicsItem* x2) {
  QPainter* tx1 = x1; tx1 = tx1;
  QStyleOptionGraphicsItem* tx2 = (QStyleOptionGraphicsItem*)x2; tx2 = tx2;
  return;
}

void DhQAbstractGraphicsShapeItem::Dvhpaint(QPainter* x1, const QStyleOptionGraphicsItem* x2) {
  return paint(x1, x2);
}

void DhQAbstractGraphicsShapeItem::paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)(ro_ptr, (void*)x1, (void*)x2, (void*)(new QPointer<QObject>((QObject*)x3)));
  return Dhpaint(x1, x2, x3);
}

void DhQAbstractGraphicsShapeItem::Dhpaint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) {
  QPainter* tx1 = x1; tx1 = tx1;
  QStyleOptionGraphicsItem* tx2 = (QStyleOptionGraphicsItem*)x2; tx2 = tx2;
  QWidget* tx3 = x3; tx3 = tx3;
  return;
}

void DhQAbstractGraphicsShapeItem::Dvhpaint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) {
  return paint(x1, x2, x3);
}

void DhQAbstractGraphicsShapeItem::prepareGeometryChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::prepareGeometryChange();
}

void DhQAbstractGraphicsShapeItem::DhprepareGeometryChange() {
  return QGraphicsItem::prepareGeometryChange();
}

void DhQAbstractGraphicsShapeItem::DvhprepareGeometryChange() {
  return prepareGeometryChange();
}

void DhQAbstractGraphicsShapeItem::removeFromIndex() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::removeFromIndex();
}

void DhQAbstractGraphicsShapeItem::DhremoveFromIndex() {
  return QGraphicsItem::removeFromIndex();
}

void DhQAbstractGraphicsShapeItem::DvhremoveFromIndex() {
  return removeFromIndex();
}

bool DhQAbstractGraphicsShapeItem::sceneEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::sceneEvent(x1);
}

bool DhQAbstractGraphicsShapeItem::DhsceneEvent(QEvent* x1) {
  return QGraphicsItem::sceneEvent(x1);
}

bool DhQAbstractGraphicsShapeItem::DvhsceneEvent(QEvent* x1) {
  return sceneEvent(x1);
}

bool DhQAbstractGraphicsShapeItem::sceneEventFilter(QGraphicsItem* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)(ro_ptr, (void*)x1, (void*)x2);
  return QGraphicsItem::sceneEventFilter(x1, x2);
}

bool DhQAbstractGraphicsShapeItem::DhsceneEventFilter(QGraphicsItem* x1, QEvent* x2) {
  return QGraphicsItem::sceneEventFilter(x1, x2);
}

bool DhQAbstractGraphicsShapeItem::DvhsceneEventFilter(QGraphicsItem* x1, QEvent* x2) {
  return sceneEventFilter(x1, x2);
}

void DhQAbstractGraphicsShapeItem::setExtension(QGraphicsItem::Extension x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,void*))rf_ptr)(ro_ptr, (long)x1, (void*)&x2);
  return QGraphicsItem::setExtension(x1, x2);
}

void DhQAbstractGraphicsShapeItem::DhsetExtension(long x1, const QVariant& x2) {
  return QGraphicsItem::setExtension((QGraphicsItem::Extension)x1, x2);
}

void DhQAbstractGraphicsShapeItem::DvhsetExtension(long x1, const QVariant& x2) {
  return setExtension((QGraphicsItem::Extension)x1, x2);
}

QPainterPath DhQAbstractGraphicsShapeItem::shape() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPainterPath*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::shape();
}

QPainterPath DhQAbstractGraphicsShapeItem::Dhshape() const {
  return QGraphicsItem::shape();
}

QPainterPath DhQAbstractGraphicsShapeItem::Dvhshape() const {
  return shape();
}

bool DhQAbstractGraphicsShapeItem::supportsExtension(QGraphicsItem::Extension x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,long))rf_ptr)(ro_ptr, (long)x1);
  return QGraphicsItem::supportsExtension(x1);
}

bool DhQAbstractGraphicsShapeItem::DhsupportsExtension(long x1) const {
  return QGraphicsItem::supportsExtension((QGraphicsItem::Extension)x1);
}

bool DhQAbstractGraphicsShapeItem::DvhsupportsExtension(long x1) const {
  return supportsExtension((QGraphicsItem::Extension)x1);
}

int DhQAbstractGraphicsShapeItem::type() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::type();
}

int DhQAbstractGraphicsShapeItem::Dhtype() const {
  return QGraphicsItem::type();
}

int DhQAbstractGraphicsShapeItem::Dvhtype() const {
  return type();
}

void DhQAbstractGraphicsShapeItem::wheelEvent(QGraphicsSceneWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::wheelEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DhwheelEvent(QGraphicsSceneWheelEvent* x1) {
  return QGraphicsItem::wheelEvent(x1);
}

void DhQAbstractGraphicsShapeItem::DvhwheelEvent(QGraphicsSceneWheelEvent* x1) {
  return wheelEvent(x1);
}

QHash <QByteArray, int> DhQAbstractGraphicsShapeItem::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)isObscuredBy(const QGraphicsItem*)")] = 0;
  txh[QMetaObject::normalizedSignature("(QPainterPath)opaqueArea()")] = 2;
  txh[QMetaObject::normalizedSignature("addToIndex()")] = 3;
  txh[QMetaObject::normalizedSignature("advance(int)")] = 4;
  txh[QMetaObject::normalizedSignature("(QRectF)boundingRect()")] = 5;
  txh[QMetaObject::normalizedSignature("(bool)collidesWithItem(const QGraphicsItem*)")] = 7;
  txh[QMetaObject::normalizedSignature("(bool)collidesWithItem(const QGraphicsItem*,Qt::ItemSelectionMode)")] = 9;
  txh[QMetaObject::normalizedSignature("(bool)collidesWithPath(const QPainterPath&)")] = 11;
  txh[QMetaObject::normalizedSignature("(bool)collidesWithPath(const QPainterPath&,Qt::ItemSelectionMode)")] = 12;
  txh[QMetaObject::normalizedSignature("(bool)contains(const QPointF&)")] = 13;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QGraphicsSceneContextMenuEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QGraphicsSceneDragDropEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QGraphicsSceneDragDropEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QGraphicsSceneDragDropEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("dropEvent(QGraphicsSceneDragDropEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("(QVariant)extension(const QVariant&)")] = 20;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("hoverEnterEvent(QGraphicsSceneHoverEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("hoverLeaveEvent(QGraphicsSceneHoverEvent*)")] = 24;
  txh[QMetaObject::normalizedSignature("hoverMoveEvent(QGraphicsSceneHoverEvent*)")] = 25;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 27;
  txh[QMetaObject::normalizedSignature("(QVariant)itemChange(QGraphicsItem::GraphicsItemChange,const QVariant&)")] = 28;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 30;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QGraphicsSceneMouseEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QGraphicsSceneMouseEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QGraphicsSceneMouseEvent*)")] = 34;
  txh[QMetaObject::normalizedSignature("paint(QPainter*,const QStyleOptionGraphicsItem*)")] = 35;
  txh[QMetaObject::normalizedSignature("paint(QPainter*,const QStyleOptionGraphicsItem*,QWidget*)")] = 36;
  txh[QMetaObject::normalizedSignature("prepareGeometryChange()")] = 37;
  txh[QMetaObject::normalizedSignature("removeFromIndex()")] = 38;
  txh[QMetaObject::normalizedSignature("(bool)sceneEvent(QEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("(bool)sceneEventFilter(QGraphicsItem*,QEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature(")")] = 41;
  txh[QMetaObject::normalizedSignature("setExtension(QGraphicsItem::Extension,const QVariant&)")] = 42;
  txh[QMetaObject::normalizedSignature("(QPainterPath)shape()")] = 43;
  txh[QMetaObject::normalizedSignature("(bool)supportsExtension(QGraphicsItem::Extension)")] = 44;
  txh[QMetaObject::normalizedSignature("(int)type()")] = 45;
  txh[QMetaObject::normalizedSignature("wheelEvent(QGraphicsSceneWheelEvent*)")] = 46;
  return txh;
}

QHash <QByteArray, int> DhQAbstractGraphicsShapeItem::xhHash = DhQAbstractGraphicsShapeItem::initXhHash();

bool DhQAbstractGraphicsShapeItem::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQAbstractGraphicsShapeItem::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQAbstractGraphicsShapeItem::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQAbstractGraphicsShapeItem::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

