#include "notepad.h"


#include <QApplication>


int main(int argc, char* argv[]) {
  QApplication app(argc, argv);

  Notepad note_app;
  note_app.show();

  app.exec();
}
