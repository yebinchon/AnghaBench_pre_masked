
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* friend_connectionstatuschange_internal ) (TYPE_1__*,VAR_0,VAR_1,void*) ;void* friend_connectionstatuschange_internal_userdata; } ;
typedef TYPE_1__ Messenger ;



void FUNC_0(Messenger *VAR_2, void (*VAR_3)(Messenger *VAR_4, VAR_5, VAR_6, void *),
        void *VAR_7)
{
    VAR_2->friend_connectionstatuschange_internal = VAR_3;
    VAR_2->friend_connectionstatuschange_internal_userdata = VAR_7;
}
