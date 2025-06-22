#!/bin/bash
LOCKFILE="/tmp/hypridle_inhibit.lock"
if [ -f "$LOCKFILE" ]; then
  echo '{"text":"☕","class":"active"}'
else
  echo '{"text":"☕","class":""}'
fi
