#include"iostream"
#include"unistd.h"
#include"sys/syscall.h"
#include"sys/types.h"
using namespace std;


int main(){
	std::cout << syscall(SYS_gettid) << std::endl;
	std::cout << syscall(SYS_gettid) << std::endl;
	std::cout << syscall(SYS_gettid) << std::endl;
	
}