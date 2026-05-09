#ifndef IMODULE_H
#define IMODULE_H

#include <QObject>
#include <QWidget>
#include <QString>


namespace Core {
    class IModule {

        public:
            virtual ~IModule() = default;

            virtual bool initialize() = 0;
            virtual QWidget *mainWidget() = 0;
            virtual QString moduleName() const = 0;
    };
}

#endif
