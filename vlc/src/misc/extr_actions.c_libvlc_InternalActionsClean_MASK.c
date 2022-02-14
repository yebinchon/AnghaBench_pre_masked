
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int map; int global_map; } ;
typedef TYPE_1__ vlc_actions_t ;
typedef int libvlc_int_t ;
struct TYPE_6__ {TYPE_1__* actions; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int (*) (TYPE_1__*)) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int ,int *) ;
 int VAR_0 ;

void FUNC_6 (libvlc_int_t *VAR_1)
{
    FUNC_0(VAR_1 != ((void*)0));

    vlc_actions_t *VAR_2 = FUNC_2(VAR_1)->actions;
    if (FUNC_4(VAR_2 == ((void*)0)))
        return;

    FUNC_5 (VAR_1, "global-key-pressed", VAR_0,
                     &VAR_2->global_map);
    FUNC_5 (VAR_1, "key-pressed", VAR_0, &VAR_2->map);

    FUNC_3 (VAR_2->global_map, FUNC_1);
    FUNC_3 (VAR_2->map, FUNC_1);
    FUNC_1 (VAR_2);
    FUNC_2(VAR_1)->actions = ((void*)0);
}
