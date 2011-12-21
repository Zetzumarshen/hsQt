/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTableWidget_DhClass.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:53
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_gui.h>
#include <DhAutohead_gui.h>
#endif

class DhQTableWidget : public DynamicQHandler, public QTableWidget
{
private: 
  static QHash<QByteArray, int> initXhHash();
  static QHash<QByteArray, int> xhHash;
public:
  bool setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr);
  bool unSetDynamicQHandler(char * eventId);
  bool setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr);
  bool unSetDynamicQHandlerud(int udtyp, int eventId);
  void userDefined(int x1) const;
  QVariant* userDefinedVariant(int x1, QVariant* x2) const;
  explicit DhQTableWidget() : DynamicQHandler(), QTableWidget() {};
  explicit DhQTableWidget(QWidget* x1) : DynamicQHandler(), QTableWidget(x1) {};
  explicit DhQTableWidget(int x1, int x2) : DynamicQHandler(), QTableWidget(x1, x2) {};
  explicit DhQTableWidget(int x1, int x2, QWidget* x3) : DynamicQHandler(), QTableWidget(x1, x2, x3) {};
  void dropEvent(QDropEvent* x1);
  void DhdropEvent(QDropEvent* x1);
  void DvhdropEvent(QDropEvent* x1);
  bool dropMimeData(int x1, int x2, const QMimeData* x3, Qt::DropAction x4);
  bool DhdropMimeData(int x1, int x2, const QMimeData* x3, long x4);
  bool DvhdropMimeData(int x1, int x2, const QMimeData* x3, long x4);
  bool event(QEvent* x1);
  bool Dhevent(QEvent* x1);
  bool Dvhevent(QEvent* x1);
  QModelIndex indexFromItem(QTableWidgetItem* x1) const;
  QModelIndex DhindexFromItem(QTableWidgetItem* x1) const;
  QModelIndex DvhindexFromItem(QTableWidgetItem* x1) const;
  QTableWidgetItem* itemFromIndex(const QModelIndex& x1) const;
  QTableWidgetItem* DhitemFromIndex(const QModelIndex& x1) const;
  QTableWidgetItem* DvhitemFromIndex(const QModelIndex& x1) const;
  QList<QTableWidgetItem*> items(const QMimeData* x1) const;
  QList<QTableWidgetItem*> Dhitems(const QMimeData* x1) const;
  QList<QTableWidgetItem*> Dvhitems(const QMimeData* x1) const;
  Qt::DropActions supportedDropActions() const;
  Qt::DropActions DhsupportedDropActions() const;
  Qt::DropActions DvhsupportedDropActions() const;
  ~DhQTableWidget(){}
  void columnCountChanged(int x1, int x2);
  void DhcolumnCountChanged(int x1, int x2);
  void DvhcolumnCountChanged(int x1, int x2);
  void columnMoved(int x1, int x2, int x3);
  void DhcolumnMoved(int x1, int x2, int x3);
  void DvhcolumnMoved(int x1, int x2, int x3);
  void columnResized(int x1, int x2, int x3);
  void DhcolumnResized(int x1, int x2, int x3);
  void DvhcolumnResized(int x1, int x2, int x3);
  void currentChanged(const QModelIndex& x1, const QModelIndex& x2);
  void DhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2);
  void DvhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2);
  int horizontalOffset() const;
  int DhhorizontalOffset() const;
  int DvhhorizontalOffset() const;
  void horizontalScrollbarAction(int x1);
  void DhhorizontalScrollbarAction(int x1);
  void DvhhorizontalScrollbarAction(int x1);
  QModelIndex indexAt(const QPoint& x1) const;
  QModelIndex DhindexAt(const QPoint& x1) const;
  QModelIndex DvhindexAt(const QPoint& x1) const;
  bool isIndexHidden(const QModelIndex& x1) const;
  bool DhisIndexHidden(const QModelIndex& x1) const;
  bool DvhisIndexHidden(const QModelIndex& x1) const;
  QModelIndex moveCursor(QAbstractItemView::CursorAction x1, Qt::KeyboardModifiers x2);
  QModelIndex DhmoveCursor(long x1, long x2);
  QModelIndex DvhmoveCursor(long x1, long x2);
  void paintEvent(QPaintEvent* x1);
  void DhpaintEvent(QPaintEvent* x1);
  void DvhpaintEvent(QPaintEvent* x1);
  void rowCountChanged(int x1, int x2);
  void DhrowCountChanged(int x1, int x2);
  void DvhrowCountChanged(int x1, int x2);
  void rowMoved(int x1, int x2, int x3);
  void DhrowMoved(int x1, int x2, int x3);
  void DvhrowMoved(int x1, int x2, int x3);
  void rowResized(int x1, int x2, int x3);
  void DhrowResized(int x1, int x2, int x3);
  void DvhrowResized(int x1, int x2, int x3);
  void scrollContentsBy(int x1, int x2);
  void DhscrollContentsBy(int x1, int x2);
  void DvhscrollContentsBy(int x1, int x2);
  void scrollTo(const QModelIndex& x1, QAbstractItemView::ScrollHint x2);
  void DhscrollTo(const QModelIndex& x1, long x2);
  void DvhscrollTo(const QModelIndex& x1, long x2);
  QList<QModelIndex> selectedIndexes() const;
  QList<QModelIndex> DhselectedIndexes() const;
  QList<QModelIndex> DvhselectedIndexes() const;
  void selectionChanged(const QItemSelection& x1, const QItemSelection& x2);
  void DhselectionChanged(const QItemSelection& x1, const QItemSelection& x2);
  void DvhselectionChanged(const QItemSelection& x1, const QItemSelection& x2);
  void setModel(QAbstractItemModel* x1);
  void DhsetModel(QAbstractItemModel* x1);
  void DvhsetModel(QAbstractItemModel* x1);
  void setRootIndex(const QModelIndex& x1);
  void DhsetRootIndex(const QModelIndex& x1);
  void DvhsetRootIndex(const QModelIndex& x1);
  void setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2);
  void DhsetSelection(const QRect& x1, long x2);
  void DvhsetSelection(const QRect& x1, long x2);
  void setSelectionModel(QItemSelectionModel* x1);
  void DhsetSelectionModel(QItemSelectionModel* x1);
  void DvhsetSelectionModel(QItemSelectionModel* x1);
  int sizeHintForColumn(int x1) const;
  int DhsizeHintForColumn(int x1) const;
  int DvhsizeHintForColumn(int x1) const;
  int sizeHintForRow(int x1) const;
  int DhsizeHintForRow(int x1) const;
  int DvhsizeHintForRow(int x1) const;
  void timerEvent(QTimerEvent* x1);
  void DhtimerEvent(QTimerEvent* x1);
  void DvhtimerEvent(QTimerEvent* x1);
  void updateGeometries();
  void DhupdateGeometries();
  void DvhupdateGeometries();
  int verticalOffset() const;
  int DhverticalOffset() const;
  int DvhverticalOffset() const;
  void verticalScrollbarAction(int x1);
  void DhverticalScrollbarAction(int x1);
  void DvhverticalScrollbarAction(int x1);
  QStyleOptionViewItem viewOptions() const;
  QStyleOptionViewItem DhviewOptions() const;
  QStyleOptionViewItem DvhviewOptions() const;
  QRect visualRect(const QModelIndex& x1) const;
  QRect DhvisualRect(const QModelIndex& x1) const;
  QRect DvhvisualRect(const QModelIndex& x1) const;
  QRegion visualRegionForSelection(const QItemSelection& x1) const;
  QRegion DhvisualRegionForSelection(const QItemSelection& x1) const;
  QRegion DvhvisualRegionForSelection(const QItemSelection& x1) const;
  void closeEditor(QWidget* x1, QAbstractItemDelegate::EndEditHint x2);
  void DhcloseEditor(QWidget* x1, long x2);
  void DvhcloseEditor(QWidget* x1, long x2);
  void commitData(QWidget* x1);
  void DhcommitData(QWidget* x1);
  void DvhcommitData(QWidget* x1);
  void dataChanged(const QModelIndex& x1, const QModelIndex& x2);
  void DhdataChanged(const QModelIndex& x1, const QModelIndex& x2);
  void DvhdataChanged(const QModelIndex& x1, const QModelIndex& x2);
  QPoint dirtyRegionOffset() const;
  QPoint DhdirtyRegionOffset() const;
  QPoint DvhdirtyRegionOffset() const;
  void doAutoScroll();
  void DhdoAutoScroll();
  void DvhdoAutoScroll();
  void doItemsLayout();
  void DhdoItemsLayout();
  void DvhdoItemsLayout();
  void dragEnterEvent(QDragEnterEvent* x1);
  void DhdragEnterEvent(QDragEnterEvent* x1);
  void DvhdragEnterEvent(QDragEnterEvent* x1);
  void dragLeaveEvent(QDragLeaveEvent* x1);
  void DhdragLeaveEvent(QDragLeaveEvent* x1);
  void DvhdragLeaveEvent(QDragLeaveEvent* x1);
  void dragMoveEvent(QDragMoveEvent* x1);
  void DhdragMoveEvent(QDragMoveEvent* x1);
  void DvhdragMoveEvent(QDragMoveEvent* x1);
  QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const;
  QAbstractItemView::DropIndicatorPosition DhdropIndicatorPosition() const;
  QAbstractItemView::DropIndicatorPosition DvhdropIndicatorPosition() const;
  bool edit(const QModelIndex& x1, QAbstractItemView::EditTrigger x2, QEvent* x3);
  bool Dhedit(const QModelIndex& x1, long x2, QEvent* x3);
  bool Dvhedit(const QModelIndex& x1, long x2, QEvent* x3);
  void editorDestroyed(QObject* x1);
  void DheditorDestroyed(QObject* x1);
  void DvheditorDestroyed(QObject* x1);
  void executeDelayedItemsLayout();
  void DhexecuteDelayedItemsLayout();
  void DvhexecuteDelayedItemsLayout();
  void focusInEvent(QFocusEvent* x1);
  void DhfocusInEvent(QFocusEvent* x1);
  void DvhfocusInEvent(QFocusEvent* x1);
  bool focusNextPrevChild(bool x1);
  bool DhfocusNextPrevChild(bool x1);
  bool DvhfocusNextPrevChild(bool x1);
  void focusOutEvent(QFocusEvent* x1);
  void DhfocusOutEvent(QFocusEvent* x1);
  void DvhfocusOutEvent(QFocusEvent* x1);
  void horizontalScrollbarValueChanged(int x1);
  void DhhorizontalScrollbarValueChanged(int x1);
  void DvhhorizontalScrollbarValueChanged(int x1);
  int horizontalStepsPerItem() const;
  int DhhorizontalStepsPerItem() const;
  int DvhhorizontalStepsPerItem() const;
  void inputMethodEvent(QInputMethodEvent* x1);
  void DhinputMethodEvent(QInputMethodEvent* x1);
  void DvhinputMethodEvent(QInputMethodEvent* x1);
  QVariant inputMethodQuery(Qt::InputMethodQuery x1) const;
  QVariant DhinputMethodQuery(long x1) const;
  QVariant DvhinputMethodQuery(long x1) const;
  void keyPressEvent(QKeyEvent* x1);
  void DhkeyPressEvent(QKeyEvent* x1);
  void DvhkeyPressEvent(QKeyEvent* x1);
  void keyboardSearch(const QString& x1);
  void DhkeyboardSearch(const QString& x1);
  void DvhkeyboardSearch(const QString& x1);
  void mouseDoubleClickEvent(QMouseEvent* x1);
  void DhmouseDoubleClickEvent(QMouseEvent* x1);
  void DvhmouseDoubleClickEvent(QMouseEvent* x1);
  void mouseMoveEvent(QMouseEvent* x1);
  void DhmouseMoveEvent(QMouseEvent* x1);
  void DvhmouseMoveEvent(QMouseEvent* x1);
  void mousePressEvent(QMouseEvent* x1);
  void DhmousePressEvent(QMouseEvent* x1);
  void DvhmousePressEvent(QMouseEvent* x1);
  void mouseReleaseEvent(QMouseEvent* x1);
  void DhmouseReleaseEvent(QMouseEvent* x1);
  void DvhmouseReleaseEvent(QMouseEvent* x1);
  void reset();
  void Dhreset();
  void Dvhreset();
  void resizeEvent(QResizeEvent* x1);
  void DhresizeEvent(QResizeEvent* x1);
  void DvhresizeEvent(QResizeEvent* x1);
  void rowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3);
  void DhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3);
  void DvhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3);
  void rowsInserted(const QModelIndex& x1, int x2, int x3);
  void DhrowsInserted(const QModelIndex& x1, int x2, int x3);
  void DvhrowsInserted(const QModelIndex& x1, int x2, int x3);
  void scheduleDelayedItemsLayout();
  void DhscheduleDelayedItemsLayout();
  void DvhscheduleDelayedItemsLayout();
  void scrollDirtyRegion(int x1, int x2);
  void DhscrollDirtyRegion(int x1, int x2);
  void DvhscrollDirtyRegion(int x1, int x2);
  void selectAll();
  void DhselectAll();
  void DvhselectAll();
  QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& x1) const;
  QItemSelectionModel::SelectionFlags DhselectionCommand(const QModelIndex& x1) const;
  QItemSelectionModel::SelectionFlags DvhselectionCommand(const QModelIndex& x1) const;
  QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& x1, const QEvent* x2) const;
  QItemSelectionModel::SelectionFlags DhselectionCommand(const QModelIndex& x1, const QEvent* x2) const;
  QItemSelectionModel::SelectionFlags DvhselectionCommand(const QModelIndex& x1, const QEvent* x2) const;
  void setDirtyRegion(const QRegion& x1);
  void DhsetDirtyRegion(const QRegion& x1);
  void DvhsetDirtyRegion(const QRegion& x1);
  void setHorizontalStepsPerItem(int x1);
  void DhsetHorizontalStepsPerItem(int x1);
  void DvhsetHorizontalStepsPerItem(int x1);
  void setState(QAbstractItemView::State x1);
  void DhsetState(long x1);
  void DvhsetState(long x1);
  void setVerticalStepsPerItem(int x1);
  void DhsetVerticalStepsPerItem(int x1);
  void DvhsetVerticalStepsPerItem(int x1);
  void startAutoScroll();
  void DhstartAutoScroll();
  void DvhstartAutoScroll();
  void startDrag(Qt::DropActions x1);
  void DhstartDrag(long x1);
  void DvhstartDrag(long x1);
  QAbstractItemView::State state() const;
  QAbstractItemView::State Dhstate() const;
  QAbstractItemView::State Dvhstate() const;
  void stopAutoScroll();
  void DhstopAutoScroll();
  void DvhstopAutoScroll();
  void updateEditorData();
  void DhupdateEditorData();
  void DvhupdateEditorData();
  void updateEditorGeometries();
  void DhupdateEditorGeometries();
  void DvhupdateEditorGeometries();
  void verticalScrollbarValueChanged(int x1);
  void DhverticalScrollbarValueChanged(int x1);
  void DvhverticalScrollbarValueChanged(int x1);
  int verticalStepsPerItem() const;
  int DhverticalStepsPerItem() const;
  int DvhverticalStepsPerItem() const;
  bool viewportEvent(QEvent* x1);
  bool DhviewportEvent(QEvent* x1);
  bool DvhviewportEvent(QEvent* x1);
  void contextMenuEvent(QContextMenuEvent* x1);
  void DhcontextMenuEvent(QContextMenuEvent* x1);
  void DvhcontextMenuEvent(QContextMenuEvent* x1);
  QSize minimumSizeHint() const;
  QSize DhminimumSizeHint() const;
  QSize DvhminimumSizeHint() const;
  void setViewportMargins(int x1, int x2, int x3, int x4);
  void DhsetViewportMargins(int x1, int x2, int x3, int x4);
  void DvhsetViewportMargins(int x1, int x2, int x3, int x4);
  void setupViewport(QWidget* x1);
  void DhsetupViewport(QWidget* x1);
  void DvhsetupViewport(QWidget* x1);
  QSize sizeHint() const;
  QSize DhsizeHint() const;
  QSize DvhsizeHint() const;
  void wheelEvent(QWheelEvent* x1);
  void DhwheelEvent(QWheelEvent* x1);
  void DvhwheelEvent(QWheelEvent* x1);
  void changeEvent(QEvent* x1);
  void DhchangeEvent(QEvent* x1);
  void DvhchangeEvent(QEvent* x1);
  void drawFrame(QPainter* x1);
  void DhdrawFrame(QPainter* x1);
  void DvhdrawFrame(QPainter* x1);
  void actionEvent(QActionEvent* x1);
  void DhactionEvent(QActionEvent* x1);
  void DvhactionEvent(QActionEvent* x1);
  void closeEvent(QCloseEvent* x1);
  void DhcloseEvent(QCloseEvent* x1);
  void DvhcloseEvent(QCloseEvent* x1);
  void create();
  void Dhcreate();
  void Dvhcreate();
  void create(WId x1);
  void Dhcreate(WId x1);
  void Dvhcreate(WId x1);
  void create(WId x1, bool x2);
  void Dhcreate(WId x1, bool x2);
  void Dvhcreate(WId x1, bool x2);
  void create(WId x1, bool x2, bool x3);
  void Dhcreate(WId x1, bool x2, bool x3);
  void Dvhcreate(WId x1, bool x2, bool x3);
  void destroy();
  void Dhdestroy();
  void Dvhdestroy();
  void destroy(bool x1);
  void Dhdestroy(bool x1);
  void Dvhdestroy(bool x1);
  void destroy(bool x1, bool x2);
  void Dhdestroy(bool x1, bool x2);
  void Dvhdestroy(bool x1, bool x2);
  int devType() const;
  int DhdevType() const;
  int DvhdevType() const;
  void enabledChange(bool x1);
  void DhenabledChange(bool x1);
  void DvhenabledChange(bool x1);
  void enterEvent(QEvent* x1);
  void DhenterEvent(QEvent* x1);
  void DvhenterEvent(QEvent* x1);
  bool focusNextChild();
  bool DhfocusNextChild();
  bool DvhfocusNextChild();
  bool focusPreviousChild();
  bool DhfocusPreviousChild();
  bool DvhfocusPreviousChild();
  void fontChange(const QFont& x1);
  void DhfontChange(const QFont& x1);
  void DvhfontChange(const QFont& x1);
  int heightForWidth(int x1) const;
  int DhheightForWidth(int x1) const;
  int DvhheightForWidth(int x1) const;
  void hideEvent(QHideEvent* x1);
  void DhhideEvent(QHideEvent* x1);
  void DvhhideEvent(QHideEvent* x1);
  void keyReleaseEvent(QKeyEvent* x1);
  void DhkeyReleaseEvent(QKeyEvent* x1);
  void DvhkeyReleaseEvent(QKeyEvent* x1);
  void languageChange();
  void DhlanguageChange();
  void DvhlanguageChange();
  void leaveEvent(QEvent* x1);
  void DhleaveEvent(QEvent* x1);
  void DvhleaveEvent(QEvent* x1);
  int metric(QPaintDevice::PaintDeviceMetric x1) const;
  int Dhmetric(long x1) const;
  int Dvhmetric(long x1) const;
  void moveEvent(QMoveEvent* x1);
  void DhmoveEvent(QMoveEvent* x1);
  void DvhmoveEvent(QMoveEvent* x1);
  QPaintEngine* paintEngine() const;
  QPaintEngine* DhpaintEngine() const;
  QPaintEngine* DvhpaintEngine() const;
  void paletteChange(const QPalette& x1);
  void DhpaletteChange(const QPalette& x1);
  void DvhpaletteChange(const QPalette& x1);
  void resetInputContext();
  void DhresetInputContext();
  void DvhresetInputContext();
  void setVisible(bool x1);
  void DhsetVisible(bool x1);
  void DvhsetVisible(bool x1);
  void showEvent(QShowEvent* x1);
  void DhshowEvent(QShowEvent* x1);
  void DvhshowEvent(QShowEvent* x1);
  void tabletEvent(QTabletEvent* x1);
  void DhtabletEvent(QTabletEvent* x1);
  void DvhtabletEvent(QTabletEvent* x1);
  void updateMicroFocus();
  void DhupdateMicroFocus();
  void DvhupdateMicroFocus();
  void windowActivationChange(bool x1);
  void DhwindowActivationChange(bool x1);
  void DvhwindowActivationChange(bool x1);
  void childEvent(QChildEvent* x1);
  void DhchildEvent(QChildEvent* x1);
  void DvhchildEvent(QChildEvent* x1);
  void connectNotify(const char* x1);
  void DhconnectNotify(const char* x1);
  void DvhconnectNotify(const char* x1);
  void customEvent(QEvent* x1);
  void DhcustomEvent(QEvent* x1);
  void DvhcustomEvent(QEvent* x1);
  void disconnectNotify(const char* x1);
  void DhdisconnectNotify(const char* x1);
  void DvhdisconnectNotify(const char* x1);
  bool eventFilter(QObject* x1, QEvent* x2);
  bool DheventFilter(QObject* x1, QEvent* x2);
  bool DvheventFilter(QObject* x1, QEvent* x2);
  int receivers(const char* x1) const;
  int Dhreceivers(const char* x1) const;
  int Dvhreceivers(const char* x1) const;
  QObject* sender() const;
  QObject* Dhsender() const;
  QObject* Dvhsender() const;
};

