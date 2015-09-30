#include "resourceloader.h"

std::shared_ptr<dtn::ResourceLoader> dtn::ResourceLoader::getInstance()
{
	if (m_instance == NULL)
	{
		m_instance = std::shared_ptr<ResourceLoader>(new ResourceLoader("resources.config"));
	}

	return m_instance;
}

dtn::ResourceLoader::ResourceLoader(std::string filename)
{
	std::ifstream inFile;
	inFile.open(filename);
	if (!inFile)
	{
		std::cerr << "Invalid filename in ResourceLoader::ResourceLoader(std::string filename)!\n";
	}
	else
	{

	}
}
