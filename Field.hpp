#include <QPoint>
#include <QRandomGenerator>

class Field {
public:
    Field();
    void spawnFruit();
    QPoint getFruitPosition() const;

private:
    QPoint fruit;
};