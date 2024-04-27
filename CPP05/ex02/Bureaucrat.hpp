#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
	private:
		std::string const	_name;
		int 				_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const &bureaucrat);

		std::string	getName() const;
		int			getGrade() const;

		void		incrementGrade();
		void		decrementGrade();

		void		signForm(AForm &form);
        void        executeForm(AForm const &form);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src);

#endif
