#include "MainWindow.h"
#include "spreadsheet/gui/MainSpreadsheet.h"
#include <QHeaderView>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    spreadsheet = new MainSpreadsheet(centralWidget);

    tab = new QTabWidget(centralWidget);
    tab->addTab(spreadsheet, "Table");
    tab->setTabPosition(QTabWidget::TabPosition::West);

    layout = new QVBoxLayout(centralWidget);
    layout->addWidget(tab);

    resize(600, 400);
    setWindowTitle("DayBook3");
}

MainWindow::~MainWindow()
{

}
