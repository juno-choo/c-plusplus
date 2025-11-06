class Point
{
    private:
        int x;
        int y;
    public:
        Point(int x_val, int y_val) : x(x_val), y(y_val) {}
        int getX() const { return x; }
        int getY() const { return y; }
        bool isVerticalWith(const Point& other);
};

bool Point::isVerticalWith(const Point& other)
{
    // Two points are vertical if they share the same x-coordinate
    return this->x == other.x;
}