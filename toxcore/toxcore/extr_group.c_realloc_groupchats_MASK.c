
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * chats; } ;
typedef int Group_c ;
typedef TYPE_1__ Group_Chats ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(Group_Chats *VAR_0, uint32_t VAR_1)
{
    if (VAR_1 == 0) {
        FUNC_0(VAR_0->chats);
        VAR_0->chats = ((void*)0);
        return 0;
    }

    Group_c *VAR_2 = FUNC_1(VAR_0->chats, VAR_1 * sizeof(Group_c));

    if (VAR_2 == ((void*)0))
        return -1;

    VAR_0->chats = VAR_2;
    return 0;
}
