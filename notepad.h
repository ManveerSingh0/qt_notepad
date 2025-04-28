#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QTextEdit>
#include <QMenuBar>
#include <QMenu>
#include <QString>

#include <QMainWindow>


class Notepad : public QMainWindow {
  Q_OBJECT

public:
  Notepad(QMainWindow *parent = nullptr);


private slots:
  void open();
  void exit();
  void save();

private:
  QTextEdit* note_layout;
  QMenu* menu_bar;



  void create_menu();
};


#endif // NOTEPAD_H
