
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {unsigned int num_chats; } ;
struct TYPE_9__ {scalar_t__ status; } ;
typedef TYPE_1__ Group_c ;
typedef TYPE_2__ Group_Chats ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,unsigned int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,unsigned int) ;
 int FUNC_2 (TYPE_2__*,unsigned int) ;
 int FUNC_3 (TYPE_2__*,unsigned int) ;

void FUNC_4(Group_Chats *VAR_1)
{
    unsigned int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->num_chats; ++VAR_2) {
        Group_c *VAR_3 = FUNC_1(VAR_1, VAR_2);

        if (!VAR_3)
            continue;

        if (VAR_3->status == VAR_0) {
            FUNC_0(VAR_1, VAR_2);
            FUNC_3(VAR_1, VAR_2);
            FUNC_2(VAR_1, VAR_2);
        }
    }


}
