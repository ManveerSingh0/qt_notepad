#include "notepad.h"
#include <QMenu>



Notepad::Notepad(QMainWindow* parent) : QMainWindow(parent) {
  this->setWindowTitle("Notepad");

  /*
    this creates main writing area for notepad
    and use it as central widget for main_window
  */
  note_layout = new QTextEdit(this);
  this->setCentralWidget(note_layout);

  
}
