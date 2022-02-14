
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t int32_t ;
struct TYPE_5__ {scalar_t__ num_chats; TYPE_1__* chats; } ;
struct TYPE_4__ {scalar_t__ status; } ;
typedef TYPE_2__ Group_Chats ;


 scalar_t__ VAR_0 ;

uint32_t FUNC_0(Group_Chats *VAR_1, int32_t *VAR_2, uint32_t VAR_3)
{
    if (!VAR_2) {
        return 0;
    }

    if (VAR_1->num_chats == 0) {
        return 0;
    }

    uint32_t VAR_4, VAR_5 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_1->num_chats; ++VAR_4) {
        if (VAR_5 >= VAR_3) {
            break;
        }

        if (VAR_1->chats[VAR_4].status > VAR_0) {
            VAR_2[VAR_5] = VAR_4;
            VAR_5++;
        }
    }

    return VAR_5;
}
