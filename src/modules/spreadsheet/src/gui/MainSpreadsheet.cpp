#include "spreadsheet/gui/MainSpreadsheet.h"
#include "spreadsheet/gui/SpreadsheetView.h"


MainSpreadsheet::MainSpreadsheet(QWidget *parent) : QWidget(parent)
{
    firstTable = new SpreadsheetView(this);
    secondTable = new SpreadsheetView(this);

    stackedTableWidget = new QStackedWidget(this);
    stackedTableWidget->addWidget(firstTable);
    stackedTableWidget->addWidget(secondTable);

    firstTableButton = new QPushButton("First Table", this);
    secondTableButton = new QPushButton("Second Table", this);

    groupTableButton = new QButtonGroup(this);
    groupTableButton->addButton(firstTableButton);
    groupTableButton->addButton(secondTableButton);

    addNewSpreadsheetButton = new QPushButton("+", this);

    selectSpreadsheetLayout = new QVBoxLayout();
    selectSpreadsheetLayout->addWidget(firstTableButton);
    selectSpreadsheetLayout->addWidget(secondTableButton);
    selectSpreadsheetLayout->addWidget(addNewSpreadsheetButton);
    selectSpreadsheetLayout->addStretch();

    layout = new QHBoxLayout(this);
    layout->addLayout(selectSpreadsheetLayout);
    layout->addWidget(stackedTableWidget);
}

MainSpreadsheet::~MainSpreadsheet()
{}
