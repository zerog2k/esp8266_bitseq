#ifndef _USER_CONFIG_H_
#define _USER_CONFIG_H_

#define CFG_HOLDER             0x00FF55A4  /* Change this value to load default configurations */
#define CFG_LOCATION           0x3C        /* Please don't change or if you know what you doing */
#define CLIENT_SSL_ENABLE

/*DEFAULT CONFIGURATIONS*/

#define MQTT_HOST              "192.168.11.122" //or "mqtt.yourdomain.com"
#define MQTT_PORT              1880
#define MQTT_BUF_SIZE          1024
#define MQTT_KEEPALIVE         120              // seconds

#define MQTT_CLIENT_ID         "DVES_%08X"
#define MQTT_USER              "DVES_USER"
#define MQTT_PASS              "DVES_PASS"

#define STA_SSID               "yourwifi"
#define STA_PASS               "yourpassword"
#define STA_TYPE               AUTH_WPA2_PSK

#define MQTT_RECONNECT_TIMEOUT 5               // seconds
#define DEFAULT_SECURITY       0
#define QUEUE_BUFFER_SIZE      2048
#define SENSOR_SAMPLE_PERIOD   1000            // in milli-seconds, 1000 ms = 1 second

#define PROTOCOL_NAMEv31	/*MQTT version 3.1 compatible with Mosquitto v0.15*/
//PROTOCOL_NAMEv311			/*MQTT version 3.11 compatible with https://eclipse.org/paho/clients/testing/*/

/* application configurations */
#define SENSOR_SAMPLE_PERIOD 1000 // 1 sec between each sample.
// The GPIO pin your are using as clock
#define BITSEQ_CLOCK_PIN 0
// The GPIO pin your are using as data
#define BITSEQ_DATA_PIN 2
// set this to true if your input is inverted
#define BITSEQ_NEGATIVE_LOGIC false
// if this is defined a debug trace of the raw input bits will be printed
//#define BITSEQ_DEBUG_RAW

#endif
