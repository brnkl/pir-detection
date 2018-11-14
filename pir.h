#ifndef PIR_H
#define PIR_H

LE_SHARED bool pir_hasChanged();
LE_SHARED le_result_t pir_read(bool* values,
                               uint64_t* timestamps,
                               size_t* size);

#endif
