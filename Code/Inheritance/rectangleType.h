class rectangleType
{
protected:
  double length;
  double width;

  public:
  void setDimension(double l, double w);
  double getLength() const;
  double getWidth() const;
  double area() const;
  double perimeter() const;
  void print() const;
  rectangleType();
  rectangleType(double l, double w);
};
