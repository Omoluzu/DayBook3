#ifndef MAINSPREADSHEET_H
#define MAINSPREADSHEET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QTableWidget>
#include <QButtonGroup>
#include <QStackedWidget>


class MainSpreadsheet : public QWidget
{
    Q_OBJECT

    public:
        explicit MainSpreadsheet(QWidget *parent = nullptr);
        ~MainSpreadsheet();

    private:
        QTableWidget *firstTable;
        QTableWidget *secondTable;
        QHBoxLayout *layout;
        QVBoxLayout *selectSpreadsheetLayout;
        QPushButton *addNewSpreadsheetButton;
        QPushButton *firstTableButton;
        QPushButton *secondTableButton;
        QButtonGroup *groupTableButton;
        QStackedWidget *stackedTableWidget;
};

#endif
