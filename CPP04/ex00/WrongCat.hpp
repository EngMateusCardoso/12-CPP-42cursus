#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:
		WrongCat(void);
		WrongCat(WrongCat const &copy);
		~WrongCat();

		WrongCat &operator=(WrongCat const &wrongCat);

		void	makeSound(void) const;

};

#endif
