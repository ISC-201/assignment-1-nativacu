#include "ColorScheme.h"
#include <GL/glew.h>

ColorScheme::ColorScheme()
{
}

void ColorScheme::change_background(Color new_background)
{
	glClearColor(new_background.get_red(), new_background.get_green(), new_background.get_blue(), new_background.get_opacity());
}
