
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ num_friends; TYPE_1__* friends_list; } ;
struct TYPE_4__ {int is_online; scalar_t__ run_count; scalar_t__ last_noreplay; int last_seen; } ;
typedef TYPE_2__ Onion_Client ;


 int FUNC_0 () ;

int FUNC_1(Onion_Client *VAR_0, int VAR_1, uint8_t VAR_2)
{
    if ((uint32_t)VAR_1 >= VAR_0->num_friends)
        return -1;

    if (VAR_2 == 0 && VAR_0->friends_list[VAR_1].is_online == 1)
        VAR_0->friends_list[VAR_1].last_seen = FUNC_0();

    VAR_0->friends_list[VAR_1].is_online = VAR_2;


    if (!VAR_2) {
        VAR_0->friends_list[VAR_1].last_noreplay = 0;
        VAR_0->friends_list[VAR_1].run_count = 0;
    }

    return 0;
}
