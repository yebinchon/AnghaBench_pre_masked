
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {size_t num_chats; TYPE_1__* chats; } ;
struct TYPE_4__ {scalar_t__ status; } ;
typedef TYPE_2__ Group_Chats ;


 scalar_t__ VAR_0 ;

uint32_t FUNC_0(Group_Chats *VAR_1)
{
    uint32_t VAR_2 = 0;
    uint32_t VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1->num_chats; VAR_3++) {
        if (VAR_1->chats[VAR_3].status != VAR_0) {
            VAR_2++;
        }
    }

    return VAR_2;
}
