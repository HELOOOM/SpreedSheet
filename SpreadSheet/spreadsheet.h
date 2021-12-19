#ifndef SPREADSHEET_H
#define SPREADSHEET_H

#include <QMainWindow>
#include <QTableWidget>
#include <QAction>
#include <QMenu>
#include <QToolBar>
#include <QLabel>
#include <QStatusBar>
#include <QList>
#include <QSettings>


class SpreadSheet : public QMainWindow
{
    Q_OBJECT

public:
    SpreadSheet(QWidget *parent = nullptr);
    ~SpreadSheet();

protected:
    void setupMainWidget();
    void createActions();
    void createMenus();
    void createToolBars();
    void makeConnexions();
    void saveContent(QString file) const;
    void loadContent(QString filename);
    void loadcsv(QString filename);



private slots:
    void close();
    void updateStatusBar(int, int); //Respond for the call changed
    void goToCellSlot();
    void goFind();
    void saveSlot();             //Slot to save the content of the file
    void loadSlot();
    void cuts();
    void pasts();
    void copys();
    void openrecent();


  //Pointers
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
    QString currentFile;
QString filename;
    //
    QList<QAction *> recentlist;

int i=0;
    // ---------- Menus ----------
    QMenu *FileMenu;
    QMenu *recent;
    QMenu *editMenu;

    QMenu *toolsMenu;
    QMenu *optionsMenu;
    QMenu *helpMenu;


    //  ----- - Widget pouyr la bare d'etat
    QLabel *cellLocation;  //position de la cellule active
    QLabel *cellFormula;   // Formuel de la cellue active

};

#endif // SPREADSHEET_H
