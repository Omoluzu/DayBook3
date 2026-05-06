#include "spreadsheet/gui/SpreadsheetView.h"
#include <QHeaderView>


SpreadsheetView::SpreadsheetView(QWidget *parent) : QTableWidget(parent)
{
    this->setColumnCount(3);
    this->setHorizontalHeaderLabels(QStringList() << "1" << "2" << "3");
    this->setRowCount(3);

    this->horizontalHeader()->setStretchLastSection(true);
    this->setSelectionBehavior(QAbstractItemView::SelectRows);
    this->setAlternatingRowColors(true);
}

SpreadsheetView::~SpreadsheetView()
{

}
