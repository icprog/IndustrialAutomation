/**********************************************************************
--- Qt Architect generated file ---
File: MultiTraceDlgData.cpp
Last generated: Wed Jun 28 13:48:36 2000
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#include <qt.h>
#include "MultiTraceDlgData.h"
MultiTraceDlgData::MultiTraceDlgData(QWidget *parent, const char *name)
: QWidget(parent, name, 16)
{
	List = new QListView(this, "ListView_1");
	List->setGeometry(20, 20, 280, 490);
	List->setMinimumSize(0, 0);
	List->setMaximumSize(32767, 32767);
	List->setFocusPolicy(QWidget::TabFocus);
	List->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	List->setFontPropagation(QWidget::SameFont);
	List->setPalettePropagation(QWidget::SameFont);
	#endif
	List->setFrameStyle( 49 );
	List->setLineWidth( 2 );
	List->setMidLineWidth( 0 );
	List->QFrame::setMargin( 0 );
	List->setResizePolicy( QScrollView::Manual );
	List->setVScrollBarMode( QScrollView::Auto );
	List->setHScrollBarMode( QScrollView::Auto );
	List->setTreeStepSize( 20 );
	List->setMultiSelection( FALSE );
	List->setAllColumnsShowFocus( FALSE );
	List->setItemMargin( 1 );
	List->setRootIsDecorated( FALSE );
	List->addColumn( tr( "Sample items" ), -1 );
	List->setColumnWidthMode( 0, QListView::Maximum );
	List->setColumnAlignment( 0, 1 );
	resize(330,540);
	setMinimumSize(0, 0);
	setMaximumSize(32767, 32767);
}
MultiTraceDlgData::~MultiTraceDlgData()
{
}
