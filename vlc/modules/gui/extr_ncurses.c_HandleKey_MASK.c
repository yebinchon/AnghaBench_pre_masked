
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_10__ {int box_type; int playlist; } ;
typedef TYPE_2__ intf_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,double) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int) ;





 int FUNC_6 () ;
 int * FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(intf_thread_t *VAR_5)
{
    intf_sys_t *VAR_6 = VAR_5->p_sys;
    int VAR_7 = FUNC_6();
    int VAR_8 = VAR_6->box_type;

    vlc_player_t *VAR_9 = FUNC_7(VAR_6->playlist);

    if (VAR_7 == -1)
        return;

    if (VAR_8 == VAR_4 || VAR_8 == VAR_2) {
        FUNC_3(VAR_5, VAR_7, VAR_6->box_type);
        return;
    }

    if (VAR_8 == VAR_1)
        switch(VAR_7)
        {



        case 131: FUNC_0(VAR_9, +.99); return;
        case 130: FUNC_0(VAR_9, -1.0); return;
        case 128: FUNC_0(VAR_9, +0.05); return;
        case 132: FUNC_0(VAR_9, -0.05); return;
        default: FUNC_2(VAR_5, VAR_9, VAR_7); return;
        }

    if (VAR_8 == VAR_0 && FUNC_1(VAR_5, VAR_7))
        return;

    if (VAR_8 == VAR_3 && FUNC_5(VAR_5, VAR_7))
        return;

    if (FUNC_4(VAR_5, VAR_7))
        return;

    FUNC_2(VAR_5, VAR_9, VAR_7);
}
