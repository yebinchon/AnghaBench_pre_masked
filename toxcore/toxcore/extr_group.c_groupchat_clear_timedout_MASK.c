
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {size_t numpeers; scalar_t__ peer_number; TYPE_1__* group; } ;
struct TYPE_4__ {scalar_t__ peer_number; int last_recv; } ;
typedef TYPE_2__ Group_c ;
typedef int Group_Chats ;


 int VAR_0 ;
 int FUNC_0 (int *,int,size_t) ;
 TYPE_2__* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(Group_Chats *VAR_1, int VAR_2)
{
    Group_c *VAR_3 = FUNC_1(VAR_1, VAR_2);

    if (!VAR_3)
        return -1;

    uint32_t VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3->numpeers; ++VAR_4) {
        if (VAR_3->peer_number != VAR_3->group[VAR_4].peer_number && FUNC_2(VAR_3->group[VAR_4].last_recv, VAR_0 * 3)) {
            FUNC_0(VAR_1, VAR_2, VAR_4);
        }

        if (VAR_3->group == ((void*)0) || VAR_4 >= VAR_3->numpeers)
            break;
    }

    return 0;
}
