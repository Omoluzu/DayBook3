#include "MainWindow.h"
#include <QHeaderView>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    table = new QTableWidget(centralWidget);
    table->setColumnCount(3);
    table->setHorizontalHeaderLabels(QStringList() << "1" << "2" << "3");
    table->setRowCount(3);

    table->horizontalHeader()->setStretchLastSection(true);
    table->setSelectionBehavior(QAbstractItemView::SelectRows);
    table->setAlternatingRowColors(true);

    layout = new QVBoxLayout(centralWidget);
    layout->addWidget(table);

    resize(600, 400);
    setWindowTitle("First Table");
}

MainWindow::~MainWindow()
{

}
