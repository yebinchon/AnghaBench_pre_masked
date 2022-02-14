
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {unsigned int num_chats; TYPE_1__* m; } ;
struct TYPE_9__ {scalar_t__ status; } ;
struct TYPE_8__ {int name_length; int name; } ;
typedef TYPE_2__ Group_c ;
typedef TYPE_3__ Group_Chats ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,unsigned int) ;
 int FUNC_1 (TYPE_3__*,unsigned int,int ,int ) ;

void FUNC_2(Group_Chats *VAR_1)
{
    unsigned int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->num_chats; ++VAR_2) {
        Group_c *VAR_3 = FUNC_0(VAR_1, VAR_2);

        if (!VAR_3)
            continue;

        if (VAR_3->status == VAR_0) {
            FUNC_1(VAR_1, VAR_2, VAR_1->m->name, VAR_1->m->name_length);
        }
    }
}
