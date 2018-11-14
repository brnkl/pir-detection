#include "interfaces.h"
#include "legato.h"
#include "pir.h"

// The 2 shared routines defined in this file and the header file
// should read from some global data structure, and some thread
// should count the PIR and write to the global structure

// We'll also want to setup a structure to store "sensitivity values".
// For example, "low sensitivity" may require 5 triggers in 1 second
// to record a change

bool pir_hasChanged() {
  return false;
}

le_result_t pir_read(bool* values, uint64_t* timestamps, size_t* size) {
  values[0] = true;
  timestamps[0] = 0;
  *size = 1;
  return LE_OK;
}

// this would be a good place to start a monitoring thread
COMPONENT_INIT {}
