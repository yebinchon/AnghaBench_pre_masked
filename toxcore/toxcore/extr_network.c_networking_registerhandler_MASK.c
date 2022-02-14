
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int packet_handler_callback ;
struct TYPE_5__ {TYPE_1__* packethandlers; } ;
struct TYPE_4__ {void* object; int function; } ;
typedef TYPE_2__ Networking_Core ;



void FUNC_0(Networking_Core *VAR_0, uint8_t VAR_1, packet_handler_callback VAR_2, void *VAR_3)
{
    VAR_0->packethandlers[VAR_1].function = VAR_2;
    VAR_0->packethandlers[VAR_1].object = VAR_3;
}
