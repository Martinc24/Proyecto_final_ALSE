/********************************************************************************
** Form generated from reading UI file 'mainw_datos.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINW_DATOS_H
#define UI_MAINW_DATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainW_datos
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_temperatura;
    QLineEdit *lineEdit_humedad;
    QLabel *label_intensidadLuz;
    QLabel *label_humedad;
    QLabel *label_precipitacion;
    QLineEdit *lineEdit_precipitacion;
    QLabel *label_viento;
    QLineEdit *lineEdit_velocidad;
    QLineEdit *lineEdit_temperatura;
    QLineEdit *lineEdit_intensidadLuz;
    QLabel *label_direccion;
    QLineEdit *lineEdit_direccion;
    QLabel *label_velocidad;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_tiempo;
    QLineEdit *lineEdit_tiempo;
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *MainW_datos)
    {
        if (MainW_datos->objectName().isEmpty())
            MainW_datos->setObjectName(QString::fromUtf8("MainW_datos"));
        MainW_datos->resize(343, 352);
        layoutWidget = new QWidget(MainW_datos);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 329, 334));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_temperatura = new QLabel(layoutWidget);
        label_temperatura->setObjectName(QString::fromUtf8("label_temperatura"));

        gridLayout->addWidget(label_temperatura, 0, 0, 1, 1);

        lineEdit_humedad = new QLineEdit(layoutWidget);
        lineEdit_humedad->setObjectName(QString::fromUtf8("lineEdit_humedad"));
        lineEdit_humedad->setReadOnly(true);

        gridLayout->addWidget(lineEdit_humedad, 1, 1, 1, 1);

        label_intensidadLuz = new QLabel(layoutWidget);
        label_intensidadLuz->setObjectName(QString::fromUtf8("label_intensidadLuz"));

        gridLayout->addWidget(label_intensidadLuz, 6, 0, 1, 1);

        label_humedad = new QLabel(layoutWidget);
        label_humedad->setObjectName(QString::fromUtf8("label_humedad"));

        gridLayout->addWidget(label_humedad, 1, 0, 1, 1);

        label_precipitacion = new QLabel(layoutWidget);
        label_precipitacion->setObjectName(QString::fromUtf8("label_precipitacion"));

        gridLayout->addWidget(label_precipitacion, 5, 0, 1, 1);

        lineEdit_precipitacion = new QLineEdit(layoutWidget);
        lineEdit_precipitacion->setObjectName(QString::fromUtf8("lineEdit_precipitacion"));
        lineEdit_precipitacion->setReadOnly(true);

        gridLayout->addWidget(lineEdit_precipitacion, 5, 1, 1, 1);

        label_viento = new QLabel(layoutWidget);
        label_viento->setObjectName(QString::fromUtf8("label_viento"));
        QFont font;
        font.setPointSize(9);
        label_viento->setFont(font);

        gridLayout->addWidget(label_viento, 2, 0, 1, 1);

        lineEdit_velocidad = new QLineEdit(layoutWidget);
        lineEdit_velocidad->setObjectName(QString::fromUtf8("lineEdit_velocidad"));
        lineEdit_velocidad->setReadOnly(true);

        gridLayout->addWidget(lineEdit_velocidad, 3, 1, 1, 1);

        lineEdit_temperatura = new QLineEdit(layoutWidget);
        lineEdit_temperatura->setObjectName(QString::fromUtf8("lineEdit_temperatura"));
        lineEdit_temperatura->setAutoFillBackground(false);
        lineEdit_temperatura->setReadOnly(true);

        gridLayout->addWidget(lineEdit_temperatura, 0, 1, 1, 1);

        lineEdit_intensidadLuz = new QLineEdit(layoutWidget);
        lineEdit_intensidadLuz->setObjectName(QString::fromUtf8("lineEdit_intensidadLuz"));
        lineEdit_intensidadLuz->setReadOnly(true);

        gridLayout->addWidget(lineEdit_intensidadLuz, 6, 1, 1, 1);

        label_direccion = new QLabel(layoutWidget);
        label_direccion->setObjectName(QString::fromUtf8("label_direccion"));
        QFont font1;
        font1.setPointSize(7);
        label_direccion->setFont(font1);

        gridLayout->addWidget(label_direccion, 4, 0, 1, 1);

        lineEdit_direccion = new QLineEdit(layoutWidget);
        lineEdit_direccion->setObjectName(QString::fromUtf8("lineEdit_direccion"));
        lineEdit_direccion->setReadOnly(true);

        gridLayout->addWidget(lineEdit_direccion, 4, 1, 1, 1);

        label_velocidad = new QLabel(layoutWidget);
        label_velocidad->setObjectName(QString::fromUtf8("label_velocidad"));
        label_velocidad->setFont(font1);

        gridLayout->addWidget(label_velocidad, 3, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_tiempo = new QLabel(layoutWidget);
        label_tiempo->setObjectName(QString::fromUtf8("label_tiempo"));

        horizontalLayout_3->addWidget(label_tiempo);

        lineEdit_tiempo = new QLineEdit(layoutWidget);
        lineEdit_tiempo->setObjectName(QString::fromUtf8("lineEdit_tiempo"));
        lineEdit_tiempo->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_tiempo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        horizontalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(MainW_datos);

        QMetaObject::connectSlotsByName(MainW_datos);
    } // setupUi

    void retranslateUi(QDialog *MainW_datos)
    {
        MainW_datos->setWindowTitle(QCoreApplication::translate("MainW_datos", "Dialog", nullptr));
        label_temperatura->setText(QCoreApplication::translate("MainW_datos", "TEMPERATURA:", nullptr));
        label_intensidadLuz->setText(QCoreApplication::translate("MainW_datos", "INTENSIDAD \n"
"DE LUZ:", nullptr));
        label_humedad->setText(QCoreApplication::translate("MainW_datos", "HUMEDAD:", nullptr));
        label_precipitacion->setText(QCoreApplication::translate("MainW_datos", "PRECIPITACI\303\223N:", nullptr));
        label_viento->setText(QCoreApplication::translate("MainW_datos", "VIENTO:", nullptr));
        label_direccion->setText(QCoreApplication::translate("MainW_datos", "     DIRECCI\303\223N:", nullptr));
        label_velocidad->setText(QCoreApplication::translate("MainW_datos", "     VELOCIDAD:", nullptr));
        label_tiempo->setText(QCoreApplication::translate("MainW_datos", "TIEMPO TRANSCURRIDO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainW_datos: public Ui_MainW_datos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINW_DATOS_H
