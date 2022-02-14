
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ status; } ;
struct TYPE_6__ {int num_chats; TYPE_3__* chats; } ;
typedef int Group_c ;
typedef TYPE_1__ Group_Chats ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_3(Group_Chats *VAR_1, int VAR_2)
{
    if (FUNC_0(VAR_1, VAR_2))
        return -1;

    uint32_t VAR_3;
    FUNC_2(&(VAR_1->chats[VAR_2]), sizeof(Group_c));

    for (VAR_3 = VAR_1->num_chats; VAR_3 != 0; --VAR_3) {
        if (VAR_1->chats[VAR_3 - 1].status != VAR_0)
            break;
    }

    if (VAR_1->num_chats != VAR_3) {
        VAR_1->num_chats = VAR_3;
        FUNC_1(VAR_1, VAR_1->num_chats);
    }

    return 0;
}
