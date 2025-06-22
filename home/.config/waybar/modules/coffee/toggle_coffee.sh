#!/bin/bash
LOCKFILE="/tmp/hypridle_inhibit.lock"

if [ -f "$LOCKFILE" ]; then
  rm "$LOCKFILE"
  notify-send "Coffee" "No Beans"
else
  touch "$LOCKFILE"
  notify-send "Coffee" "BEANS!"
fi

pkill -SIGRTMIN+10 waybar
