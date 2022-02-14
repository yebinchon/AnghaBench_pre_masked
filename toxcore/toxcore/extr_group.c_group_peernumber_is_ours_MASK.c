
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ status; scalar_t__ numpeers; scalar_t__ peer_number; TYPE_1__* group; } ;
struct TYPE_4__ {scalar_t__ peer_number; } ;
typedef TYPE_2__ Group_c ;
typedef int Group_Chats ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int const*,int) ;

unsigned int FUNC_1(const Group_Chats *VAR_1, int VAR_2, int VAR_3)
{
    Group_c *VAR_4 = FUNC_0(VAR_1, VAR_2);

    if (!VAR_4)
        return 0;

    if (VAR_4->status != VAR_0)
        return 0;

    if ((uint32_t)VAR_3 >= VAR_4->numpeers)
        return 0;

    return VAR_4->peer_number == VAR_4->group[VAR_3].peer_number;
}
