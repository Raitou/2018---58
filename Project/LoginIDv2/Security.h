#ifndef SECURITY_H
#define SECURITY_H

#include <string>

class Security
{
	public:
		Security();
		bool formatCheck(std::string&);
	private:
		const std::string alphaNum = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-";
};

#endif
