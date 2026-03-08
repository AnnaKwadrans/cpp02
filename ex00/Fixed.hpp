#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
    private:

        int _num;
        static const int    _scnum = 8;

    public:

        Fixed(void); // default constructor
        // Parameterized Constructor ?
        Fixed(const Fixed &fixed); // copy constuctor
                                   // hay que hacer algo con scnum ???
        Fixed &operator=(const Fixed &fixed); //copy assign operator
                                              // hay que hacer algo con scnum ???
        ~Fixed(void);

        int getRawBits(void) const;
        void    setRawBits(int const raw);




};


#endif