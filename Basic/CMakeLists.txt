project (textEditor)
find_package(KDE4 REQUIRED)
include_directories( ${KDE4_INCLUDES} )
set(textEditor_SRCS
	main.cpp
	mainwindow.cpp
)
kde4_add_executable(textEditor
${textEditor_SRCS})
target_link_libraries(textEditor 
${KDE4_KDEUI_LIBS})


