#include<qimage.h>
#include<iostream>
class Filter {
public:
	Filter() {};
	~Filter() {};
	virtual QImage calculateNewImagePixMap(const QImage& photo, int radius) = 0;
};
class Invert_filter : public Filter {
public:
	Invert_filter() {};
	~Invert_filter() {};
	QImage calculateNewImagePixMap(const QImage& photo, int radius);
};