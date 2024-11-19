#include "Field.h"

Field::Field() {
    spawnFruit();
}

void Field::spawnFruit() {
    fruit.setX(QRandomGenerator::global()->bounded(20));
    fruit.setY(QRandomGenerator::global()->bounded(20));
}

QPoint Field::getFruitPosition() const {
    return fruit;
}
