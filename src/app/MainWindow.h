#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QVBoxLayout>
#include <QWidget>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QTableWidget *table;
    QWidget *centralWidget;
    QVBoxLayout *layout;
};

#endif
