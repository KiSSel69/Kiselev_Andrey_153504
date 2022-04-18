#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QMessageBox>
#include <QRegularExpression>
#include <QTableView>
#include <QFile>
#include <QFileDialog>
#include <QStandardItemModel>
#include <QComboBox>

#include "doublist.h"
#include "student.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void admissionPlanWindowOpen();

    void createTableView();

    void quickSort();
    bool inputIsCorrect(QString path);
    QString getStorage();

    //search

    bool individualSurname(QString object);
    bool individualCity(QString object);

private slots:
    //Button in QDialog
    void pushButtonAdmissionPlanEnter();
    void pushButtonAddStudentEnter();
    //search
    void showSearchSurnameTable();
    void closeSearchSurnameWindow();

    void showSearchCityTable();
    void closeSearchCityWindow();

    void showSearchGradeTable();
    void closeSearchGradeWindow();

    //Button in ui
    void on_openFileButton_clicked();
    void on_updateTableViewButton_clicked();

    void on_addStudentButton_clicked();

    void on_surnameSearchButton_clicked();

    void on_citySearchButton_clicked();

    void on_gradeSearchButton_clicked();

    void on_studentListToFileButton_clicked();

private:
    int maxSizeList;
    QString storage;

    Ui::MainWindow *ui;

    //QDialog
    QDialog* admissionPlanWindow;

    QDialog* addStudentWindow;

    //QLineEdit
    QLineEdit* admissionPlanInput;

    QLineEdit* addStudentNameInput;
    QLineEdit* addStudentSurnameInput;
    QLineEdit* addStudentPatronymicInput;

    //QLineEdit* addStudentFirstGradeInput;
    //QLineEdit* addStudentSecondGradeInput;
    //QLineEdit* addStudentThirdGradeInput;

    QComboBox* addStudentFirstGradeInput;
    QComboBox* addStudentSecondGradeInput;
    QComboBox* addStudentThirdGradeInput;

    QLineEdit* addStudentAddressInput;
    QLineEdit* addStudentCityInput;

    //QLabel
    QLabel* admissionPlanText;

    QLabel* informationAddStudentWindow;

    QLabel* addStudentNameText;
    QLabel* addStudentSurnameText;
    QLabel* addStudentPatronymicText;

    QLabel* addStudentFirstGradeText;
    QLabel* addStudentSecondGradeText;
    QLabel* addStudentThirdGradeText;

    QLabel* addStudentAddressText;
    QLabel* addStudentCityText;

    //QPushButton
    QPushButton* admissionPlanEnter;

    QPushButton* addStudentEnter;

    //DoubList<Student> studentList;
    //QList<Student> studentList;

    DoubList<Student,QString> studentList;

    //Search surname
    QDialog* searchSurnameWindow;
    QTableView* searchSurnameTable;
    QLineEdit* searchSurnameInput;

    //Search city
    QDialog* searchCityWindow;
    QTableView* searchCityTable;
    QLineEdit* searchCityInput;

    //Search grade
    QDialog* searchGradeWindow;
    QTableView* searchGradeTable;
    QLineEdit* searchGradeInput;
};
#endif // MAINWINDOW_H
