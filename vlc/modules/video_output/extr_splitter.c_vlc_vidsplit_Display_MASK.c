
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_5__ {int i_output; } ;
struct TYPE_7__ {int ** pictures; struct vlc_vidsplit_part* parts; TYPE_1__ splitter; } ;
typedef TYPE_3__ vout_display_sys_t ;
struct vlc_vidsplit_part {int lock; int display; } ;
typedef int picture_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(vout_display_t *VAR_0, picture_t *VAR_1)
{
    vout_display_sys_t *VAR_2 = VAR_0->sys;

    for (int VAR_3 = 0; VAR_3 < VAR_2->splitter.i_output; VAR_3++) {
        struct vlc_vidsplit_part *VAR_4 = &VAR_2->parts[VAR_3];

        if (VAR_2->pictures[VAR_3] != ((void*)0))
            FUNC_1(VAR_4->display, VAR_2->pictures[VAR_3]);
        FUNC_0(&VAR_4->lock);
    }

    (void) VAR_1;
}
