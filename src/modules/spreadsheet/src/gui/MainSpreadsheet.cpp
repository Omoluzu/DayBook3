#include "spreadsheet/gui/MainSpreadsheet.h"
#include "spreadsheet/gui/SpreadsheetView.h"


MainSpreadsheet::MainSpreadsheet(QWidget *parent) : QWidget(parent)
{
    table = new SpreadsheetView(this);

    firstTableButton = new QPushButton("First Table", this);

    addNewSpreadsheetButton = new QPushButton("+", this);

    selectSpreadsheetLayout = new QVBoxLayout();
    selectSpreadsheetLayout->addWidget(firstTableButton);
    selectSpreadsheetLayout->addWidget(addNewSpreadsheetButton);
    selectSpreadsheetLayout->addStretch();

    layout = new QHBoxLayout(this);
    layout->addLayout(selectSpreadsheetLayout);
    layout->addWidget(table);
}

MainSpreadsheet::~MainSpreadsheet()
{}
