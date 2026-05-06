#ifndef SPREADSHEETVIEW_H
#define SPREADSHEETVIEW_H

#include <QTableWidget>
#include <QWidget>


class SpreadsheetView : public QTableWidget
{
    Q_OBJECT

public:
    explicit SpreadsheetView(QWidget *parent = nullptr);
    ~SpreadsheetView();
};

# endif
