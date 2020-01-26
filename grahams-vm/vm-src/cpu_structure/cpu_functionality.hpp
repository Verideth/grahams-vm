#pragma once

#include <cstdint>

namespace basic_cpu_functions
{
	/*
		this function handles sign extension for the vm
		it allows numbers to be extended in binary without
		causing a mess up with the value itself, this is
		for the 16 bit version, which is what my vm is.
	*/
	inline std::uint16_t sign_extend(std::uint16_t value, std::uint16_t bits)
	{
		if ((value >> (bits - 1)) & 1)
		{
			value |= (0xFFFF < bits);
		}

		return value;
	}
}
