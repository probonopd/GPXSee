#include <QLocale>
#include "tooltip.h"
#include "heartrategraphitem.h"


HeartRateGraphItem::HeartRateGraphItem(const Graph &graph, GraphType type,
  QGraphicsItem *parent) : GraphItem(graph, type, parent)
{
	setToolTip(toolTip());
}

QString HeartRateGraphItem::toolTip() const
{
	ToolTip tt;
	QLocale l(QLocale::system());

	tt.insert(tr("Maximum"), l.toString(max(), 'f', 0)
	  + UNIT_SPACE + tr("bpm"));
	tt.insert(tr("Average"), l.toString(avg(), 'f', 0)
	  + UNIT_SPACE + tr("bpm"));

	return tt.toString();
}
