#pragma once

#ifndef _REGULAR_POLYGON_H
#define _REGULAR_POLYGON_H


class RegularPolygon {

private:
	int n; // # of sides
	double side; // length of side
	double x; // (x,0)
	double y; // (0,y)

public:
//覧覧覧覧覧覧覧佑onstructors覧覧覧覧覧覧�>
	RegularPolygon();
	RegularPolygon(int n, double side);
	RegularPolygon(int n, double side, double x, double y);

//覧覧覧覧覧覧覧輸ccessor Functions覧覧覧�>
/**/const int getN() { return n; }
/**/const double getSide() { return side; }
/**/const double getX() { return x; }
/**/const double getY() { return y; }
/**////覧覧覧覧覧Perim+Area覧覧覧覧覧覧>
	double getPerimeter() const;
	double getArea() const;

//覧覧覧覧覧覧覧柚utator Functions覧覧覧覧>
	void setN(int);
	void setSide(double);
	void setX(double);
	void setY(double);

};

#endif 