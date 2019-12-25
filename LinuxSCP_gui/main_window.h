#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

protected:
    void contextMenuEvent(QContextMenuEvent *event) override;

private:
    Ui::MainWindow *_ui;

    //Menu items
    QMenu* _file_menu;
    QMenu* _help_menu;

    QAction* _exit_menu_act;
    QAction* _about_menu_act;

    void createMenus();
private slots:
    void about();
};
#endif // MAINWINDOW_H
