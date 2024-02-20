#!/bin/sh

# Include year, month, day, hour, and minute in the desired format
dte="$(date +"%Y-%m-%d %l:%M%p" | sed 's/  / /g')"
echo "$dte"

