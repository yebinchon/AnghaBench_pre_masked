
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int priority; void* cbs_data; struct vlc_clock_cbs const* cbs; scalar_t__ delay; int * owner; } ;
typedef TYPE_1__ vlc_clock_t ;
typedef int vlc_clock_main_t ;
struct vlc_clock_cbs {scalar_t__ on_update; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static vlc_clock_t *FUNC_2(vlc_clock_main_t *VAR_0,
                                          unsigned VAR_1,
                                          const struct vlc_clock_cbs *VAR_2,
                                          void *VAR_3)
{
    vlc_clock_t *VAR_4 = FUNC_1(sizeof(vlc_clock_t));
    if (VAR_4 == ((void*)0))
        return ((void*)0);

    VAR_4->owner = VAR_0;
    VAR_4->delay = 0;
    VAR_4->cbs = VAR_2;
    VAR_4->cbs_data = VAR_3;
    VAR_4->priority = VAR_1;
    FUNC_0(!VAR_2 || VAR_2->on_update);

    return VAR_4;
}
