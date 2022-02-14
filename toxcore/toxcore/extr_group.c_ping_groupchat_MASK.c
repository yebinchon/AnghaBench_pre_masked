
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_sent_ping; } ;
typedef TYPE_1__ Group_c ;
typedef int Group_Chats ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(Group_Chats *VAR_1, int VAR_2)
{
    Group_c *VAR_3 = FUNC_0(VAR_1, VAR_2);

    if (!VAR_3)
        return -1;

    if (FUNC_2(VAR_3->last_sent_ping, VAR_0)) {
        if (FUNC_1(VAR_1, VAR_2) != -1)
            VAR_3->last_sent_ping = FUNC_3();
    }

    return 0;
}
