#ifndef RESOURCE_H
#define RESOURCE_H

#define IDS_USAGE   0

#define IDS_QUERY_SERIAL_FOUND      1
#define IDS_QUERY_PRINTER_FOUND     2
#define IDS_QUERY_PARALLEL_FOUND    3
// #define IDS_QUERY_MISC_FOUND        4
#define IDS_QUERY_DOSDEV_FOUND      4
// #define IDS_QUERY_DEVICE_FOUND      1
// #define IDS_SERIAL                  2
// #define IDS_PRINTER                 3
// #define IDS_OTHER                   4

#define IDS_DEVICE_STATUS_HEADER            5
#define IDS_COM_STATUS_BAUD                 6
#define IDS_COM_STATUS_PARITY               7
#define IDS_COM_STATUS_DATA_BITS            8
#define IDS_COM_STATUS_STOP_BITS            9
#define IDS_COM_STATUS_TIMEOUT             10
#define IDS_COM_STATUS_XON_XOFF            11
#define IDS_COM_STATUS_CTS_HANDSHAKING     12
#define IDS_COM_STATUS_DSR_HANDSHAKING     13
#define IDS_COM_STATUS_DSR_SENSITIVITY     14
#define IDS_COM_STATUS_DTR_CIRCUIT         15
#define IDS_COM_STATUS_RTS_CIRCUIT         16
#define IDS_CONSOLE_STATUS_LINES           17
#define IDS_CONSOLE_STATUS_COLS            18
#define IDS_CONSOLE_KBD_DELAY              19
#define IDS_CONSOLE_KBD_RATE               20
#define IDS_CONSOLE_CODEPAGE               21
#define IDS_PRINTER_OUTPUT_NOT_REROUTED    22
#define IDS_PRINTER_OUTPUT_REROUTED_SERIAL 23

#define IDS_ERROR_QUERY_DEVICES         24
#define IDS_ERROR_QUERY_DEVICES_FORM    25
#define IDS_ERROR_SET_PARALLEL_STATE    26
#define IDS_ERROR_INVALID_PARAMETER     27
#define IDS_ERROR_ILLEGAL_DEVICE_NAME   28
#define IDS_ERROR_STATUS_GET_DEVICE     29
#define IDS_ERROR_STATUS_SET_DEVICE     30
#define IDS_ERROR_INVALID_PARITY_BITS   31
#define IDS_ERROR_INVALID_STOP_BITS     32
#define IDS_ERROR_NO_MEMORY             33

#endif /* RESOURCE_H */