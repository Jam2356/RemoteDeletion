#ifndef SUPERABILITY_H
#define SUPERABILITY_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SuperAbility; }
QT_END_NAMESPACE

class SuperAbility : public QWidget {
        Q_OBJECT

    private:
        Ui::SuperAbility *uiSuperAbility;

    public:
        explicit SuperAbility(QWidget *parent = nullptr);
        ~SuperAbility();

    private slots:
        void on_pushButton_kick_clicked();

    signals:
        void signalNameToKick(QString nameKick);

};

#endif // SUPERABILITY_H
