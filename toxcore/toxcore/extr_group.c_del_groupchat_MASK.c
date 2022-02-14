
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int object; } ;
struct TYPE_12__ {int fr_c; } ;
struct TYPE_11__ {unsigned int numpeers; int object; int (* group_on_delete ) (int ,int) ;TYPE_8__* group; int (* peer_on_leave ) (int ,int,unsigned int,int ) ;TYPE_1__* close; int peer_number; } ;
struct TYPE_10__ {scalar_t__ type; int number; } ;
typedef TYPE_2__ Group_c ;
typedef TYPE_3__ Group_Chats ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_8__*) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,unsigned int,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_3__*,int) ;

int FUNC_7(Group_Chats *VAR_2, int VAR_3)
{
    Group_c *VAR_4 = FUNC_1(VAR_2, VAR_3);

    if (!VAR_4)
        return -1;

    FUNC_2(VAR_2, VAR_3, VAR_4->peer_number);

    unsigned int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
        if (VAR_4->close[VAR_5].type == VAR_0)
            continue;

        VAR_4->close[VAR_5].type = VAR_0;
        FUNC_3(VAR_2->fr_c, VAR_4->close[VAR_5].number);
    }

    for (VAR_5 = 0; VAR_5 < VAR_4->numpeers; ++VAR_5) {
        if (VAR_4->peer_on_leave)
            VAR_4->peer_on_leave(VAR_4->object, VAR_3, VAR_5, VAR_4->group[VAR_5].object);
    }

    FUNC_0(VAR_4->group);

    if (VAR_4->group_on_delete)
        VAR_4->group_on_delete(VAR_4->object, VAR_3);

    return FUNC_6(VAR_2, VAR_3);
}
