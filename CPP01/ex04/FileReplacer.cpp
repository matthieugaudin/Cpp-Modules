#include "FileReplacer.hpp"

FileReplacer::FileReplacer(
    std::string _srcFilename,
    std::string _search,
    std::string _replace
) : _srcFilename(_srcFilename), _search(_search), _replace(_replace)
{
	return ;
}

FileReplacer::~FileReplacer(void)
{
	return ;
}

std::string	FileReplacer::_readSrcFilename(void) const
{
	std::string		input;
	std::string		buffer;
	std::ifstream	srcFile;

	srcFile.open(this->_srcFilename.c_str(), std::ios::in);
	if (!srcFile.is_open()) {
		throw std::runtime_error("replacer (error): file doesn't exist / have correct rights\n");
	}
	while (std::getline(srcFile, buffer))
	{
		input += buffer += "\n";
	}
	srcFile.close();

	return (input);
}

std::string	FileReplacer::_replaceContent(std::string &input)
{
	std::string	output;
	size_t		i;

	if (this->_search.length() == 0) {
		throw std::runtime_error("replacer (error): can't replace nothing\n");
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

void	FileReplacer::_writeDstFilename(std::string &output)
{
	std::ofstream	dstFile;

	this->_dstFilename = this->_srcFilename + ".replace";
	dstFile.open(this->_dstFilename.c_str(), std::ios::out | std::ios::trunc);
	dstFile << output;

	dstFile.close();
}

void	FileReplacer::run(void)
{
	try {
		std::string	input = _readSrcFilename();
		std::string output = _replaceContent(input);
		_writeDstFilename(output);
	} catch (const std::exception &e) {
		std::cerr << "Error : " << e.what();
	}
}
