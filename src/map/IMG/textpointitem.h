#ifndef TEXTPOINTITEM_H
#define TEXTPOINTITEM_H

#include <QRect>
#include <QString>
#include <QVector>
#include "textitem.h"

class QPainter;
class QFont;
class QImage;
class QColor;

class TextPointItem : public TextItem
{
public:
	TextPointItem() : _text(0), _font(0), _img(0) {}
	TextPointItem(const QPoint &point, const QString *text, const QFont *font,
	  const QImage *img, const QColor *color);

	bool isValid() const {return !_rect.isEmpty();}

	QRectF boundingRect() const {return _rect;}
	QPainterPath shape() const {return _shape;}
	void paint(QPainter *painter) const;

private:
	const QString *_text;
	const QFont *_font;
	const QImage *_img;
	const QColor *_color;
	QRect _rect, _textRect;
	QPainterPath _shape;
};

#endif // TEXTPOINTITEM_H
