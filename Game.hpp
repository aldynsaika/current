#include <QWidget>
#include <QTimer>
#include <QKeyEvent>
#include <QMessageBox>
#include "Snake.h"
#include "Field.h"

class Game : public QWidget {
    Q_OBJECT

public:
    Game(QWidget* parent = nullptr);

protected:
    void paintEvent(QPaintEvent* event) override;
    void keyPressEvent(QKeyEvent* event) override;

private slots:
    void updateGame();

private:
    void togglePause();
    void gameOver();

    QTimer* timer;
    Snake snake;
    Field field;
    Direction snakeDirection = RIGHT;
    bool isPaused;
    int score;
};
