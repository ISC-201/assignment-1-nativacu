#pragma once
#include "Color.h"

static class ColorScheme{

public:
	ColorScheme();
	void change_background(Color new_background);

	Color red = Color(0.3f, 0, 0.9f, 1);
	Color yellow = Color(0.3, 0.3, 0, 0.3);
	Color green = Color(0.2f, 0.8f, 0.1f, 1.0f);
	Color blue = Color(0, 0, 255, 0.3);
	Color grey = Color(200.5f, 225.2f, 225.2, 1.0f);

};

