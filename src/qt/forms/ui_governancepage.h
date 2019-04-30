/********************************************************************************
** Form generated from reading UI file 'governancepage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOVERNANCEPAGE_H
#define UI_GOVERNANCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GovernancePage
{
public:
    QVBoxLayout *topLayout;
    QVBoxLayout *verticalLayout_Master;
    QFrame *frame_Header;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_Header;
    QLabel *labelOverviewHeaderLeft;
    QSpacerItem *horizontalSpacer;
    QLabel *labelOverviewHeaderRight;
    QFrame *frame_BG;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_Content;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_Content;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *proposalGrid;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *UpdateButton;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_budget_info;
    QGridLayout *gridLayout;
    QLabel *next_superblock_label;
    QLabel *next_superblock_value;
    QLabel *blocks_before_super_label;
    QLabel *blocks_before_super_value;
    QLabel *time_before_super_label;
    QLabel *time_before_super_value;
    QLabel *alloted_budget_label;
    QLabel *alloted_budget_value;
    QLabel *unallocated_budget_label;
    QLabel *unallocated_budget_value;
    QLabel *masternode_count_label;
    QLabel *masternode_count_value;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *GovernancePage)
    {
        if (GovernancePage->objectName().isEmpty())
            GovernancePage->setObjectName(QStringLiteral("GovernancePage"));
        GovernancePage->resize(968, 457);
        topLayout = new QVBoxLayout(GovernancePage);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(9, 9, 9, 9);
        verticalLayout_Master = new QVBoxLayout();
        verticalLayout_Master->setSpacing(0);
        verticalLayout_Master->setObjectName(QStringLiteral("verticalLayout_Master"));
        frame_Header = new QFrame(GovernancePage);
        frame_Header->setObjectName(QStringLiteral("frame_Header"));
        verticalLayout_4 = new QVBoxLayout(frame_Header);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_Header = new QHBoxLayout();
        horizontalLayout_Header->setObjectName(QStringLiteral("horizontalLayout_Header"));
        labelOverviewHeaderLeft = new QLabel(frame_Header);
        labelOverviewHeaderLeft->setObjectName(QStringLiteral("labelOverviewHeaderLeft"));
        labelOverviewHeaderLeft->setMinimumSize(QSize(464, 60));
        labelOverviewHeaderLeft->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        labelOverviewHeaderLeft->setFont(font);

        horizontalLayout_Header->addWidget(labelOverviewHeaderLeft);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Header->addItem(horizontalSpacer);

        labelOverviewHeaderRight = new QLabel(frame_Header);
        labelOverviewHeaderRight->setObjectName(QStringLiteral("labelOverviewHeaderRight"));
        labelOverviewHeaderRight->setMinimumSize(QSize(464, 60));
        labelOverviewHeaderRight->setMaximumSize(QSize(16777215, 60));
        QFont font1;
        font1.setPointSize(14);
        labelOverviewHeaderRight->setFont(font1);
        labelOverviewHeaderRight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_Header->addWidget(labelOverviewHeaderRight);

        horizontalLayout_Header->setStretch(0, 1);
        horizontalLayout_Header->setStretch(2, 1);

        verticalLayout_4->addLayout(horizontalLayout_Header);


        verticalLayout_Master->addWidget(frame_Header);

        frame_BG = new QFrame(GovernancePage);
        frame_BG->setObjectName(QStringLiteral("frame_BG"));
        verticalLayout_3 = new QVBoxLayout(frame_BG);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        frame_Content = new QFrame(frame_BG);
        frame_Content->setObjectName(QStringLiteral("frame_Content"));
        verticalLayout = new QVBoxLayout(frame_Content);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_Content = new QHBoxLayout();
        horizontalLayout_Content->setObjectName(QStringLiteral("horizontalLayout_Content"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea = new QScrollArea(frame_Content);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setLineWidth(0);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 742, 282));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        proposalGrid = new QVBoxLayout(scrollAreaWidgetContents);
        proposalGrid->setSpacing(0);
        proposalGrid->setObjectName(QStringLiteral("proposalGrid"));
        proposalGrid->setSizeConstraint(QLayout::SetDefaultConstraint);
        proposalGrid->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        UpdateButton = new QPushButton(frame_Content);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));

        horizontalLayout->addWidget(UpdateButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_Content->addLayout(verticalLayout_2);

        frame_budget_info = new QFrame(frame_Content);
        frame_budget_info->setObjectName(QStringLiteral("frame_budget_info"));
        frame_budget_info->setFrameShape(QFrame::StyledPanel);
        frame_budget_info->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_budget_info);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        next_superblock_label = new QLabel(frame_budget_info);
        next_superblock_label->setObjectName(QStringLiteral("next_superblock_label"));

        gridLayout->addWidget(next_superblock_label, 0, 0, 1, 1);

        next_superblock_value = new QLabel(frame_budget_info);
        next_superblock_value->setObjectName(QStringLiteral("next_superblock_value"));

        gridLayout->addWidget(next_superblock_value, 0, 1, 1, 1, Qt::AlignRight);

        blocks_before_super_label = new QLabel(frame_budget_info);
        blocks_before_super_label->setObjectName(QStringLiteral("blocks_before_super_label"));

        gridLayout->addWidget(blocks_before_super_label, 1, 0, 1, 1);

        blocks_before_super_value = new QLabel(frame_budget_info);
        blocks_before_super_value->setObjectName(QStringLiteral("blocks_before_super_value"));

        gridLayout->addWidget(blocks_before_super_value, 1, 1, 1, 1, Qt::AlignRight);

        time_before_super_label = new QLabel(frame_budget_info);
        time_before_super_label->setObjectName(QStringLiteral("time_before_super_label"));

        gridLayout->addWidget(time_before_super_label, 2, 0, 1, 1);

        time_before_super_value = new QLabel(frame_budget_info);
        time_before_super_value->setObjectName(QStringLiteral("time_before_super_value"));

        gridLayout->addWidget(time_before_super_value, 2, 1, 1, 1, Qt::AlignRight);

        alloted_budget_label = new QLabel(frame_budget_info);
        alloted_budget_label->setObjectName(QStringLiteral("alloted_budget_label"));

        gridLayout->addWidget(alloted_budget_label, 3, 0, 1, 1);

        alloted_budget_value = new QLabel(frame_budget_info);
        alloted_budget_value->setObjectName(QStringLiteral("alloted_budget_value"));

        gridLayout->addWidget(alloted_budget_value, 3, 1, 1, 1, Qt::AlignRight);

        unallocated_budget_label = new QLabel(frame_budget_info);
        unallocated_budget_label->setObjectName(QStringLiteral("unallocated_budget_label"));

        gridLayout->addWidget(unallocated_budget_label, 4, 0, 1, 1);

        unallocated_budget_value = new QLabel(frame_budget_info);
        unallocated_budget_value->setObjectName(QStringLiteral("unallocated_budget_value"));

        gridLayout->addWidget(unallocated_budget_value, 4, 1, 1, 1, Qt::AlignRight);

        masternode_count_label = new QLabel(frame_budget_info);
        masternode_count_label->setObjectName(QStringLiteral("masternode_count_label"));

        gridLayout->addWidget(masternode_count_label, 5, 0, 1, 1);

        masternode_count_value = new QLabel(frame_budget_info);
        masternode_count_value->setObjectName(QStringLiteral("masternode_count_value"));

        gridLayout->addWidget(masternode_count_value, 5, 1, 1, 1, Qt::AlignRight);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 0, 1, 1);


        horizontalLayout_Content->addWidget(frame_budget_info);


        verticalLayout->addLayout(horizontalLayout_Content);


        verticalLayout_3->addWidget(frame_Content);


        verticalLayout_Master->addWidget(frame_BG);

        verticalLayout_Master->setStretch(1, 1);

        topLayout->addLayout(verticalLayout_Master);


        retranslateUi(GovernancePage);

        QMetaObject::connectSlotsByName(GovernancePage);
    } // setupUi

    void retranslateUi(QWidget *GovernancePage)
    {
        GovernancePage->setWindowTitle(QApplication::translate("GovernancePage", "Form", Q_NULLPTR));
        labelOverviewHeaderLeft->setText(QApplication::translate("GovernancePage", "GOVERNANCE", Q_NULLPTR));
        labelOverviewHeaderRight->setText(QString());
        UpdateButton->setText(QApplication::translate("GovernancePage", "Update Proposals", Q_NULLPTR));
        next_superblock_label->setText(QApplication::translate("GovernancePage", "Next super block:", Q_NULLPTR));
        next_superblock_value->setText(QApplication::translate("GovernancePage", "0", Q_NULLPTR));
        blocks_before_super_label->setText(QApplication::translate("GovernancePage", "Blocks to next super block:", Q_NULLPTR));
        blocks_before_super_value->setText(QApplication::translate("GovernancePage", "0", Q_NULLPTR));
        time_before_super_label->setText(QApplication::translate("GovernancePage", "Days to budget payout (estimate):", Q_NULLPTR));
        time_before_super_value->setText(QApplication::translate("GovernancePage", "0", Q_NULLPTR));
        alloted_budget_label->setText(QApplication::translate("GovernancePage", "Allotted budget:", Q_NULLPTR));
        alloted_budget_value->setText(QApplication::translate("GovernancePage", "0", Q_NULLPTR));
        unallocated_budget_label->setText(QApplication::translate("GovernancePage", "Budget left:", Q_NULLPTR));
        unallocated_budget_value->setText(QApplication::translate("GovernancePage", "0", Q_NULLPTR));
        masternode_count_label->setText(QApplication::translate("GovernancePage", "Masternodes count:", Q_NULLPTR));
        masternode_count_value->setText(QApplication::translate("GovernancePage", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GovernancePage: public Ui_GovernancePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOVERNANCEPAGE_H
