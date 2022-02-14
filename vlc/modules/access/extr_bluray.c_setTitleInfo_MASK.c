
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pl_info_lock; TYPE_2__* p_pl_info; int * p_clip_info; } ;
typedef TYPE_1__ demux_sys_t ;
struct TYPE_7__ {int * clips; scalar_t__ clip_count; } ;
typedef TYPE_2__ BLURAY_TITLE_INFO ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(demux_sys_t *VAR_0, BLURAY_TITLE_INFO *VAR_1)
{
    FUNC_1(&VAR_0->pl_info_lock);

    if (VAR_0->p_pl_info) {
        FUNC_0(VAR_0->p_pl_info);
    }
    VAR_0->p_pl_info = VAR_1;
    VAR_0->p_clip_info = ((void*)0);

    if (VAR_0->p_pl_info && VAR_0->p_pl_info->clip_count) {
        VAR_0->p_clip_info = &VAR_0->p_pl_info->clips[0];
    }

    FUNC_2(&VAR_0->pl_info_lock);
}
