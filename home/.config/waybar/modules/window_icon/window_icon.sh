#!/bin/bash
# Get the active window class or title
window_class=$(hyprctl activewindow -j | jq -r '.class')

# Map class to icon (expand as needed)
case "$window_class" in
  "firefox") icon="" ;;   # Font Awesome Firefox
  "kitty")   icon="" ;;   # Terminal
  "null")    icon=""  ;;   # No Window
  *)         icon="" ;;   # Default icon
esac

echo "$icon"
