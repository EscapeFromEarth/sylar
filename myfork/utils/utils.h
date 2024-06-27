#pragma once

// 这个专门用来提供一些经典的函数

namespace cppsvr {
namespace utils {
	
void Log(const char *format, ...) {
	va_list args;
	va_start(args, format);
	int iSize = snprintf(nullptr, 0, format, args);
	std::string sBuffer(iSize, '\0');
	va_start(args, format);
	snprintf(&sBuffer[0], iSize+1, format, args);
	va_end(args);
	std::cout << sBuffer << std::endl;
}
	
	
	
}
} // namespace cppsvr
