
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_5__ {TYPE_1__* lossy_packethandlers; } ;
struct TYPE_4__ {int (* function ) (void*,int,int,void*,size_t const*,VAR_0) ;} ;
typedef TYPE_2__ Group_Chats ;



void FUNC_0(Group_Chats *VAR_1, uint8_t VAR_2, int (*VAR_3)(void *, int, int, void *,
                                        const uint8_t *, VAR_4))
{
    VAR_1->lossy_packethandlers[VAR_2].function = VAR_3;
}
