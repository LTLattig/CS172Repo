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
//———————————————Constructors—————————————>
	RegularPolygon();
	RegularPolygon(int n, double side);
	RegularPolygon(int n, double side, double x, double y);

//———————————————Accessor Functions———————>
/**/const int getN() { return n; }
/**/const double getSide() { return side; }
/**/const double getX() { return x; }
/**/const double getY() { return y; }
/**////——————————Perim+Area————————————>
	double getPerimeter() const;
	double getArea() const;

//———————————————Mutator Functions————————>
	void setN(int);
	void setSide(double);
	void setX(double);
	void setY(double);

};

#endif 