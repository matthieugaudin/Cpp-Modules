#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon {

	public:
		void				setType(std::string type);
		const std::string	&getType(void) const;

	private:
		std::string	type;

};

#endif /* WEAPON_HPP */