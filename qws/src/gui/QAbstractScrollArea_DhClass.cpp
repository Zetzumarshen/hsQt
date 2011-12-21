/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractScrollArea_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QAbstractScrollArea_DhClass.h>

void DhQAbstractScrollArea::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQAbstractScrollArea::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQAbstractScrollArea::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQAbstractScrollArea::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQAbstractScrollArea::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQAbstractScrollArea::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::dragEnterEvent(x1);
}

void DhQAbstractScrollArea::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QAbstractScrollArea::dragEnterEvent(x1);
}

void DhQAbstractScrollArea::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQAbstractScrollArea::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::dragLeaveEvent(x1);
}

void DhQAbstractScrollArea::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QAbstractScrollArea::dragLeaveEvent(x1);
}

void DhQAbstractScrollArea::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQAbstractScrollArea::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::dragMoveEvent(x1);
}

void DhQAbstractScrollArea::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QAbstractScrollArea::dragMoveEvent(x1);
}

void DhQAbstractScrollArea::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQAbstractScrollArea::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::dropEvent(x1);
}

void DhQAbstractScrollArea::DhdropEvent(QDropEvent* x1) {
  return QAbstractScrollArea::dropEvent(x1);
}

void DhQAbstractScrollArea::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

bool DhQAbstractScrollArea::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::event(x1);
}

bool DhQAbstractScrollArea::Dhevent(QEvent* x1) {
  return QAbstractScrollArea::event(x1);
}

bool DhQAbstractScrollArea::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQAbstractScrollArea::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::keyPressEvent(x1);
}

void DhQAbstractScrollArea::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractScrollArea::keyPressEvent(x1);
}

void DhQAbstractScrollArea::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

QSize DhQAbstractScrollArea::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQAbstractScrollArea::DhminimumSizeHint() const {
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQAbstractScrollArea::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQAbstractScrollArea::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::mouseDoubleClickEvent(x1);
}

void DhQAbstractScrollArea::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QAbstractScrollArea::mouseDoubleClickEvent(x1);
}

void DhQAbstractScrollArea::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQAbstractScrollArea::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::mouseMoveEvent(x1);
}

void DhQAbstractScrollArea::DhmouseMoveEvent(QMouseEvent* x1) {
  return QAbstractScrollArea::mouseMoveEvent(x1);
}

void DhQAbstractScrollArea::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQAbstractScrollArea::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::mousePressEvent(x1);
}

void DhQAbstractScrollArea::DhmousePressEvent(QMouseEvent* x1) {
  return QAbstractScrollArea::mousePressEvent(x1);
}

void DhQAbstractScrollArea::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQAbstractScrollArea::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::mouseReleaseEvent(x1);
}

void DhQAbstractScrollArea::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QAbstractScrollArea::mouseReleaseEvent(x1);
}

void DhQAbstractScrollArea::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQAbstractScrollArea::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::paintEvent(x1);
}

void DhQAbstractScrollArea::DhpaintEvent(QPaintEvent* x1) {
  return QAbstractScrollArea::paintEvent(x1);
}

void DhQAbstractScrollArea::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQAbstractScrollArea::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::resizeEvent(x1);
}

void DhQAbstractScrollArea::DhresizeEvent(QResizeEvent* x1) {
  return QAbstractScrollArea::resizeEvent(x1);
}

void DhQAbstractScrollArea::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQAbstractScrollArea::scrollContentsBy(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractScrollArea::scrollContentsBy(x1, x2);
}

void DhQAbstractScrollArea::DhscrollContentsBy(int x1, int x2) {
  return QAbstractScrollArea::scrollContentsBy(x1, x2);
}

void DhQAbstractScrollArea::DvhscrollContentsBy(int x1, int x2) {
  return scrollContentsBy(x1, x2);
}

void DhQAbstractScrollArea::setViewportMargins(int x1, int x2, int x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3, x4);
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQAbstractScrollArea::DhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQAbstractScrollArea::DvhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return setViewportMargins(x1, x2, x3, x4);
}

void DhQAbstractScrollArea::setupViewport(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQAbstractScrollArea::DhsetupViewport(QWidget* x1) {
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQAbstractScrollArea::DvhsetupViewport(QWidget* x1) {
  return setupViewport(x1);
}

QSize DhQAbstractScrollArea::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::sizeHint();
}

QSize DhQAbstractScrollArea::DhsizeHint() const {
  return QAbstractScrollArea::sizeHint();
}

QSize DhQAbstractScrollArea::DvhsizeHint() const {
  return sizeHint();
}

bool DhQAbstractScrollArea::viewportEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::viewportEvent(x1);
}

bool DhQAbstractScrollArea::DhviewportEvent(QEvent* x1) {
  return QAbstractScrollArea::viewportEvent(x1);
}

bool DhQAbstractScrollArea::DvhviewportEvent(QEvent* x1) {
  return viewportEvent(x1);
}

void DhQAbstractScrollArea::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQAbstractScrollArea::DhwheelEvent(QWheelEvent* x1) {
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQAbstractScrollArea::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQAbstractScrollArea::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::changeEvent(x1);
}

void DhQAbstractScrollArea::DhchangeEvent(QEvent* x1) {
  return QFrame::changeEvent(x1);
}

void DhQAbstractScrollArea::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQAbstractScrollArea::drawFrame(QPainter* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::drawFrame(x1);
}

void DhQAbstractScrollArea::DhdrawFrame(QPainter* x1) {
  return QFrame::drawFrame(x1);
}

void DhQAbstractScrollArea::DvhdrawFrame(QPainter* x1) {
  return drawFrame(x1);
}

