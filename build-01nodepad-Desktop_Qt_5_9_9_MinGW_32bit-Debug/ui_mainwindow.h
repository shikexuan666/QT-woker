/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Open;
    QAction *action_Save;
    QAction *action_SaveAs;
    QAction *action_Exit;
    QAction *action_New;
    QAction *action_Redo;
    QAction *action_Undo;
    QAction *action_Cut;
    QAction *action_Copy;
    QAction *action_Parse;
    QAction *action_UTF_8;
    QAction *action_GB18030;
    QAction *action_Close;
    QAction *action_CloseAll;
    QAction *action_Tile;
    QAction *action_Cascade;
    QAction *action_Next;
    QAction *action_Prevous;
    QAction *action_About;
    QAction *action_About_QT;
    QWidget *centralWidget;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_E;
    QMenu *menu_S;
    QMenu *menu_W;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1406, 711);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/image/open.gif"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open->setIcon(icon);
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/image/Save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon1);
        action_SaveAs = new QAction(MainWindow);
        action_SaveAs->setObjectName(QStringLiteral("action_SaveAs"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/image/lingcun.gif"), QSize(), QIcon::Normal, QIcon::Off);
        action_SaveAs->setIcon(icon2);
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/image/exit.gif"), QSize(), QIcon::Normal, QIcon::Off);
        action_Exit->setIcon(icon3);
        action_New = new QAction(MainWindow);
        action_New->setObjectName(QStringLiteral("action_New"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/image/New.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action_New->setIcon(icon4);
        QFont font;
        action_New->setFont(font);
        action_Redo = new QAction(MainWindow);
        action_Redo->setObjectName(QStringLiteral("action_Redo"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/image/indo.gif"), QSize(), QIcon::Normal, QIcon::Off);
        action_Redo->setIcon(icon5);
        action_Undo = new QAction(MainWindow);
        action_Undo->setObjectName(QStringLiteral("action_Undo"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/image/undo.gif"), QSize(), QIcon::Normal, QIcon::Off);
        action_Undo->setIcon(icon6);
        action_Cut = new QAction(MainWindow);
        action_Cut->setObjectName(QStringLiteral("action_Cut"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/image/cut.gif"), QSize(), QIcon::Normal, QIcon::Off);
        action_Cut->setIcon(icon7);
        action_Copy = new QAction(MainWindow);
        action_Copy->setObjectName(QStringLiteral("action_Copy"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/image/copy.gif"), QSize(), QIcon::Normal, QIcon::Off);
        action_Copy->setIcon(icon8);
        action_Parse = new QAction(MainWindow);
        action_Parse->setObjectName(QStringLiteral("action_Parse"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/image/paste.gif"), QSize(), QIcon::Normal, QIcon::Off);
        action_Parse->setIcon(icon9);
        action_UTF_8 = new QAction(MainWindow);
        action_UTF_8->setObjectName(QStringLiteral("action_UTF_8"));
        action_GB18030 = new QAction(MainWindow);
        action_GB18030->setObjectName(QStringLiteral("action_GB18030"));
        action_Close = new QAction(MainWindow);
        action_Close->setObjectName(QStringLiteral("action_Close"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix1/image/gaunbi.gif"), QSize(), QIcon::Normal, QIcon::Off);
        action_Close->setIcon(icon10);
        action_CloseAll = new QAction(MainWindow);
        action_CloseAll->setObjectName(QStringLiteral("action_CloseAll"));
        action_Tile = new QAction(MainWindow);
        action_Tile->setObjectName(QStringLiteral("action_Tile"));
        action_Cascade = new QAction(MainWindow);
        action_Cascade->setObjectName(QStringLiteral("action_Cascade"));
        action_Next = new QAction(MainWindow);
        action_Next->setObjectName(QStringLiteral("action_Next"));
        action_Prevous = new QAction(MainWindow);
        action_Prevous->setObjectName(QStringLiteral("action_Prevous"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QStringLiteral("action_About"));
        action_About_QT = new QAction(MainWindow);
        action_About_QT->setObjectName(QStringLiteral("action_About_QT"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setGeometry(QRect(0, 0, 1280, 720));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1406, 40));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        menu_S = new QMenu(menu_E);
        menu_S->setObjectName(QStringLiteral("menu_S"));
        menu_W = new QMenu(menuBar);
        menu_W->setObjectName(QStringLiteral("menu_W"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_W->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu->addAction(action_New);
        menu->addAction(action_Open);
        menu->addSeparator();
        menu->addAction(action_Save);
        menu->addAction(action_SaveAs);
        menu->addSeparator();
        menu->addAction(action_Exit);
        menu_E->addAction(action_Redo);
        menu_E->addAction(action_Undo);
        menu_E->addSeparator();
        menu_E->addAction(action_Cut);
        menu_E->addAction(action_Copy);
        menu_E->addAction(action_Parse);
        menu_E->addSeparator();
        menu_E->addAction(menu_S->menuAction());
        menu_S->addAction(action_UTF_8);
        menu_S->addAction(action_GB18030);
        menu_W->addAction(action_Close);
        menu_W->addAction(action_CloseAll);
        menu_W->addSeparator();
        menu_W->addAction(action_Tile);
        menu_W->addAction(action_Cascade);
        menu_W->addSeparator();
        menu_W->addAction(action_Next);
        menu_W->addAction(action_Prevous);
        menu_H->addAction(action_About);
        menu_H->addAction(action_About_QT);
        mainToolBar->addAction(action_New);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Open);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Save);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_SaveAs);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Redo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Undo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Cut);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_Open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266(&O)", Q_NULLPTR));
        action_Save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", Q_NULLPTR));
        action_SaveAs->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)", Q_NULLPTR));
        action_Exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&E)", Q_NULLPTR));
        action_New->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266(&N)", Q_NULLPTR));
        action_Redo->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200(&R)", Q_NULLPTR));
        action_Undo->setText(QApplication::translate("MainWindow", "\346\201\242\345\244\215(&U)", Q_NULLPTR));
        action_Cut->setText(QApplication::translate("MainWindow", "\345\211\252\350\264\264(&T)", Q_NULLPTR));
        action_Copy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", Q_NULLPTR));
        action_Parse->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264(&P)", Q_NULLPTR));
        action_UTF_8->setText(QApplication::translate("MainWindow", "UTF-8", Q_NULLPTR));
        action_GB18030->setText(QApplication::translate("MainWindow", "GB18030", Q_NULLPTR));
        action_Close->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255(&O)", Q_NULLPTR));
        action_CloseAll->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211(&A)", Q_NULLPTR));
        action_Tile->setText(QApplication::translate("MainWindow", "\345\271\263\351\223\272(&T)", Q_NULLPTR));
        action_Cascade->setText(QApplication::translate("MainWindow", "\345\261\202\345\217\240(&C)", Q_NULLPTR));
        action_Next->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\344\270\252(&N)", Q_NULLPTR));
        action_Prevous->setText(QApplication::translate("MainWindow", "\344\270\212\344\270\200\344\270\252(&P)", Q_NULLPTR));
        action_About->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216(&A)", Q_NULLPTR));
        action_About_QT->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216QT(&Q)", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", Q_NULLPTR));
        menu_E->setTitle(QApplication::translate("MainWindow", "\n"
"\347\274\226\350\276\221(&E)", Q_NULLPTR));
        menu_S->setTitle(QApplication::translate("MainWindow", "\347\274\226\347\240\201\346\240\274\345\274\217(&S)", Q_NULLPTR));
        menu_W->setTitle(QApplication::translate("MainWindow", "\347\252\227\345\217\243(&W)", Q_NULLPTR));
        menu_H->setTitle(QApplication::translate("MainWindow", "\n"
"\345\270\256\345\212\251(&H)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
