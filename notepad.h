#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QTextEdit>
#include <QString>

#include <QMainWindow>


class Notepad : public QMainWindow {
  Q_OBJECT

public:
  Notepad(QMainWindow *parent = nullptr);


private:
  QTextEdit* note_layout;
};


#endif // NOTEPAD_H
