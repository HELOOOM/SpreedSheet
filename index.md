# SpreedSheet

## Introduction

A spreadsheet is a grid composed of an indefinite number of rows and columns that cross to make cells where information is entered. Many people use spreadsheets because of their easy-to-operate functions. Spreadsheets once were known as worksheets used for educational and business purposes only. Today spreadsheets have been discovered also by moms making shopping lists and children creating Christmas wish lists.

## Functionality

Spreadsheets feature columns and rows to keep inserted information legible and simple to understand. You can use spreadsheets to enter data, calculate equations and create charts and graphs. Spreadsheet software has the capability to create a million rows by 16,000 columns, easily enough space to store large databases of text and data.

### **In  our SpreadSheet we have an application with:**

- Menu Bar
- Two tools bars
- Status bar to print the informations

### **the application look like that:**

![IMAGE](Spreedsheet.png)

### **To result with such a functional application you have to go through multiple functions, slots, actions and methods (But don't worry we will explain the functionality and role of each part of our code)** 

# Summary

- ## [SpreedSheet Header](#spreedsheet-header)
   - ### [Protected Functions](#protected-functions)
   - ### [Private Slots](#private-slots)



## SpreedSheet Header

```c++
#ifndef SPREADSHEET_H
#define SPREADSHEET_H

#include <QMainWindow>
#include <QTableWidget>
#include <QAction>
#include <QMenu>
#include <QToolBar>
#include <QLabel>
#include <QStatusBar>

class SpreadSheet : public QMainWindow
{
    Q_OBJECT

public:
    SpreadSheet(QWidget *parent = nullptr);
    ~SpreadSheet();
```

## Protected Functions

```c++
protected:
    void setupMainWidget();
    void createActions();
    void createMenus();
    void createToolBars();
    void makeConnexions();
    void saveContent(QString file) const;
    void loadContent(QString filename) const;
```

## Private Slots

```c++
private slots:
    void close();
    void updateStatusBar(int, int); //Respond for the call changed
    void goToCellSlot();
    void goFind();
    void saveSlot();             //Slot to save the content of the file
//    void openSlot();
    void loadSlot();
 //Pointers
```
