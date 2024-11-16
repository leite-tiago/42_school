
/**
 * create an TRGB int (0xTTRRGGBB)
 * T - Transparency
 * R - Red component
 * G - Green component
 * B - Blue component
 */
int	create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}

// get each component //
int	get_t(int trgb)
{
	return ((trgb >> 24) & 0xFF);
}

int	get_r(int trgb)
{
	return ((trgb >> 16) & 0xFF);
}

int	get_g(int trgb)
{
	return ((trgb >> 8) & 0xFF);
}

int	get_b(int trgb)
{
	return (trgb & 0xFF);
}
////////////////////////

/**

	* is a function that accepts a double (distance) and a int (color) as arguments,
 * 0 will add no shading to the color,
	whilst 1 will make the color completely dark.
 * 0.5 will dim it halfway, and .25 a quarter way. You get the point.
 */
int	add_shade(double distance, int color)
{
	int	t;
	int	r;
	int	g;
	int	b;

	if (distance < 0)
		distance = 0;
	if (distance > 1)
		distance = 1;
	t = get_t(color);
	r = get_r(color) * (1 - distance);
	g = get_g(color) * (1 - distance);
	b = get_b(color) * (1 - distance);
	return (create_trgb(t, r, g, b));
}

/**
 * is a function that accepts a int (color) as argument and
 * that will invert the color accordingly.
 */
int	get_opposite(int color)
{
	int	t;
	int	r;
	int	g;
	int	b;

	t = get_t(color);
	r = 0xFF - get_r(color);
	g = 0xFF - get_g(color);
	b = 0xFF - get_b(color);
	return (create_trgb(t, r, g, b));
}

#include <stdio.h>

int	main(void)
{
	int		color;
	double	distance;
	int		shaded_color;
	int		opposite;

	color = create_trgb(0, 18, 52, 86);
	distance = 0.5;
	shaded_color = add_shade(distance, color);
	opposite = get_opposite(color);
	printf("Cor original: #%06X\n", color);
	printf("Cor sombreamento: #%06X\n", shaded_color);
	printf("Cor original: #%06X\n", color);
	printf("Cor invertida: #%06X\n", opposite);
	return (0);
}
