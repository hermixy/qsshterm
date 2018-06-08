#include "qsshterm.h"
#include "qsiteconfig.h"
#include <QtWidgets>
#include <QApplication>
#include <QDebug>
#include <QMainWindow>
#include <QTabWidget>
#include <QMenu>
#include <QPainter>
#include <QPainterPath>
#include <QSpinBox>
#include <QLabel>
#include <QToolTip>


class qsshTabTerm: public QMainWindow {
	Q_OBJECT

	public:
	    qsshTabTerm(QWidget *parent = 0): QMainWindow(parent), tabs(0), sessionMgr_dialog(0) {
        init();
      }

      ~qsshTabTerm() {
      }

      void init();

  public slots:
      void openSession(SiteInfo);

  private:
      QTabWidget *tabs;
      QSiteTreeDialog *sessionMgr_dialog;
     	void initMenu();
     	void initToolbar();
     	void showSessionMgrDialog();  
      void showAboutDialog();

  private slots:
      void closeTab(int);
};