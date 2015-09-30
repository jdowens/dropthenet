#ifndef _RESOURCELOADER_H
#define _RESOURCELOADER_H

#include<iostream>
#include<SFML/Graphics.hpp>
#include<string>
#include<memory>
#include<vector>
#include<fstream>

namespace dtn
{
	class ResourceLoader
	{
	public :
		std::shared_ptr<ResourceLoader> getInstance();
	private :
		ResourceLoader(std::string filename);
		static std::shared_ptr<ResourceLoader> m_instance;
	};
}

#endif