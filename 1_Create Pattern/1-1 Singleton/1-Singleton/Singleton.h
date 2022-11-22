#pragma once

#include <iostream>

class Singleton
{
public:
	static Singleton& instance()
	{
		static Singleton instance;
		return instance;
	}

public:
	int getInt() { return nInt; }
	void increaseInt() { nInt += 5; }
	void printInt() { std::cout << "nInt : " << nInt << std::endl; }

private:
	Singleton() { nInt = 0; }
	virtual ~Singleton() {}

protected:
	int nInt;
};

