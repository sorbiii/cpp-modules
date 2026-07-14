#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm //dziedziczy z AForm - nie ma dostępu do rzeczy z private(gdyby były protected to by miało ale nie ma)
{
    private:
        const std::string _target;
        PresidentialPardonForm();

    public:
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
        virtual ~PresidentialPardonForm();

        virtual void executeAction() const;
};

#endif