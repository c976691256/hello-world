#include <stdio.h>

typedef unsigned char uint8_t;

typedef struct {
    uint8_t ssid[32];           /**< SSID of ESP8266 soft-AP */
    uint8_t password[64];       /**< Password of ESP8266 soft-AP */
} wifi_ap_config_t;

typedef struct {
    uint8_t ssid[32];      /**< SSID of target AP*/
    uint8_t password[64];  /**< password of target AP*/
} wifi_sta_config_t;


typedef union {
    wifi_ap_config_t  ap;  /**< configuration of AP */
    wifi_sta_config_t sta; /**< configuration of STA */
} wifi_config_t;

#define SSID "test"
#define PASSWD "1234567890"

int main()
{
        wifi_config_t wifi_config = { 
        .sta = { 
            .ssid = SSID,
            .password = PASSWD
        },
    };  

   printf("hello world");
}
