#include <sys/types.h>
#include <unistd.h>

#include "common.hpp"

#include <iostream>

int main(int argc, char *argv[]){
	char *pidFilePath = (char *)"/home/luguanglong/test/shark_test.txt";
	char tmpBuf[64] = {0};

	logOutput(pidFilePath, "pid:%d\n", getpid());

	std::cout << "test_pid_namespace finished\n";
	return 0;
}
