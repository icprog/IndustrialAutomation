/**********************************************************************
--- Qt Architect generated file ---
File: Iec103driverCommandData.h
Last generated: Thu Jan 4 16:13:32 2001
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#ifndef Iec103driverCommandData_included
#define Iec103driverCommandData_included

#include <qt.h>
#include "valedit.h"

class Iec103driverCommandData : public QDialog
{
	Q_OBJECT
	public:
	Iec103driverCommandData(QWidget *parent = NULL, const char *name = NULL);
	virtual ~Iec103driverCommandData();
	protected slots:
	virtual void Help() =0;
	virtual void OkClicked() =0;
	protected:
	QLabel *Name;
	QLineEdit *Value;
};
#endif // Iec103driverCommandData_included
