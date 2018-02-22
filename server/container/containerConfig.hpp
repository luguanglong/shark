/*
 * containerConfig.hpp
 *
 *  Created on: 2018年2月21日
 *      Author: luguanglong
 */

#ifndef CONTAINER_CONTAINERCONFIG_HPP_
#define CONTAINER_CONTAINERCONFIG_HPP_

#include <string>
#include <list>

#include "network/networkConfig.hpp"
namespace shark{
	struct ContainerConfig{
		std::string id;
		std::string execCmd;
		std::string nameSpace;
		std::string rootfsPath;
//		std::list<RLimit> rLimitList;
		NETWORK_TYPE nType;
	};
}



#endif /* CONTAINER_CONTAINERCONFIG_HPP_ */
