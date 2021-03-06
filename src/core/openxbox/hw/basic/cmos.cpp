#include "cmos.h"

#include "openxbox/log.h"
#include "openxbox/io.h"

namespace openxbox {

CMOS::CMOS() {
}

CMOS::~CMOS() {
}

void CMOS::Reset() {
}

bool CMOS::MapIO(IOMapper *mapper) {
    if (!mapper->MapIODevice(PORT_CMOS_BASE, PORT_CMOS_COUNT, this)) return false;
    
    return true;
}

bool CMOS::IORead(uint32_t port, uint32_t *value, uint8_t size) {
    log_warning("CMOS::IORead:  Unhandled read!   port = 0x%x,  size = %u\n", port, size);
    return false;
}

bool CMOS::IOWrite(uint32_t port, uint32_t value, uint8_t size) {
    log_warning("CMOS::IOWrite: Unhandled write!  port = 0x%x,  size = %u,  value = 0x%x\n", port, size, value);
    return false;
}

}
