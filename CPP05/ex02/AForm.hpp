#ifndef AFORM_HPP
# define AFORM_HPP

#include <cstdlib>
#include <ctime> 
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeSign;
		int const			_gradeExec;

	public:
		AForm();
		AForm(std::string name, int gradeSign, int gradeExec);
		AForm(AForm const &copy);
		virtual ~AForm();

		AForm &operator=(AForm const &form);

		std::string	getName() const;
		bool		getSigned() const;
		int			getGradeSign() const;
		int			getGradeExec() const;

		void		beSigned(Bureaucrat &bureaucrat);

        virtual void execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
        class FormNotSignedException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, AForm const &form);

#endif
