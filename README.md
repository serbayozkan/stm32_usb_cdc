# stm32_usb_cdc
Demo Application of USB Device CDC (Communication Device Class) on STM32F4-Discovery board. Workspace is generated using STM32CubeMX software for Atollic TrueSTUDIO IDE but user can generate by Keil, System Workbench... workspaces using .ioc file.

## Notes
- USB APIs are collected on usb_com.c and usb_com.h files.
- Demo example periodically send "Hello World" message to virtual com port.
- Receive string message is sent to console using printf
- For using printf functionality on Atollic, I upgraded ST-Link firmware to Jlink by using STLink Reflash utility.
https://www.segger.com/products/debug-probes/j-link/models/other-j-links/st-link-on-board/
- For directing printf messages to console, syscalls.c file has been changed. Please check _write API function.
