#include "Snake.hpp"

Snake::Snake(size_t& field_height, size_t& field_width){
    direction = RIGHT;
    Body.push_back({static_cast<int>(field_height)/2, static_cast<int>(field_width)/2});
}

void Snake::move() {
    QPoint head = Body.front();
    switch (direction) {
        case UP:    head.ry() -= 1; break;
        case DOWN:  head.ry() += 1; break;
        case LEFT:  head.rx() -= 1; break;
        case RIGHT: head.rx() += 1; break;
    }
    Body.push_front(head);
    if (!grow) Body.pop_back();
    else grow = false;
}

void Snake::setDirection(Direction dir) {
    direction = dir;
}

void Snake::growSnake() {
    grow = true;
}

const std::vector<QPoint>& Snake::getBody() const {
    return Body;
}

QPoint Snake::getHead() const {
    return Body.front();
}