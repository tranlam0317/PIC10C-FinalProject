#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>

class Score : public QGraphicsTextItem {
public:
    Score(QGraphicsItem * parent = 0);
    void increase();
    int getScore();

public slots:
    int score;
};


#endif // SCORE_H
