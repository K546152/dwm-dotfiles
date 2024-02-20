#!/bin/sh

# Check if VPN is active (you might need to adjust the VPN interface name)
vpn_status=$(nmcli -t -f NAME,TYPE,STATE c show --active | grep vpn | cut -d':' -f2)

if [ -n "$vpn_status" ]; then
  # VPN is active
  echo "VPN:On"  # You can customize this symbol to match your dwmblocks icons
else
  # VPN is inactive
  echo "VPN:Off"  # You can customize this symbol to match your dwmblocks icons
fi

