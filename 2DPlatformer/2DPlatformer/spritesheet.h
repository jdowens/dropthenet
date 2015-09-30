#ifndef _SPRITESHEET_H
#define _SPRITESHEET_H

#include<vector>
#include<string>
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>

namespace dtn
{
	class SpriteSheet
	{
	public:

	private:
		std::vector<sf::IntRect> m_frames;
	};
}

#endif