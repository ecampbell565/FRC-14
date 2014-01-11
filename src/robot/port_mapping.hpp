#ifndef PORT_MAPPING_HPP
#define PORT_MAPPING_HPP

#include <WPILib.h>

#ifdef RELEASE
#define UNKNOWN @port_not_assigned
#else
#define UNKNOWN 0
#endif

namespace Ports {
	namespace Digital_Channels {
		const uint32_t LEFT_DRIVE_MOTOR  = 1,
		               RIGHT_DRIVE_MOTOR = 2;
	}
}

#endif // PORT_MAPPING_HPP
