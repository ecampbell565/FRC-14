#ifndef SUBSYSTEMS_HPP
#define SUBSYSTEMS_HPP

#include "drive_base.hpp"
#include "collector.hpp"
#include "vision.hpp"
#include "compressor_system.hpp"
#include "lights_rgb.hpp"
#include "catapult.hpp"
#include "puller.hpp"

namespace Subsystems {
	extern Drive_Base * drive_base;
	extern Collector * collector;
	extern Vision *vision;
	extern Compressor_System *compressor_system;
	extern Lights_RGB *lights_rgb;
	extern Catapult *catapult;
	extern Puller *puller;
	void initialize();
}

#endif // SUBSYSTEMS_HPP
