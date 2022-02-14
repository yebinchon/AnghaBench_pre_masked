
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ numpeers; TYPE_1__* group; } ;
struct TYPE_4__ {int nick_len; char* nick; } ;
typedef TYPE_2__ Group_c ;
typedef int Group_Chats ;


 TYPE_2__* FUNC_0 (int const*,int) ;
 int FUNC_1 (int *,char*,int) ;

int FUNC_2(const Group_Chats *VAR_0, int VAR_1, int VAR_2, uint8_t *VAR_3)
{
    Group_c *VAR_4 = FUNC_0(VAR_0, VAR_1);

    if (!VAR_4)
        return -1;

    if ((uint32_t)VAR_2 >= VAR_4->numpeers)
        return -1;

    if (VAR_4->group[VAR_2].nick_len == 0) {
        FUNC_1(VAR_3, "Tox User", 8);
        return 8;
    }

    FUNC_1(VAR_3, VAR_4->group[VAR_2].nick, VAR_4->group[VAR_2].nick_len);
    return VAR_4->group[VAR_2].nick_len;
}