void DhQAbstractScrollArea::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQAbstractScrollArea::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQAbstractScrollArea::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQAbstractScrollArea::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQAbstractScrollArea::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQAbstractScrollArea::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQAbstractScrollArea::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQAbstractScrollArea::Dhcreate() {
  return QWidget::create();
}

void DhQAbstractScrollArea::Dvhcreate() {
  return create();
}

void DhQAbstractScrollArea::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQAbstractScrollArea::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQAbstractScrollArea::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQAbstractScrollArea::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQAbstractScrollArea::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQAbstractScrollArea::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQAbstractScrollArea::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQAbstractScrollArea::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQAbstractScrollArea::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQAbstractScrollArea::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQAbstractScrollArea::Dhdestroy() {
  return QWidget::destroy();
}

void DhQAbstractScrollArea::Dvhdestroy() {
  return destroy();
}

void DhQAbstractScrollArea::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQAbstractScrollArea::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQAbstractScrollArea::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQAbstractScrollArea::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQAbstractScrollArea::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQAbstractScrollArea::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQAbstractScrollArea::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQAbstractScrollArea::DhdevType() const {
  return QWidget::devType();
}

int DhQAbstractScrollArea::DvhdevType() const {
  return devType();
}

void DhQAbstractScrollArea::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQAbstractScrollArea::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQAbstractScrollArea::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQAbstractScrollArea::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQAbstractScrollArea::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQAbstractScrollArea::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQAbstractScrollArea::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQAbstractScrollArea::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQAbstractScrollArea::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQAbstractScrollArea::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQAbstractScrollArea::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQAbstractScrollArea::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQAbstractScrollArea::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQAbstractScrollArea::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQAbstractScrollArea::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQAbstractScrollArea::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQAbstractScrollArea::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQAbstractScrollArea::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQAbstractScrollArea::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQAbstractScrollArea::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQAbstractScrollArea::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQAbstractScrollArea::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQAbstractScrollArea::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQAbstractScrollArea::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQAbstractScrollArea::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQAbstractScrollArea::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQAbstractScrollArea::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQAbstractScrollArea::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQAbstractScrollArea::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQAbstractScrollArea::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQAbstractScrollArea::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQAbstractScrollArea::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQAbstractScrollArea::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQAbstractScrollArea::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQAbstractScrollArea::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQAbstractScrollArea::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQAbstractScrollArea::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQAbstractScrollArea::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQAbstractScrollArea::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQAbstractScrollArea::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQAbstractScrollArea::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQAbstractScrollArea::DvhlanguageChange() {
  return languageChange();
}

void DhQAbstractScrollArea::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQAbstractScrollArea::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQAbstractScrollArea::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQAbstractScrollArea::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQAbstractScrollArea::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQAbstractScrollArea::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQAbstractScrollArea::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQAbstractScrollArea::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQAbstractScrollArea::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQAbstractScrollArea::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQAbstractScrollArea::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQAbstractScrollArea::DvhpaintEngine() const {
  return paintEngine();
}

void DhQAbstractScrollArea::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQAbstractScrollArea::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQAbstractScrollArea::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQAbstractScrollArea::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQAbstractScrollArea::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQAbstractScrollArea::DvhresetInputContext() {
  return resetInputContext();
}

void DhQAbstractScrollArea::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQAbstractScrollArea::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQAbstractScrollArea::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQAbstractScrollArea::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQAbstractScrollArea::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQAbstractScrollArea::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQAbstractScrollArea::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQAbstractScrollArea::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQAbstractScrollArea::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQAbstractScrollArea::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQAbstractScrollArea::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQAbstractScrollArea::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQAbstractScrollArea::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQAbstractScrollArea::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQAbstractScrollArea::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQAbstractScrollArea::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQAbstractScrollArea::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQAbstractScrollArea::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQAbstractScrollArea::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQAbstractScrollArea::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQAbstractScrollArea::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQAbstractScrollArea::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQAbstractScrollArea::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQAbstractScrollArea::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQAbstractScrollArea::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQAbstractScrollArea::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQAbstractScrollArea::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQAbstractScrollArea::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractScrollArea::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractScrollArea::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQAbstractScrollArea::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQAbstractScrollArea::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQAbstractScrollArea::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQAbstractScrollArea::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQAbstractScrollArea::Dhsender() const {
  return QObject::sender();
}

QObject* DhQAbstractScrollArea::Dvhsender() const {
  return sender();
}

void DhQAbstractScrollArea::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQAbstractScrollArea::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQAbstractScrollArea::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQAbstractScrollArea::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 7;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("scrollContentsBy(int,int)")] = 15;
  txh[QMetaObject::normalizedSignature("setViewportMargins(int,int,int,int)")] = 16;
  txh[QMetaObject::normalizedSignature("setupViewport(QWidget*)")] = 17;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 18;
  txh[QMetaObject::normalizedSignature(")")] = 19;
  txh[QMetaObject::normalizedSignature("(bool)viewportEvent(QEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("drawFrame(QPainter*)")] = 23;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 24;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 25;
  txh[QMetaObject::normalizedSignature("create()")] = 26;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 27;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 28;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 29;
  txh[QMetaObject::normalizedSignature("destroy()")] = 30;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 31;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 32;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 33;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 34;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 35;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 37;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 38;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 40;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 41;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 42;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 44;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 45;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 46;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 47;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 48;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 49;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 50;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 51;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 52;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 53;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 54;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 55;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 57;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 58;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 60;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 61;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 62;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 63;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 64;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 65;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 66;
  return txh;
}

QHash <QByteArray, int> DhQAbstractScrollArea::xhHash = DhQAbstractScrollArea::initXhHash();

bool DhQAbstractScrollArea::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQAbstractScrollArea::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQAbstractScrollArea::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQAbstractScrollArea::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

