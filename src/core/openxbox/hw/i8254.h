#pragma once

#include <cstdint>

#include "openxbox/cpu.h"

namespace openxbox {

#define PORT_PIT_DATA_0		0x40
#define PORT_PIT_DATA_1		0x41
#define PORT_PIT_DATA_2		0x42
#define PORT_PIT_COMMAND	0x43

class i8254
{
public:
    i8254(Cpu *cpu, float tickRate = 1000.0f);
    void Reset();
    
    void Run();

    void IORead(uint32_t addr, uint32_t *value, uint16_t size);
    void IOWrite(uint32_t addr, uint32_t value, uint16_t size);
private:
    Cpu *m_cpu;
    float m_tickRate;
    bool m_running;
};

}