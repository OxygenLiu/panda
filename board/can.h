#pragma once

#define PANDA_CAN_CNT 3U
#define PANDA_BUS_CNT 3U

#include "opendbc/safety/can.h"

// Macros used by panda drivers (removed from upstream opendbc, kept here for compat)
#define GET_BUS(msg) ((msg)->bus)
#define GET_ADDR(msg) ((msg)->addr)
