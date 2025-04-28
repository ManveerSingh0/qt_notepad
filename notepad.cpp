#include "notepad.h"
#include <iostream>
#include <QFileDialog>
#include <QFile>

Notepad::Notepad(QMainWindow* parent) : QMainWindow(parent) {
  this->setWindowTitle("Notepad");
  this->resize(800,800);

  /*
    this creates main writing area for notepad
    and use it as central widget for main_window
  */
  note_layout = new QTextEdit(this);
  this->setCentralWidget(note_layout);

  create_menu();
}


void Notepad::create_menu() {
  this->menu_bar = menuBar()->addMenu("&File");
  menu_bar->addAction("Open", this, &Notepad::open)
    ->setShortcut(QKeySequence::Open);
  menu_bar->addAction("Save", this, &Notepad::save)
    ->setShortcut(QKeySequence::Save);
  menu_bar->addAction("Exit", this, &Notepad::exit)
    ->setShortcut(QKeySequence::Close);

}


void Notepad::open() {
  std::cout << "Open is triggered\n";
}

void Notepad::exit() { this->close(); }

void Notepad::save() {
  QString file_name = QFileDialog::getSaveFileName(
      this, tr("open image"), QString(), tr("see what happens"));
  if (!file_name.isEmpty()) {
    QFile file(file_name);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
      QTextStream out(&file);
      out << note_layout->toPlainText();
      file.close();
    }
  } else {
    qInfo() << "write name of the file";
  }
}
