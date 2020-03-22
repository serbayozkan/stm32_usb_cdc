/*
 * @file usb_com.h
 * @author Serbay Ozkan
 * @brief Virtual Com Port App. Header File
 * @version 0.1
 * @date Mar 22, 2020
 * 
 */

#ifndef USB_COM_H_
#define USB_COM_H_

#include <stdint.h>
#include <stdio.h>

#define USB_DEBUG(log_msg) (printf("USB_Debug: %s\n", log_msg))

#define MAX_RECEIVE_BUFFER_LENGTH    ( 2048 )
#define MAX_TRANSMIT_BUFFER_LENGTH   ( 2048 )

typedef struct
{
	unsigned char rx_buffer[MAX_RECEIVE_BUFFER_LENGTH];
	unsigned char tx_buffer[MAX_TRANSMIT_BUFFER_LENGTH];
}usb_com_t;

void usb_transmit(uint8_t *tx_buffer, uint16_t tx_len);
void usb_receive(uint8_t *rx_buffer, uint32_t rx_len);

#endif /* USB_COM_H_ */
