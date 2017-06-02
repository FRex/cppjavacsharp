#include <string>
#include <iostream>


class NativeStuff
{
public:
	int number;
	std::string text;
};

extern "C" NativeStuff * createstuff(int n, const char * str)
{
	auto ret = new NativeStuff;
	ret->number = n;
	ret->text = str;
	return ret;
}

extern "C" const char * getstuffstr(NativeStuff * stuff)
{
	return stuff->text.c_str();
}

extern "C" void printstuff(NativeStuff * stuff)
{
	std::cout << "NativeStuff here: " << stuff->number << ' ' << stuff->text << std::endl;
}

extern "C" void deletestuff(NativeStuff * stuff)
{
	delete stuff;
}
