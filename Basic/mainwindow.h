#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <KXmlGuiWindow>
#include <KTextEdit>

/*
 * We make ourselves a main window, deriving from KXmlGuiWindow 
 */

class MainWindow : public KXmlGuiWindow
{
	public:
		MainWindow(QWidget* parent = 0 );
	private:
		KTextEdit* textArea;	// This is going to be our GUI text edit which is hard coded into the window itself
	
};
#endif
