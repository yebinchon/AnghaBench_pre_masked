
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ip_port; } ;
struct TYPE_7__ {TYPE_1__* paths; int * path_creation_time; int * last_path_success; } ;
struct TYPE_6__ {int ip_port1; } ;
typedef TYPE_2__ Onion_Client_Paths ;
typedef TYPE_3__ Node_format ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const Onion_Client_Paths *VAR_4, const Node_format *VAR_5)
{
    unsigned int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
        if (FUNC_1(VAR_4->last_path_success[VAR_6], VAR_3)) {
            continue;
        }

        if (FUNC_1(VAR_4->path_creation_time[VAR_6], VAR_2)) {
            continue;
        }


        if (FUNC_0(&VAR_4->paths[VAR_6].ip_port1, &VAR_5[VAR_1 - 1].ip_port)) {
            return VAR_6;
        }
    }

    return -1;
}
