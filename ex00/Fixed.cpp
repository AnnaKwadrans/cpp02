#include "Fixed.hpp"

Fixed::Fixed(void) : _num(0)
{
    std::cout << "Fixed: default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &fixed) : _num(fixed._num)
{
    std::cout << "Fixed: copy constructor called" << std::endl;
    return ;    
}
Fixed&  Fixed::operator=(const Fixed &fixed)
{
    if (this != &fixed)
    {
        _num = fixed._num;
    }
    std::cout << "Fixed: assignment operator called" << std::endl;
    return (*this);   
}

Fixed::~Fixed(void)
{
    std::cout << "Fixed: destructor called" << std::endl;
    return ;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "Fixed: getRawBits member function called" << std::endl;
    
    return (0);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "Fixed: setRawBits member function called" << std::endl;
    
    (void)raw;
}
