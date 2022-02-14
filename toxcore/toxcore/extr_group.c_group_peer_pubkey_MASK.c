
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ numpeers; TYPE_1__* group; } ;
struct TYPE_4__ {int real_pk; } ;
typedef TYPE_2__ Group_c ;
typedef int Group_Chats ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int const*,int) ;
 int FUNC_1 (int *,int ,int ) ;

int FUNC_2(const Group_Chats *VAR_1, int VAR_2, int VAR_3, uint8_t *VAR_4)
{
    Group_c *VAR_5 = FUNC_0(VAR_1, VAR_2);

    if (!VAR_5)
        return -1;

    if ((uint32_t)VAR_3 >= VAR_5->numpeers)
        return -1;

    FUNC_1(VAR_4, VAR_5->group[VAR_3].real_pk, VAR_0);
    return 0;
}
