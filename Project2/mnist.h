#pragma once

#include <memory>

using namespace std;

struct MNIST {
	MNIST(std::istream& images_is, std::istream& labels_is);

	void loadImages(std::istream& images_is, size_t* m, size_t* width, size_t* height);
	void loadLabels(std::istream& labels_is, size_t* m);

	void test(size_t _m, size_t _width, size_t _height, bool output);

	size_t m, width, height;

	shared_ptr<float> d_x;
	shared_ptr<float> d_y;

	shared_ptr<float> h_x;
	shared_ptr<float> h_y;
};