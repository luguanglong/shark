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

#include "config/globalConfig.hpp"

namespace shark{
	struct ContainerConfig{
		std::string id;
		std::string execCmd;
		std::string nameSpace;
		std::string rootfsPath;
	};
}



#endif /* CONTAINER_CONTAINERCONFIG_HPP_ */
