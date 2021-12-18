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
   - ### [Pointers](#pointers)
- ## [SpreedSheet CPP](#spreedsheet-cpp)


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
## Pointers

```c++
private:
    // --------------- Central Widget -------------//
    QTableWidget *spreadsheet;
    // --------------- Actions       --------------//
    QAction * newFile;
    QAction * open;
    QAction * save;
    QAction * saveAs;
    QAction * exit;
    QAction *cut;
    QAction *copy;
    QAction *paste;
    QAction *deleteAction;
    QAction *find;
    QAction *row;
    QAction *Column;
    QAction *all;
    QAction *goCell;
    QAction *recalculate;
    QAction *sort;
    QAction *showGrid;
    QAction *auto_recalculate;
    QAction *about;
    QAction *aboutQt;
    QString * currentFile;
    // ---------- Menus ----------
    QMenu *FileMenu;
    QMenu *editMenu;
    QMenu *toolsMenu;
    QMenu *optionsMenu;
    QMenu *helpMenu;
    //  ----- - Widget pouyr la bare d'etat
    QLabel *cellLocation;  //position de la cellule active
    QLabel *cellFormula;   // Formuel de la cellule active
};
#endif // SPREADSHEET_H
```
## SpreedSheet CPP

starting with seting spreadsheat **`setupMainWidget()`**, Creaeting Actions **`createActions()`**, Creating the tool bar **`createToolBars()`** and making the connexions **`makeConnexions()`**

```c++
SpreadSheet::SpreadSheet(QWidget *parent)
    : QMainWindow(parent)
{
    //Seting the spreadsheet

    setupMainWidget();

    // Creaeting Actions
    createActions();

    // Creating Menus
    createMenus();


    //Creating the tool bar
    createToolBars();

    //making the connexions
    makeConnexions();
}
```

Creating the labels for the status bar 
```c++
    cellLocation = new QLabel("(1, 1)");
    cellFormula = new QLabel("");
    statusBar()->addPermanentWidget(cellLocation);
    statusBar()->addPermanentWidget(cellFormula);
    currentFile =nullptr;
    setWindowTitle("Buffel");
```
Now, let's impliment our previous functions
- **setupMainWidget()**
```c++
void SpreadSheet::setupMainWidget()
{
    spreadsheet = new QTableWidget;
    spreadsheet->setRowCount(100);
    spreadsheet->setColumnCount(20);
    setCentralWidget(spreadsheet);
}
```
- **createActions()**

In this function we create each action using `ExampleAction = new QAction(ExampleIcone, "&New", this)` and we added icons for this actions using `QPixmap newExample(":/new_file.png")` also we can add shortCut using `ExampleFile->setShortcut(tr("Ctrl+ex"))`

```c++
void SpreadSheet::createActions()
{
    // --------- New File -------------------
   QPixmap newIcon(":/new_file.png");
   newFile = new QAction(newIcon, "&New", this);
   newFile->setShortcut(tr("Ctrl+N"));


    // --------- open file -------------------
   QPixmap openIcon(":/open.png");
   open = new QAction(openIcon,"&Open", this);
   open->setShortcut(tr("Ctrl+O"));

    // --------- save file -------------------
   QPixmap saveIcon(":/save.png");

   save = new QAction(saveIcon,"&Save", this);
   save->setShortcut(tr("Ctrl+S"));

    // --------- save file -------------------
    QPixmap saveasIcon(":/saveas.png");
   saveAs = new QAction(saveasIcon,"save &As", this);


    // --------- cut file -------------------
   QPixmap cutIcon(":/cut_icon.png");
   cut = new QAction(cutIcon, "Cu&t", this);
   cut->setShortcut(tr("Ctrl+X"));

   // --------- Copy menu -----------------
   QPixmap copyIcon(":/copy.png");

   copy = new QAction(copyIcon, "&Copy", this);
   copy->setShortcut(tr("Ctrl+C"));

   QPixmap pasteIcon(":/paste.png");

   paste = new QAction( pasteIcon,"&Paste", this);
   paste->setShortcut(tr("Ctrl+V"));

   QPixmap deleteIcon(":/delete.png");
   deleteAction = new QAction( deleteIcon,"&delete", this);
   deleteAction->setShortcut(tr("Del"));

   row  = new QAction("&Row", this);
   Column = new QAction("&Column", this);
   all = new QAction("&All", this);
   all->setShortcut(tr("Ctrl+A"));

   QPixmap findIcon(":/search_icon.png"); find= new QAction(findIcon, "&Find", this);
   find->setShortcut(tr("Ctrl+F"));

   QPixmap goCellIcon(":/go_to_icon.png");
   goCell = new QAction( goCellIcon, "&Go to Cell", this);
   deleteAction->setShortcut(tr("f5"));


   recalculate = new QAction("&Recalculate",this);
   recalculate->setShortcut(tr("F9"));


   sort = new QAction("&Sort");



   showGrid = new QAction("&Show Grid");
   showGrid->setCheckable(true);
   showGrid->setChecked(spreadsheet->showGrid());

   auto_recalculate = new QAction("&Auto-recalculate");
   auto_recalculate->setCheckable(true);
   auto_recalculate->setChecked(true);



   about =  new QAction("&About");
   aboutQt = new QAction("About &Qt");

    // --------- exit -------------------
   QPixmap exitIcon(":/quit_icon.png");
   exit = new QAction(exitIcon,"E&xit", this);
   exit->setShortcut(tr("Ctrl+Q"));
}
```
- ****
```c++

```
- ****
```c++

```
- ****






