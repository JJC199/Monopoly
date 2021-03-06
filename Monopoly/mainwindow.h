#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "property.h"
#include "player.h"
#include "gamelogic.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_playButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    GameLogic *GM = new GameLogic();
};

#endif // MAINWINDOW_H
