
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_9__ {int i_output; int fmt; int p_module; } ;
struct TYPE_8__ {TYPE_5__ splitter; int lock; struct vlc_vidsplit_part* parts; } ;
typedef TYPE_2__ vout_display_sys_t ;
struct vlc_vidsplit_part {int lock; int window; TYPE_1__* display; } ;


 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;
    int VAR_2 = VAR_1->splitter.i_output;

    for (int VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        struct vlc_vidsplit_part *VAR_4 = &VAR_1->parts[VAR_3];
        vout_display_t *VAR_5;

        FUNC_6(&VAR_4->lock);
        VAR_5 = VAR_4->display;
        VAR_4->display = ((void*)0);
        FUNC_5(&VAR_4->lock);

        if (VAR_5 != ((void*)0))
            FUNC_7(VAR_5);

        FUNC_9(VAR_4->window);
        FUNC_8(VAR_4->window);
        FUNC_4(&VAR_4->lock);
    }

    FUNC_0(&VAR_1->splitter, VAR_1->splitter.p_module);
    FUNC_1(&VAR_1->splitter.fmt);
    FUNC_2(&VAR_1->lock);
    FUNC_3(&VAR_1->splitter);
}
