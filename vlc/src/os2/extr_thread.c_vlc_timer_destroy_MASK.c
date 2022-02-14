
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vlc_timer_t ;
struct TYPE_4__ {scalar_t__ htimer; int quit; int hev; int tid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5 (vlc_timer_t VAR_2)
{
    if (VAR_2->htimer != VAR_1)
        FUNC_2 (VAR_2->htimer);

    VAR_2->quit = 1;
    FUNC_1 (VAR_2->hev);
    FUNC_3 (&VAR_2->tid, VAR_0);
    FUNC_0 (VAR_2->hev);

    FUNC_4 (VAR_2);
}
