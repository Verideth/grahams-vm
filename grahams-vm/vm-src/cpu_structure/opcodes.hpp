#pragma once

#include <vector>
#include <cstdint>
#include <iostream>
#include "graham_vm.hpp"
#include "cpu_functionality.hpp"

enum OPCODES_E
{
	ADD = 0,
	SUB,
	JMP,
	AND,
	MOV,
	OR,
	ST,
	JSR,
	LEA,
	STR,
	NOT
};

namespace opcode_functionality
{
	inline const std::uint16_t&& gather_base(std::uint16_t address)
	{
		/* 1111 1111 1111 1111 AND 0xFF
		 * 1111 1111 RS 7
		 * 1
		 */
		return ((address & 0xFF) >> 0x07);
	}

	inline std::uint16_t&& decode_op()
	{
		// do later, decodes opcode
		return 0;
	}

	inline std::uint16_t add_op(std::uint16_t& address, std::int16_t& lhs, std::int16_t& rhs)
	{
		std::uint16_t ret;
		const std::uint16_t& base = gather_base(address);

		// immediate mode
		if (base == 0)
		{
			ret = lhs + rhs;
		}
		else
		{
			ret = lhs + basic_cpu_functions::sign_extend(rhs, 0xFFFF);
		}

		return ret;
	}
}