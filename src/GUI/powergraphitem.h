#ifndef POWERGRAPHITEM_H
#define POWERGRAPHITEM_H

#include "graphitem.h"

class PowerGraphItem : public GraphItem
{
	Q_OBJECT

public:
	PowerGraphItem(const Graph &graph, GraphType type,
	  QGraphicsItem *parent = 0);

private:
	QString toolTip() const;
};

#endif // POWERGRAPHITEM_H
