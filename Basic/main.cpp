#include <KApplication>
#include <KAboutData>
#include <KCmdLineArgs>
#include <KLocale>
#include "mainwindow.h"

int main( int argc, char** argv )
{
	KAboutData aboutData( "tutorial2",
					0,
			      		ki18n("tutorial2"),
					"1.0",
					ki18n("Asimple text area"),
					KAboutData::License_GPL,
					ki18n("Copyright (c) 2010 Developer")
			    );

	KCmdLineArgs::init( argc, argv, &aboutData);
	KApplication app;
	MainWindow* window = new MainWindow();
	window->show();
	return app.exec(); 
}
