/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_wrp_script.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:52
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <qtc_def.h>
#include <QScriptEngine>
#include <QScriptValue>
#include <QScriptable>

class QNsfContainer : public QObject, QScriptable {
	Q_OBJECT
public:
 	QNsfContainer(void*, void*);
 	QNsfContainer(void*, void*, void*);
 	QNsfContainer(void*, wchar_t*, void*, void*);
	void (*rf_ptr) (void*, void*, QScriptContext*);
	void * stat;
	Q_INVOKABLE void connectDynamic();
};

