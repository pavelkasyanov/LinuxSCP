#include "main_window.h"
#include "ui_main_window.h"

#include <QtDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , _ui(new Ui::MainWindow)
{
    _ui->setupUi(this);

    createMenus();
}

MainWindow::~MainWindow()
{
    delete _ui;
}

void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{

}

void MainWindow::createMenus()
{
    _exit_menu_act = new QAction(tr("E&xit"), this);
    _exit_menu_act->setShortcuts(QKeySequence::Quit);
    _exit_menu_act->setStatusTip(tr("Exit the application"));
    connect(_exit_menu_act, &QAction::triggered, this, &QMainWindow::close);

    _about_menu_act = new QAction(tr("&About program"), this);
    _about_menu_act->setShortcuts(QKeySequence::WhatsThis);
    _about_menu_act->setStatusTip(tr("About application"));
    connect(_about_menu_act, &QAction::triggered, this, &MainWindow::about);

    _file_menu = menuBar()->addMenu(tr("&File"));
    _file_menu->addSeparator();
    _file_menu->addAction(_exit_menu_act);

    _help_menu = menuBar()->addMenu(tr("&Help"));
    _help_menu->addSeparator();
    _help_menu->addAction(_about_menu_act);
}

void MainWindow::about()
{
#ifdef QT_DEBUG
    qDebug() << "about window action call!";
#endif //QT_DEBUG

    QMessageBox msg_box(this);
    msg_box.setWindowTitle(tr("About program"));
    msg_box.setText(tr("Testing.."));
    msg_box.setIcon(QMessageBox::Information);
    msg_box.setInformativeText(tr("Just show infornation."));
    msg_box.setStandardButtons(QMessageBox::Ok);
    msg_box.setDefaultButton(QMessageBox::Ok);
    msg_box.exec();
}

