#ifndef FILE_REPLACER_HPP
# define FILE_REPLACER_HPP

# include <string>
# include <fstream>
# include <iostream>
# include <cstdlib>

class fileReplacer {
    
	public:
		fileReplacer(
            std::string _srcFilename,
            std::string _search,
            std::string _replace
        );
		~fileReplacer(void);
		void	run(void);

	private:
		std::string _srcFilename;
		std::string _dstFilename;
		std::string _search;
		std::string _replace;
		std::string	_readSrcFilename(void) const;
		std::string	_replaceContent(std::string &input);
		void		_writeDstFilename(std::string &output);

};

// HOW TO CHECK IF THE FILE EXISTS

#endif /* FILE_REPLACER_HPP */