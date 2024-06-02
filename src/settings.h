// **********************************
// * Settings                       *
// **********************************

// Update treshold in milliseconds, messages will only be sent on this interval
#define UPDATE_INTERVAL 60000  // 1 minute
//#define UPDATE_INTERVAL 300000 // 5 minutes

// * Baud rate for both hardware and software 
#define BAUD_RATE 115200

// The used serial pins, note that this can only be UART0, as other serial port doesn't support inversion
// By default the UART0 serial will be used. These settings displayed here just as a reference. 
// #define SERIAL_RX RX
// #define SERIAL_TX TX

#define KResetPin D5

//#define SEND_AS_JSON

// * Max telegram length
#define P1_MAXLINELENGTH 1050

// * Max telegram json length
#define P1_MAXJSONLENGTH 1024


// * The hostname of our little creature
#define HOSTNAME "p1meter"

// * The password used for OTA
#define OTA_PASSWORD "default"

// * Wifi timeout in milliseconds
#define WIFI_TIMEOUT 40000

// * MQTT network settings
#define MQTT_MAX_RECONNECT_TRIES 10

// * MQTT root topic
#define MQTT_ROOT_TOPIC "energy_p1meter"

