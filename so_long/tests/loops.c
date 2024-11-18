// gcc -o loops tests/loops.c -I ./mlx -I /opt/X11/include -L ./mlx -L /opt/X11/lib -lmlx -lXext -lX11 -lm && ./loops

#include <mlx.h>

int	render_next_frame(void *YourStruct);

int	main(void)
{
	void	*mlx;

	mlx = mlx_init();
	mlx_loop_hook(mlx, render_next_frame, YourStruct);
	mlx_loop(mlx);
}
