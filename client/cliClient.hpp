/*
 * interface.hpp
 *
 *  Created on: Jan 24, 2018
 *      Author: luguanglong
 */

#ifndef SHARKD_INTERFACE_HPP_
#define SHARKD_INTERFACE_HPP_

#include <sys/un.h>
#include <pthread.h>

#include <string>
#include <deque>
#include <memory>

namespace shark {
enum class INTERFACE_TYPE {
	INTERFACE_NONE = 0,
	INTERFACE_SYNC,
	INTERFACE_ASYNC
};

class CliClient {
 public:
	CliClient();
	~CliClient();

	void* dataSend(const void *data, int size);

 private:
	int process(char *buf);

	pthread_t receiveThread = 0;

	INTERFACE_TYPE syncType = INTERFACE_TYPE::INTERFACE_NONE;

	int timeout = 0;
	const char* SHARK_INTERFACE_PATH = "/run/shark/cli";
	int RCV_BUF_SIZE = 1024;
	void *rcvBuf = nullptr;
	struct sockaddr_un addr;

	int (*dataProcess)(void *object, void *data) = nullptr;
	void *releObject = nullptr;
};
}  // namespace shark

#endif /* SHARKD_INTERFACE_HPP_ */
