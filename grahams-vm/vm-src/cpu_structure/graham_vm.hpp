#pragma once

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include "addressing_modes.hpp"
#include "opcodes.hpp"

constexpr std::uint16_t MAX_MEMORY = 65536;

class c_graham_cpu
{
public:
	void run_vm();
	void load_vm(std::string&& name);
	void opcode_run(OPCODES_E&& to_run);
	void set_addressing_mode(ADDRESSING_MODES_E&& to_set);
	bool is_running;
	ADDRESSING_MODES_E current_mode;
	std::int32_t program_counter;
	std::vector<std::uint8_t> memory;
private:
	void opcode_register();
};