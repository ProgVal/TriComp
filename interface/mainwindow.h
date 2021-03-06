#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "newknitdialog.h"
#include "editor.h"

namespace Ui {
  class MainWindow /*: public Ui::MainWindow {}*/;
}

class MainWindow : public QMainWindow //, public Ui::MainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    static Editor *editor() { return editor(); }
    ~MainWindow();

private slots:
    // quit
    void on_quitAction_triggered();
    // new
    void on_newAction_triggered();
    void newKnit();
    // open
    void on_openAction_triggered();
    void open();
    // save
    void saveDlgTreatButton(QAbstractButton* button);
    void doSaveDlgAction();
    void save();
    void on_saveAction_triggered();
    void on_saveAsAction_triggered();
    // instructions
    void on_instructionsAction_triggered();
    // others
    void on_aboutTricompAction_triggered();


private:
    Ui::MainWindow *ui;
    newKnitDialog *newDlg;
    QMessageBox *saveDlg;
    bool isSaved;
    enum afterSaveAction {NEW, OPEN, QUIT, NOTHING}; // useful with the save dialog and cancel options
    afterSaveAction act;
    static Editor *editor_;
};

#endif // MAINWINDOW_H
