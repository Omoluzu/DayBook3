#include "MainWindow.h"
#include "spreadsheet/gui/SpreadsheetView.h"
#include <QHeaderView>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    table = new SpreadsheetView(centralWidget);

    layout = new QVBoxLayout(centralWidget);
    layout->addWidget(table);

    resize(600, 400);
    setWindowTitle("First Table");
}

MainWindow::~MainWindow()
{

}
