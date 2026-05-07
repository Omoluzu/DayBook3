#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QTabWidget>
#include <QVBoxLayout>
#include <QWidget>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QWidget *spreadsheet;
    QWidget *centralWidget;
    QVBoxLayout *layout;
    QTabWidget *tab;
};

#endif
