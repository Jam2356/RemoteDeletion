#ifndef SUPERABILITY_H
#define SUPERABILITY_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SuperAbility; }
QT_END_NAMESPACE

class SuperAbility : public QWidget {
        Q_OBJECT

    public:
        explicit SuperAbility(QWidget *parent = nullptr);
        ~SuperAbility();

    private:
        Ui::SuperAbility *uiSuperAbility;

};

#endif // SUPERABILITY_H
