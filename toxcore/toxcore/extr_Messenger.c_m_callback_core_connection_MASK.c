
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* core_connection_change ) (TYPE_1__*,unsigned int,void*) ;void* core_connection_change_userdata; } ;
typedef TYPE_1__ Messenger ;



void FUNC_0(Messenger *VAR_0, void (*VAR_1)(Messenger *VAR_2, unsigned int, void *), void *VAR_3)
{
    VAR_0->core_connection_change = VAR_1;
    VAR_0->core_connection_change_userdata = VAR_3;
}
