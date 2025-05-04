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
	std::string	input;

	std::ifstream	src(this->_srcFilename.c_str());
	src >> input;
	src.close();

	return (input);
}

std::string	fileReplacer::_replaceContent(std::string &input)
{
	std::string	output;
	size_t		i;

	i = 0;
	while (i < input.length())
	{
		if (input.substr(i, this->_search.length()).compare(this->_search) == 0) {
			output.append("PPPPPP");
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
	this->_dstFilename = this->_srcFilename + ".replace";
	std::ofstream	dst(this->_dstFilename.c_str());
	dst << output;
	dst.close();
}

void	fileReplacer::run(void)
{
	std::string	input = _readSrcFilename();
	std::string output = _replaceContent(input);
	_writeDstFilename(output);
}
