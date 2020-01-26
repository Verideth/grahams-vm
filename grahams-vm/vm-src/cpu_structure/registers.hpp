#pragma once

#include <map>
#include <cstdint>

enum REGISTERS_E
{
	R_GA = 0,
	R_GB,
	R_GC,
	R_GD,
	R_GPC, // program counter
	R_GSP // stack pointer
};

namespace registers_functionality
{
	std::map<REGISTERS_E, std::int32_t> registers; // map for handling individual registers

	// function for setting registers
	inline void set_register(REGISTERS_E reg, std::int32_t val)
	{
		registers[reg] = val;
	}
}