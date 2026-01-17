#include "protocol.h"

#if defined(SSM1)
#include "ssm1.h"
static const protocol_api_t protocol_api = {
    .get_romid_cmd = ssm1_get_romid_command,
    .get_read_cmd = ssm1_get_read_command,
    .get_stop_cmd = ssm1_get_stop_command,
    .get_clear_cmd = ssm1_get_clear_command
};

#else
#error "No protocol selected"
#endif

const protocol_api_t* protocol_get_api(void)
{
    return &protocol_api;
}
