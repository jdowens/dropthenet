#ifndef _SPRITEFRAMES_H
#define _SPRITEFRAMES_H

#include<vector>
#include<string>
#include<SFML/System.hpp>
#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>

namespace dtn
{
	class SpriteFrames
	{
	public :
		SpriteFrames(std::string textureFilename, std::string atlasFilename);
		std::string getName();
		void render(sf::RenderWindow& window);
	private :
		std::string m_name;
		std::vector<sf::IntRect> m_bounds;
		sf::Texture m_texture;
	};
}

#endif