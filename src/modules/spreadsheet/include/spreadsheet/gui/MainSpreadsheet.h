#ifndef MAINSPREADSHEET_H
#define MAINSPREADSHEET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QTableWidget>


class MainSpreadsheet : public QWidget
{
    Q_OBJECT

public:
    explicit MainSpreadsheet(QWidget *parent = nullptr);
    ~MainSpreadsheet();

private:
    QTableWidget *table;
    QHBoxLayout *layout;
    QVBoxLayout *selectSpreadsheetLayout;
    QPushButton *addNewSpreadsheetButton;
    QPushButton *firstTableButton;
};

#endif
