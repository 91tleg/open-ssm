#pragma once
#include <stdint.h>

typedef struct
{
    void (*get_romid_cmd)(struct romid_ctx*, uint8_t*);
    void (*get_read_cmd)(struct read_ctx*, uint8_t*);
    void (*get_stop_cmd)(struct read_ctx*, uint8_t*);
    void (*get_clear_cmd)(struct read_ctx*, uint8_t*);
} protocol_api_t;

const protocol_api_t* protocol_get_api(void);
