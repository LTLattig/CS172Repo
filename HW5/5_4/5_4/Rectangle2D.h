/*
Luke Lattig
CS172 || HW 5_4
*/
#pragma once
#ifndef _RECTANGLE2D_
#define _RECTANGLE2D_

class Rectangle2D
{
private:
	// (x, y) coordinates
	double x;
	double y;
	// width & height of rectangle
	double w;
	double h;

public:
	//覧覧覧佑onstructors覧覧覧覧覧�
	Rectangle2D() { x = 0; y = 0; w = 1; h = 1; };
	Rectangle2D(double nX, double nY, double nW, double nH) { x = nX; y = nY; w = nW; h = nH; }


	//覧覧覧"Getter" Fxns覧覧覧覧覧�
	double getX() const { return x; }
	double getY() const { return y; }
	double getW() const { return w; }
	double getH() const { return h; }
	double getArea() const { return w*h; }
	double getPerim() const { return 2 * w + 2 * h; }

	//覧覧覧"Setter" Fxns覧覧覧覧覧�
	void setX(double nX) { x = nX; }
	void setY(double nY) { y = nY; }
	void setW(double nW) { w = nW; }
	void setH(double nH) { h = nH; }

	bool contains(double, double); ///////
	bool contains(const Rectangle2D &r);// 覧> Fxn definitions in Rectangle2D.cpp
	bool overlaps(const Rectangle2D &r);//
};

#endif