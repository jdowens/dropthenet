#include<SFML/Window.h>
#include<SFML/Graphics.h>
#include<stdio.h>

int main()
{
	printf("Testing crow...\n");
	sfRenderWindow* window;
	sfVideoMode mode = { 800, 640, 32 };
	window = sfRenderWindow_create(mode, "Testing", sfResize | sfClose, NULL);
	while (sfRenderWindow_isOpen(window))
	{
		sfEvent event;
		while (sfRenderWindow_pollEvent(window, &event))
		{
			if (event.type == sfEvtClosed)
			{
				sfRenderWindow_close(window);
			}
		}
		sfRenderWindow_clear(window, sfBlue);
		sfRenderWindow_display(window);
	}
	sfRenderWindow_destroy(window);
	return 0;
}