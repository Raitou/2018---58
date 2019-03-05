#include "pKey.h"

pKey::pKey()
{
	std::cout << Color(AC_GREEN, AC_BOLD)
	<< "\t" << logo1 << std::endl 
	<< "\t" << logo2 << std::endl
	<< "\t" << logo3 << std::endl
	<< "\t" << logo4 << std::endl
	<< "\t" << logo5 << std::endl
	<< "\t" << logo6 << std::endl
	<< "\t" << logo7 << std::endl
	<< "\t" << logo8 << std::endl
	<< Color(AC_CYAN) << std::endl
	<< "\t\t" << logoInfo << std::endl
	<< Color(AC_YELLOW) << std::endl
	<< "\t" << pkEmuInfo1 << std::endl
	<< "\t" << pkEmuInfo2 << std::endl << std::endl;
}


