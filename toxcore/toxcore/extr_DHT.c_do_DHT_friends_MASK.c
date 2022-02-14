
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {unsigned int num_friends; TYPE_2__* friends_list; } ;
struct TYPE_8__ {unsigned int num_to_bootstrap; int bootstrap_times; int client_list; int public_key; int lastgetnode; TYPE_1__* to_bootstrap; } ;
struct TYPE_7__ {int public_key; int ip_port; } ;
typedef TYPE_2__ DHT_Friend ;
typedef TYPE_3__ DHT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,int ,int ,int ,int *,int) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(DHT *VAR_1)
{
    unsigned int VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_1->num_friends; ++VAR_2) {
        DHT_Friend *VAR_4 = &VAR_1->friends_list[VAR_2];

        for (VAR_3 = 0; VAR_3 < VAR_4->num_to_bootstrap; ++VAR_3) {
            FUNC_1(VAR_1, VAR_4->to_bootstrap[VAR_3].ip_port, VAR_4->to_bootstrap[VAR_3].public_key, VAR_4->public_key, ((void*)0));
        }

        VAR_4->num_to_bootstrap = 0;

        FUNC_0(VAR_1, &VAR_4->lastgetnode, VAR_4->public_key, VAR_4->client_list, VAR_0,
                                      &VAR_4->bootstrap_times, 1);
    }
}
