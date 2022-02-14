
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {unsigned int num_chats; TYPE_1__* chats; } ;
struct TYPE_4__ {scalar_t__ status; } ;
typedef TYPE_2__ Group_Chats ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static uint8_t FUNC_0(const Group_Chats *VAR_1, int VAR_2)
{
    if ((unsigned int)VAR_2 >= VAR_1->num_chats)
        return 1;

    if (VAR_1->chats == ((void*)0))
        return 1;

    if (VAR_1->chats[VAR_2].status == VAR_0)
        return 1;

    return 0;
}
