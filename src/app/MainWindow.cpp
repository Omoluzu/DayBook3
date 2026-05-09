#include "MainWindow.h"
#include "spreadsheet/SpreadsheetModule.h"
#include <QHeaderView>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    auto spreadsheetModule = std::make_unique<Spreadsheet::SpreadsheetModule>();
    spreadsheetModule->initialize();

    tab = new QTabWidget(centralWidget);
    tab->addTab(spreadsheetModule->mainWidget(), "Table");
    tab->setTabPosition(QTabWidget::TabPosition::West);

    layout = new QVBoxLayout(centralWidget);
    layout->addWidget(tab);

    resize(600, 400);
    setWindowTitle("DayBook3");
}

MainWindow::~MainWindow()
{

}
