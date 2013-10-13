#ifndef __COMMON_H
#define __COMMON_H

#define VERSION "0.0.1"
#define __ELEKTRON_STRANGE_PACKET_LENGTH 131

#include "err.h"

#define max(a,b) ((a) > (b) ? (a) : (b))

typedef enum {
    // part of the spec
    RESPONSE_ACK,
    RESPONSE_NAK,
    RESPONSE_CANCEL,
    RESPONSE_WAIT,
    // not part of the spec
    RESPONSE_TIMEOUT,
    RESPONSE_NULL
} response_t;

int
convert_channel_num(
    char *s,
    unsigned int *channel_num,
    err_t err
);

int
convert_sample_num(
    char *s,
    unsigned int *channel_num,
    err_t err
);

int
convert_string_to_unsigned_int(
    char *s,
    unsigned int *ui
);

const char *
response_to_string(response_t response);

#endif