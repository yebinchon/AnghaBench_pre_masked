
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_7__ {int i_output; } ;
struct TYPE_6__ {int ** pictures; struct vlc_vidsplit_part* parts; TYPE_4__ splitter; int lock; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int vlc_tick_t ;
typedef int subpicture_t ;
struct vlc_vidsplit_part {int display; int lock; } ;
typedef int picture_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int **,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int *,int *,int ) ;

__attribute__((used)) static void FUNC_6(vout_display_t *VAR_0, picture_t *VAR_1,
                                 subpicture_t *VAR_2, vlc_tick_t VAR_3)
{
    vout_display_sys_t *VAR_4 = VAR_0->sys;

    FUNC_0(VAR_1);
    (void) VAR_2;

    FUNC_2(&VAR_4->lock);
    if (FUNC_1(&VAR_4->splitter, VAR_4->pictures, VAR_1)) {
        FUNC_3(&VAR_4->lock);

        for (int VAR_5 = 0; VAR_5 < VAR_4->splitter.i_output; VAR_5++)
            VAR_4->pictures[VAR_5] = ((void*)0);
        return;
    }
    FUNC_3(&VAR_4->lock);

    for (int VAR_6 = 0; VAR_6 < VAR_4->splitter.i_output; VAR_6++) {
        struct vlc_vidsplit_part *VAR_7 = &VAR_4->parts[VAR_6];

        FUNC_4(&VAR_7->lock);
        VAR_4->pictures[VAR_6] = FUNC_5(VAR_7->display,
                                                VAR_4->pictures[VAR_6], ((void*)0), VAR_3);
    }
}
