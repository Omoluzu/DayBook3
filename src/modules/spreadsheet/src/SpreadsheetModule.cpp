#include "spreadsheet/SpreadsheetModule.h"

#include "spreadsheet/gui/MainSpreadsheet.h"

using namespace Spreadsheet;


SpreadsheetModule::SpreadsheetModule(QObject *parent) : QObject(parent), Core::IModule()
{}

SpreadsheetModule::~SpreadsheetModule()
{}

bool SpreadsheetModule::initialize()
{
    m_view = new MainSpreadsheet(nullptr);
    m_mainWidget = m_view;

    return true;
}

QWidget *SpreadsheetModule::mainWidget()
{
    return m_mainWidget;
}

QString SpreadsheetModule::moduleName() const
{
    return tr("Spreadsheet");
}
