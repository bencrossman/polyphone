#ifndef ELIDEDLABEL_H
#define ELIDEDLABEL_H

#include <QLabel>
#include <QResizeEvent>

class ElidedLabel : public QLabel
{
public:
    /// Constructor
    ElidedLabel(QWidget * parent = NULL) : QLabel(parent) {}

    /// Set the text to elide. The displayed text will be set automatically
    void setTextToElide(const QString text)
    {
        _text = text;
        _linkContent = "";
        this->resizeEvent(nullptr);
    }

    /// Set the text to elide, being wrap in <a> for creating a link. The displayed text will be set automatically
    void setTextToElide(const QString text, const QString linkContent)
    {
        _text = text;
        _linkContent = linkContent;
        this->resizeEvent(nullptr);
    }

protected:
    void resizeEvent(QResizeEvent * event)
    {
        QFontMetrics metrics(this->font());
        int width = (event == nullptr ? this->width() : event->size().width());
        QString elidedText = metrics.elidedText(_text, Qt::ElideMiddle, width);
        if (_linkContent.isEmpty())
            this->setText(elidedText);
        else
            this->setText("<a " + _linkContent + ">" + elidedText + "</a>");
    }

private:
    QString _text;
    QString _linkContent;
};

#endif // ELIDEDLABEL_H