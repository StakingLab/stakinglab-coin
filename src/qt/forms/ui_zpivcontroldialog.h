/********************************************************************************
** Form generated from reading UI file 'zpivcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZLABXCONTROLDIALOG_H
#define UI_ZLABXCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZPivControlDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZPiv;
    QLabel *labelZPiv_int;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout3;
    QPushButton *pushButtonAll;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout1;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZPivControlDialog)
    {
        if (ZPivControlDialog->objectName().isEmpty())
            ZPivControlDialog->setObjectName(QStringLiteral("ZPivControlDialog"));
        ZPivControlDialog->resize(781, 450);
        ZPivControlDialog->setMinimumSize(QSize(781, 450));
        verticalLayout = new QVBoxLayout(ZPivControlDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(-1);
#endif
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 10);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(10);
        formLayout->setContentsMargins(6, -1, 6, -1);
        labelQuantity = new QLabel(ZPivControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZPivControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZPiv = new QLabel(ZPivControlDialog);
        labelZPiv->setObjectName(QStringLiteral("labelZPiv"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZPiv);

        labelZPiv_int = new QLabel(ZPivControlDialog);
        labelZPiv_int->setObjectName(QStringLiteral("labelZPiv_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZPiv_int);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout3 = new QHBoxLayout();
        horizontalLayout3->setSpacing(14);
        horizontalLayout3->setObjectName(QStringLiteral("horizontalLayout3"));
        horizontalLayout3->setContentsMargins(-1, -1, -1, 10);
        pushButtonAll = new QPushButton(ZPivControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        horizontalLayout3->addWidget(pushButtonAll);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout3);

        verticalLayout1 = new QVBoxLayout();
        verticalLayout1->setObjectName(QStringLiteral("verticalLayout1"));
        treeWidget = new QTreeWidget(ZPivControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(5, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(4, QStringLiteral("Precomputed"));
        __qtreewidgetitem->setText(3, QStringLiteral("Version"));
        __qtreewidgetitem->setText(2, QStringLiteral("ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy);
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout1->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZPivControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout1->addWidget(buttonBox);


        verticalLayout->addLayout(verticalLayout1);


        retranslateUi(ZPivControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZPivControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZPivControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZPivControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZPivControlDialog)
    {
        ZPivControlDialog->setWindowTitle(QApplication::translate("ZPivControlDialog", "Select zLABX to Spend", Q_NULLPTR));
        labelQuantity->setText(QApplication::translate("ZPivControlDialog", "Quantity", Q_NULLPTR));
        labelQuantity_int->setText(QApplication::translate("ZPivControlDialog", "0", Q_NULLPTR));
        labelZPiv->setText(QApplication::translate("ZPivControlDialog", "zLABX", Q_NULLPTR));
        labelZPiv_int->setText(QApplication::translate("ZPivControlDialog", "0", Q_NULLPTR));
        pushButtonAll->setText(QApplication::translate("ZPivControlDialog", "Select/Deselect All", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(6, QApplication::translate("ZPivControlDialog", "Spendable?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZPivControlDialog: public Ui_ZPivControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZLABXCONTROLDIALOG_H
