/********************************************************************************
** Form generated from reading UI file 'suppressionReference.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRESSIONREFERENCE_H
#define UI_SUPPRESSIONREFERENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_suppressionReference
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *supprimer;
    QPushButton *Annuler;
    QPushButton *fermer;
    QLineEdit *identifiantSaisi;

    void setupUi(QDialog *suppressionReference)
    {
        if (suppressionReference->objectName().isEmpty())
            suppressionReference->setObjectName(QString::fromUtf8("suppressionReference"));
        suppressionReference->resize(1134, 313);
        label = new QLabel(suppressionReference);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 110, 381, 101));
        label_2 = new QLabel(suppressionReference);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 70, 441, 16));
        label_3 = new QLabel(suppressionReference);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 240, 501, 16));
        label_4 = new QLabel(suppressionReference);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 260, 441, 16));
        supprimer = new QPushButton(suppressionReference);
        supprimer->setObjectName(QString::fromUtf8("supprimer"));
        supprimer->setGeometry(QRect(890, 250, 90, 28));
        Annuler = new QPushButton(suppressionReference);
        Annuler->setObjectName(QString::fromUtf8("Annuler"));
        Annuler->setGeometry(QRect(780, 250, 90, 28));
        fermer = new QPushButton(suppressionReference);
        fermer->setObjectName(QString::fromUtf8("fermer"));
        fermer->setGeometry(QRect(1000, 250, 90, 28));
        identifiantSaisi = new QLineEdit(suppressionReference);
        identifiantSaisi->setObjectName(QString::fromUtf8("identifiantSaisi"));
        identifiantSaisi->setGeometry(QRect(410, 130, 481, 51));

        retranslateUi(suppressionReference);
        QObject::connect(fermer, SIGNAL(clicked()), suppressionReference, SLOT(close()));
        QObject::connect(Annuler, SIGNAL(clicked()), suppressionReference, SLOT(close()));
        QObject::connect(supprimer, SIGNAL(clicked()), suppressionReference, SLOT(Validation()));

        QMetaObject::connectSlotsByName(suppressionReference);
    } // setupUi

    void retranslateUi(QDialog *suppressionReference)
    {
        suppressionReference->setWindowTitle(QApplication::translate("suppressionReference", "suppressionReference", nullptr));
        label->setText(QApplication::translate("suppressionReference", "Identifiant de la r\303\251f\303\251rence que vous souhaitez  supprimer :", nullptr));
        label_2->setText(QApplication::translate("suppressionReference", "Si vous souhaiez supprimer une r\303\251f\303\251rence, veuillez saisir son identifiant.", nullptr));
        label_3->setText(QApplication::translate("suppressionReference", "Si vous souhaitez continuer la suppression, veuillez appuyer sur le bouton continuer.", nullptr));
        label_4->setText(QApplication::translate("suppressionReference", "Ou si vous d\303\251sirez annuler la suppression, veuillez appuyer sur annuler.", nullptr));
        supprimer->setText(QApplication::translate("suppressionReference", "Supprimer", nullptr));
        Annuler->setText(QApplication::translate("suppressionReference", "Annuler", nullptr));
        fermer->setText(QApplication::translate("suppressionReference", "Fermer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class suppressionReference: public Ui_suppressionReference {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRESSIONREFERENCE_H
