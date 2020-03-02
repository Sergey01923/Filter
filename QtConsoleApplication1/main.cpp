#include <QtCore/QCoreApplication>
#include <QImage.h>
#include <string>
#include <iostream>
#include "filter.h"
using namespace std;

void main(int argc, char* argv[])
{
	string s;
	QImage photo;
	for (int i = 0; i < argc; i++) {
		if (!strcmp(argv[i], "-p") && (i + 1 < argc)) {
			s = argv[i + 1];
		}
	}
	photo.load(QString(s.c_str()));
	photo.save("Starting.PNG");
	Invert_filter* invert = new Invert_filter();
	QImage invertImage = invert->calculateNewImagePixMap(photo, 0);
	invertImage.save("Invert.PNG");
}
