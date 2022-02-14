
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_6__ {scalar_t__ status; } ;
struct TYPE_5__ {unsigned int num_friends; TYPE_2__* friends_list; } ;
typedef int Onion_Friend ;
typedef TYPE_1__ Onion_Client ;


 int FUNC_0 (TYPE_1__*,unsigned int) ;
 int FUNC_1 (TYPE_2__*,int) ;

int FUNC_2(Onion_Client *VAR_0, int VAR_1)
{
    if ((uint32_t)VAR_1 >= VAR_0->num_friends)
        return -1;




    FUNC_1(&(VAR_0->friends_list[VAR_1]), sizeof(Onion_Friend));
    unsigned int VAR_2;

    for (VAR_2 = VAR_0->num_friends; VAR_2 != 0; --VAR_2) {
        if (VAR_0->friends_list[VAR_2 - 1].status != 0)
            break;
    }

    if (VAR_0->num_friends != VAR_2) {
        VAR_0->num_friends = VAR_2;
        FUNC_0(VAR_0, VAR_0->num_friends);
    }

    return VAR_1;
}
