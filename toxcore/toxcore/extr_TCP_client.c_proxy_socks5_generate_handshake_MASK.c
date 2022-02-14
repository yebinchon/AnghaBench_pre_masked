
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* last_packet; int last_packet_length; scalar_t__ last_packet_sent; } ;
typedef TYPE_1__ TCP_Client_Connection ;



__attribute__((used)) static void FUNC_0(TCP_Client_Connection *VAR_0)
{
    VAR_0->last_packet[0] = 5;
    VAR_0->last_packet[1] = 1;
    VAR_0->last_packet[2] = 0;

    VAR_0->last_packet_length = 3;
    VAR_0->last_packet_sent = 0;
}
