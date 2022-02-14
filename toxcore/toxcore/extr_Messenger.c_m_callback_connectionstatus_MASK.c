
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* friend_connectionstatuschange ) (TYPE_1__*,VAR_0,unsigned int,void*) ;void* friend_connectionstatuschange_userdata; } ;
typedef TYPE_1__ Messenger ;



void FUNC_0(Messenger *VAR_1, void (*VAR_2)(Messenger *VAR_3, VAR_4, unsigned int, void *),
                                 void *VAR_5)
{
    VAR_1->friend_connectionstatuschange = VAR_2;
    VAR_1->friend_connectionstatuschange_userdata = VAR_5;
}
