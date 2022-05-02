/********************************************************************************
** Form generated from reading UI file 'CreationJournal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATIONJOURNAL_H
#define UI_CREATIONJOURNAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreationJournal
{
public:
    QLabel *auteur;
    QLabel *Titre;
    QLabel *revueJournal;
    QLabel *ISSN_2;
    QLabel *Annee;
    QLabel *volume;
    QLabel *numeroJournal;
    QLabel *pageJournal;
    QLabel *Bienvenue;
    QLabel *QuitterMessage;
    QPushButton *ok;
    QLabel *FenetreTitre;
    QLineEdit *NomAuteurSaisi;
    QLineEdit *TitreJournalSaisi;
    QLineEdit *RevueSaisi;
    QLineEdit *ISSNSaisi;
    QPushButton *Fermer;
    QLineEdit *AnneeSaisie;
    QLineEdit *volumeSaisi;
    QLineEdit *numeroSaisi;
    QLineEdit *PageSaisie;

    void setupUi(QDialog *CreationJournal)
    {
        if (CreationJournal->objectName().isEmpty())
            CreationJournal->setObjectName(QString::fromUtf8("CreationJournal"));
        CreationJournal->resize(1033, 702);
        auteur = new QLabel(CreationJournal);
        auteur->setObjectName(QString::fromUtf8("auteur"));
        auteur->setGeometry(QRect(20, 90, 181, 21));
        Titre = new QLabel(CreationJournal);
        Titre->setObjectName(QString::fromUtf8("Titre"));
        Titre->setGeometry(QRect(20, 160, 111, 16));
        revueJournal = new QLabel(CreationJournal);
        revueJournal->setObjectName(QString::fromUtf8("revueJournal"));
        revueJournal->setGeometry(QRect(20, 230, 181, 16));
        ISSN_2 = new QLabel(CreationJournal);
        ISSN_2->setObjectName(QString::fromUtf8("ISSN_2"));
        ISSN_2->setGeometry(QRect(20, 300, 181, 16));
        Annee = new QLabel(CreationJournal);
        Annee->setObjectName(QString::fromUtf8("Annee"));
        Annee->setGeometry(QRect(20, 370, 181, 16));
        volume = new QLabel(CreationJournal);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setGeometry(QRect(20, 430, 181, 16));
        numeroJournal = new QLabel(CreationJournal);
        numeroJournal->setObjectName(QString::fromUtf8("numeroJournal"));
        numeroJournal->setGeometry(QRect(20, 500, 181, 16));
        pageJournal = new QLabel(CreationJournal);
        pageJournal->setObjectName(QString::fromUtf8("pageJournal"));
        pageJournal->setGeometry(QRect(20, 570, 261, 16));
        Bienvenue = new QLabel(CreationJournal);
        Bienvenue->setObjectName(QString::fromUtf8("Bienvenue"));
        Bienvenue->setGeometry(QRect(20, 40, 401, 16));
        QuitterMessage = new QLabel(CreationJournal);
        QuitterMessage->setObjectName(QString::fromUtf8("QuitterMessage"));
        QuitterMessage->setGeometry(QRect(20, 650, 491, 16));
        ok = new QPushButton(CreationJournal);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(560, 650, 90, 28));
        FenetreTitre = new QLabel(CreationJournal);
        FenetreTitre->setObjectName(QString::fromUtf8("FenetreTitre"));
        FenetreTitre->setGeometry(QRect(410, 10, 221, 16));
        NomAuteurSaisi = new QLineEdit(CreationJournal);
        NomAuteurSaisi->setObjectName(QString::fromUtf8("NomAuteurSaisi"));
        NomAuteurSaisi->setGeometry(QRect(240, 80, 321, 31));
        TitreJournalSaisi = new QLineEdit(CreationJournal);
        TitreJournalSaisi->setObjectName(QString::fromUtf8("TitreJournalSaisi"));
        TitreJournalSaisi->setGeometry(QRect(240, 150, 321, 31));
        RevueSaisi = new QLineEdit(CreationJournal);
        RevueSaisi->setObjectName(QString::fromUtf8("RevueSaisi"));
        RevueSaisi->setGeometry(QRect(240, 220, 321, 31));
        ISSNSaisi = new QLineEdit(CreationJournal);
        ISSNSaisi->setObjectName(QString::fromUtf8("ISSNSaisi"));
        ISSNSaisi->setGeometry(QRect(240, 290, 321, 31));
        Fermer = new QPushButton(CreationJournal);
        Fermer->setObjectName(QString::fromUtf8("Fermer"));
        Fermer->setGeometry(QRect(680, 650, 141, 28));
        AnneeSaisie = new QLineEdit(CreationJournal);
        AnneeSaisie->setObjectName(QString::fromUtf8("AnneeSaisie"));
        AnneeSaisie->setGeometry(QRect(240, 360, 321, 31));
        volumeSaisi = new QLineEdit(CreationJournal);
        volumeSaisi->setObjectName(QString::fromUtf8("volumeSaisi"));
        volumeSaisi->setGeometry(QRect(240, 420, 321, 31));
        numeroSaisi = new QLineEdit(CreationJournal);
        numeroSaisi->setObjectName(QString::fromUtf8("numeroSaisi"));
        numeroSaisi->setGeometry(QRect(240, 490, 321, 31));
        PageSaisie = new QLineEdit(CreationJournal);
        PageSaisie->setObjectName(QString::fromUtf8("PageSaisie"));
        PageSaisie->setGeometry(QRect(240, 560, 321, 31));

        retranslateUi(CreationJournal);
        QObject::connect(ok, SIGNAL(clicked()), CreationJournal, SLOT(Enregistrement()));
        QObject::connect(Fermer, SIGNAL(clicked()), CreationJournal, SLOT(close()));

        QMetaObject::connectSlotsByName(CreationJournal);
    } // setupUi

    void retranslateUi(QDialog *CreationJournal)
    {
        CreationJournal->setWindowTitle(QApplication::translate("CreationJournal", "CreationJournal", nullptr));
        auteur->setText(QApplication::translate("CreationJournal", "Nom de l'auteur du Journal  :", nullptr));
        Titre->setText(QApplication::translate("CreationJournal", "Titre du journal :", nullptr));
        revueJournal->setText(QApplication::translate("CreationJournal", "Le nom de la revue du journal :", nullptr));
        ISSN_2->setText(QApplication::translate("CreationJournal", "L'identifiant du journal (ISSN):", nullptr));
        Annee->setText(QApplication::translate("CreationJournal", "L'ann\303\251e d'\303\251dition du journal :", nullptr));
        volume->setText(QApplication::translate("CreationJournal", "Le volume du journal :", nullptr));
        numeroJournal->setText(QApplication::translate("CreationJournal", "Le num\303\251ro du journal :", nullptr));
        pageJournal->setText(QApplication::translate("CreationJournal", "La page ou commence la reference:", nullptr));
        Bienvenue->setText(QApplication::translate("CreationJournal", "Pour ajouter un journal , veuillez saisir les informations suivantes.", nullptr));
        QuitterMessage->setText(QApplication::translate("CreationJournal", "Une fois que vous avez fini de saisir toutes les informations,  veuillez cliquer sur ok.", nullptr));
        ok->setText(QApplication::translate("CreationJournal", "ok", nullptr));
        FenetreTitre->setText(QApplication::translate("CreationJournal", "Asssistance pour ajout d'un journal. ", nullptr));
        Fermer->setText(QApplication::translate("CreationJournal", "Fermer la fenetre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreationJournal: public Ui_CreationJournal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATIONJOURNAL_H
