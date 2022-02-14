
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int invite ;
typedef int int32_t ;
typedef int groupchat_num ;
struct TYPE_8__ {int m; } ;
struct TYPE_7__ {int * identifier; } ;
typedef TYPE_1__ Group_c ;
typedef TYPE_2__ Group_Chats ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

int FUNC_5(Group_Chats *VAR_3, int32_t VAR_4, int VAR_5)
{
    Group_c *VAR_6 = FUNC_0(VAR_3, VAR_5);

    if (!VAR_6)
        return -1;

    uint8_t VAR_7[VAR_2];
    VAR_7[0] = VAR_1;
    uint16_t VAR_8 = FUNC_1((uint16_t)VAR_5);
    FUNC_2(VAR_7 + 1, &VAR_8, sizeof(VAR_8));
    FUNC_2(VAR_7 + 1 + sizeof(VAR_8), VAR_6->identifier, VAR_0);

    if (FUNC_3(VAR_3->m, VAR_4, VAR_7, sizeof(VAR_7))) {
        return 0;
    } else {
        FUNC_4(VAR_3, VAR_5);
        return -1;
    }
}
