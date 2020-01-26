#include "graham_vm.hpp"
#include <cstdint>
#include "opcodes.hpp"
#include <iostream>

void c_graham_cpu::load_vm(std::string&& name)
{

}

void c_graham_cpu::run_vm()
{

}

void c_graham_cpu::opcode_run(OPCODES_E&& opcode)
{
	switch (opcode)
	{
	case OPCODES_E::ADD:
		// opcode for add
		break;
	}
}

void c_graham_cpu::opcode_register()
{

}