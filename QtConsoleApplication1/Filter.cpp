#include "Filter.h"
template <class T>
T clamp(T v, int max, int min) {
	if (v > max)
		return max;
	else if (v < min)
		return min;
	return v;
}
QImage
Invert_filter::calculateNewImagePixMap(const QImage& photo, int radius) {
	QImage result_Image(photo);
	for (int x = 0; x < photo.width(); x++)
		for (int y = 0; y < photo.height(); y++) {
			QColor photo_color = photo.pixelColor(x, y);
			photo_color.setRgb(255 - photo_color.red(),
				255 - photo_color.green(),
				255 - photo_color.blue());
			result_Image.setPixelColor(x, y, photo_color);
		}
	return result_Image;
}
QColor Matrix_filter::calculateNewPixelColor(QImage photo, int x, int y, int radius) {

}
