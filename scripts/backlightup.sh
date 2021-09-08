#!/bin/bash

BRIGHTNESS_PATH="/sys/class/backlight/intel_backlight/brightness"
current_value=$(cat $BRIGHTNESS_PATH)
echo $(($current_value + 317)) | sudo tee $BRIGHTNESS_PATH
pkill -RTMIN+2 dwmblocks
