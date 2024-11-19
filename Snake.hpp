#include <vector>
#include <QPoint>

enum Direction {UP, DOWN, LEFT, RIGHT};

class Snake {
public:
	Snake(size_t& field_height, size_t& field_width);
	void move();
	void setDirection(Direction dir);
    void growSnake();
    const std::vector<QPoint>& getBody() const;
    QPoint getHead() const;

private:
	bool grow = false;
	Direction direction;
	std::vector<QPoint> Body;
};

