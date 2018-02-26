#include <string>
#include <Windows.h>

std::string GetRootDirectory()
{
	// Grab executable path
	WCHAR pathPointer[MAX_PATH];
	GetModuleFileNameW(NULL, pathPointer, MAX_PATH);

	// Convert to string
	char convertedPathPointer[MAX_PATH];
	char defChar = ' ';
	WideCharToMultiByte(CP_ACP, 0, pathPointer, -1, convertedPathPointer, 260, &defChar, NULL);

	std::string convertedString(convertedPathPointer);

	// Remove the executable from the string
	size_t trailingSeperator = convertedString.find_last_of('\\');

	convertedString = convertedString.substr(0, trailingSeperator);

	return convertedString;
}