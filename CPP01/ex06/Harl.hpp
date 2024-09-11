#ifndef HARL
#define HARL

#include "../Print/Print.hpp"

class Harl
{
public:
	void complain(std::string level);
    int FindLevel(std::string level);
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

};

#endif