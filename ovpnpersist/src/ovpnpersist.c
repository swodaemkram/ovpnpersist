/*
 ============================================================================
 Name        : ovpnpersist.c
 Author      : Mark Meadows
 Version     : 00.00.03
 Copyright   : copyright Mark Meadows
 Description : ovpnpersist in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	if ( system("ping -c 3 10.10.0.5") != 0)

	{
		printf("\n Connection Failed\n");
		system ("/usr/sbin/openvpn --config /config/lt1.ovpn &");
		system ("\n");
	}

	exit(0);
}
