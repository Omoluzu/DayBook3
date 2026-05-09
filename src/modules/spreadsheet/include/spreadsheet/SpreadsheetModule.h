#ifndef SPREADSHEETMODULE_H
#define SPREADSHEETMODULE_H

#include "core/IModule.h"
#include <QWidget>


namespace Spreadsheet {
    class SpreadsheetModule : public QObject, public Core::IModule {
        Q_OBJECT

        public:
            explicit SpreadsheetModule(QObject *parent = nullptr);
            ~SpreadsheetModule() override;

            bool initialize() override;
            QWidget *mainWidget() override;
            QString moduleName() const override;

        private:
            QWidget *m_mainWidget = nullptr;
            class QWidget *m_view = nullptr;
    };
}

#endif
