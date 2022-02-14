
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * chats; } ;
typedef int Group_c ;
typedef TYPE_1__ Group_Chats ;


 scalar_t__ FUNC_0 (TYPE_1__ const*,int) ;

__attribute__((used)) static Group_c *FUNC_1(const Group_Chats *VAR_0, int VAR_1)
{
    if (FUNC_0(VAR_0, VAR_1))
        return 0;

    return &VAR_0->chats[VAR_1];
}
