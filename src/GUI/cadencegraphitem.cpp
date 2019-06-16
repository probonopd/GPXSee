#include <QLocale>
#include "tooltip.h"
#include "cadencegraphitem.h"


CadenceGraphItem::CadenceGraphItem(const Graph &graph, GraphType type,
  QGraphicsItem *parent) : GraphItem(graph, type, parent)
{
	setToolTip(toolTip());
}

QString CadenceGraphItem::toolTip() const
{
	ToolTip tt;
	QLocale l(QLocale::system());

	tt.insert(tr("Maximum"), l.toString(max(), 'f', 1)
	  + UNIT_SPACE + tr("rpm"));
	tt.insert(tr("Average"), l.toString(avg(), 'f', 1)
	  + UNIT_SPACE + tr("rpm"));

	return tt.toString();
}
