/********************************************************************************
** Form generated from reading UI file 'CreationOuvrage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATIONOUVRAGE_H
#define UI_CREATIONOUVRAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreationOuvrage
{
public:
    QLabel *Bienvenue;
    QLabel *NomAuteur;
    QLabel *TitreOuvrage;
    QLabel *VilleEdition;
    QLabel *Editeur;
    QLabel *AnneeEdition;
    QLabel *IdentifiantISBN;
    QLabel *QuitterMessage;
    QPushButton *pushButton;
    QLabel *Fenetre;
    QLineEdit *NomAuteurSaisi;
    QLineEdit *TitreOuvrageSaisi;
    QLineEdit *VilleditionSaisi;
    QLineEdit *EditeurSaisi;
    QLineEdit *AnneeSaisi;
    QLineEdit *ISBNSaisi;
    QPushButton *Fermer;

    void setupUi(QDialog *CreationOuvrage)
    {
        if (CreationOuvrage->objectName().isEmpty())
            CreationOuvrage->setObjectName(QString::fromUtf8("CreationOuvrage"));
        CreationOuvrage->resize(880, 581);
        Bienvenue = new QLabel(CreationOuvrage);
        Bienvenue->setObjectName(QString::fromUtf8("Bienvenue"));
        Bienvenue->setGeometry(QRect(20, 40, 401, 16));
        NomAuteur = new QLabel(CreationOuvrage);
        NomAuteur->setObjectName(QString::fromUtf8("NomAuteur"));
        NomAuteur->setGeometry(QRect(20, 90, 191, 16));
        TitreOuvrage = new QLabel(CreationOuvrage);
        TitreOuvrage->setObjectName(QString::fromUtf8("TitreOuvrage"));
        TitreOuvrage->setGeometry(QRect(20, 160, 191, 16));
        VilleEdition = new QLabel(CreationOuvrage);
        VilleEdition->setObjectName(QString::fromUtf8("VilleEdition"));
        VilleEdition->setGeometry(QRect(20, 230, 191, 16));
        Editeur = new QLabel(CreationOuvrage);
        Editeur->setObjectName(QString::fromUtf8("Editeur"));
        Editeur->setGeometry(QRect(20, 300, 191, 16));
        AnneeEdition = new QLabel(CreationOuvrage);
        AnneeEdition->setObjectName(QString::fromUtf8("AnneeEdition"));
        AnneeEdition->setGeometry(QRect(20, 370, 191, 16));
        IdentifiantISBN = new QLabel(CreationOuvrage);
        IdentifiantISBN->setObjectName(QString::fromUtf8("IdentifiantISBN"));
        IdentifiantISBN->setGeometry(QRect(20, 440, 191, 16));
        QuitterMessage = new QLabel(CreationOuvrage);
        QuitterMessage->setObjectName(QString::fromUtf8("QuitterMessage"));
        QuitterMessage->setGeometry(QRect(20, 510, 491, 16));
        pushButton = new QPushButton(CreationOuvrage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(540, 500, 90, 28));
        Fenetre = new QLabel(CreationOuvrage);
        Fenetre->setObjectName(QString::fromUtf8("Fenetre"));
        Fenetre->setGeometry(QRect(270, 10, 221, 16));
        NomAuteurSaisi = new QLineEdit(CreationOuvrage);
        NomAuteurSaisi->setObjectName(QString::fromUtf8("NomAuteurSaisi"));
        NomAuteurSaisi->setGeometry(QRect(230, 80, 381, 31));
        TitreOuvrageSaisi = new QLineEdit(CreationOuvrage);
        TitreOuvrageSaisi->setObjectName(QString::fromUtf8("TitreOuvrageSaisi"));
        TitreOuvrageSaisi->setGeometry(QRect(230, 150, 381, 31));
        VilleditionSaisi = new QLineEdit(CreationOuvrage);
        VilleditionSaisi->setObjectName(QString::fromUtf8("VilleditionSaisi"));
        VilleditionSaisi->setGeometry(QRect(230, 220, 381, 31));
        EditeurSaisi = new QLineEdit(CreationOuvrage);
        EditeurSaisi->setObjectName(QString::fromUtf8("EditeurSaisi"));
        EditeurSaisi->setGeometry(QRect(230, 290, 381, 31));
        AnneeSaisi = new QLineEdit(CreationOuvrage);
        AnneeSaisi->setObjectName(QString::fromUtf8("AnneeSaisi"));
        AnneeSaisi->setGeometry(QRect(230, 360, 381, 31));
        ISBNSaisi = new QLineEdit(CreationOuvrage);
        ISBNSaisi->setObjectName(QString::fromUtf8("ISBNSaisi"));
        ISBNSaisi->setGeometry(QRect(230, 430, 381, 31));
        Fermer = new QPushButton(CreationOuvrage);
        Fermer->setObjectName(QString::fromUtf8("Fermer"));
        Fermer->setGeometry(QRect(660, 500, 111, 28));

        retranslateUi(CreationOuvrage);
        QObject::connect(Fermer, SIGNAL(clicked()), CreationOuvrage, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), CreationOuvrage, SLOT(Validation()));

        QMetaObject::connectSlotsByName(CreationOuvrage);
    } // setupUi

    void retranslateUi(QDialog *CreationOuvrage)
    {
        CreationOuvrage->setWindowTitle(QApplication::translate("CreationOuvrage", "CreationOuvrage", nullptr));
        Bienvenue->setText(QApplication::translate("CreationOuvrage", "Pour ajouter un ouvrage , veuillez saisir les informations suivantes.", nullptr));
        NomAuteur->setText(QApplication::translate("CreationOuvrage", "Nom de l'auteur de l'ouvrage :", nullptr));
        TitreOuvrage->setText(QApplication::translate("CreationOuvrage", "Titre de l'ouvrage :", nullptr));
        VilleEdition->setText(QApplication::translate("CreationOuvrage", "Ville d'\303\251dition de l'ouvrage :", nullptr));
        Editeur->setText(QApplication::translate("CreationOuvrage", "\303\211diteur de l'ouvrage :", nullptr));
        AnneeEdition->setText(QApplication::translate("CreationOuvrage", "Ann\303\251e d'\303\251dition de l'ouvrage : ", nullptr));
        IdentifiantISBN->setText(QApplication::translate("CreationOuvrage", "Identifiant de l'ouvrage (ISBN)  : ", nullptr));
        QuitterMessage->setText(QApplication::translate("CreationOuvrage", "Une fois que vous avez fini de saisir toutes les informations,  veuillez cliquer sur ok.", nullptr));
        pushButton->setText(QApplication::translate("CreationOuvrage", "Ok", nullptr));
        Fenetre->setText(QApplication::translate("CreationOuvrage", "Asssistance pour ajout d'un ouvrage. ", nullptr));
        Fermer->setText(QApplication::translate("CreationOuvrage", "Fermer la fenetre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreationOuvrage: public Ui_CreationOuvrage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATIONOUVRAGE_H
