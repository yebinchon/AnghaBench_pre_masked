
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_11__ {scalar_t__ path_num; } ;
struct TYPE_10__ {int public_key; int ip_port; } ;
struct TYPE_8__ {TYPE_6__* paths; scalar_t__* last_path_used_times; int * last_path_success; } ;
struct TYPE_9__ {scalar_t__ num_friends; TYPE_1__ onion_paths_friends; TYPE_1__ onion_paths_self; } ;
typedef TYPE_1__ Onion_Client_Paths ;
typedef TYPE_2__ Onion_Client ;
typedef TYPE_3__ Node_format ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int,TYPE_6__*) ;
 int FUNC_2 () ;

__attribute__((used)) static uint32_t FUNC_3(Onion_Client *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
    if (VAR_3 > VAR_2->num_friends)
        return -1;

    Onion_Client_Paths *VAR_5;

    if (VAR_3 == 0) {
        VAR_5 = &VAR_2->onion_paths_self;
    } else {
        VAR_5 = &VAR_2->onion_paths_friends;
    }

    if (VAR_5->paths[VAR_4 % VAR_0].path_num == VAR_4) {
        VAR_5->last_path_success[VAR_4 % VAR_0] = FUNC_2();
        VAR_5->last_path_used_times[VAR_4 % VAR_0] = 0;

        Node_format VAR_6[VAR_1];

        if (FUNC_1(VAR_6, VAR_1, &VAR_5->paths[VAR_4 % VAR_0]) == 0) {
            unsigned int VAR_7;

            for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
                FUNC_0(VAR_2, VAR_6[VAR_7].ip_port, VAR_6[VAR_7].public_key);
            }
        }

        return VAR_4;
    }

    return ~0;
}
