#include "fileReplacer.hpp"

fileReplacer::fileReplacer(
    std::string _srcFilename,
    std::string _search,
    std::string _replace
) : _srcFilename(_srcFilename), _search(_search), _replace(_replace)
{
	return ;
}

fileReplacer::~fileReplacer(void)
{
	return ;
}

std::string	fileReplacer::_readSrcFilename(void) const
{
	std::string		input;
	std::string		buffer;
	std::ifstream	srcFile;

	srcFile.open(this->_srcFilename.c_str(), std::ios::in);
	if (!srcFile.is_open())
	{
		std::cerr << "replacer (error): file do not have correct rights" << std::endl;
		exit (0);
	}
	while (std::getline(srcFile, buffer))
	{
		input += buffer += "\n";
	}
	srcFile.close();

	return (input);
}

std::string	fileReplacer::_replaceContent(std::string &input)
{
	std::string	output;
	size_t		i;

	if (this->_search.length() == 0)
	{
		std::cerr << "replacer (error): can't replace nothing" << std::endl;
		exit(0);
	}
	i = 0;
	while (i < input.length())
	{
		if (input.substr(i, this->_search.length()).compare(this->_search) == 0) {
			output.append(this->_replace);
			i += this->_search.length();
		} else {
			output.append(1, input[i]);
			i++;
		}
	}
	return (output);
}

void	fileReplacer::_writeDstFilename(std::string &output)
{
	std::ofstream	dstFile;

	this->_dstFilename = this->_srcFilename + ".replace";
	dstFile.open(this->_dstFilename.c_str(), std::ios::out | std::ios::trunc);
	dstFile << output;

	dstFile.close();
}

void	fileReplacer::run(void)
{
	std::string	input = _readSrcFilename();
	std::string output = _replaceContent(input);
	_writeDstFilename(output);
}
