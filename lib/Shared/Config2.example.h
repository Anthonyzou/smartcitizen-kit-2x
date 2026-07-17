#pragma once
#include "Sensors.h"

struct Credentials { bool set=false; char ssid[64]="null"; char pass[64]="null"; };
struct Token { bool set=false; char token[7]="null"; };
struct Mqtt { char server[64]="mqtt.smartcitizen.me"; uint16_t port=1883; char user[64]=""; char pass[64]=""; };