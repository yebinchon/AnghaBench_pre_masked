
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct vlc_vidsplit_part* sys; } ;
struct TYPE_5__ {TYPE_1__ owner; } ;
typedef TYPE_2__ vout_window_t ;
struct vlc_vidsplit_part {unsigned int width; unsigned int height; int lock; int * display; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(vout_window_t *VAR_0,
                                        unsigned VAR_1, unsigned VAR_2)
{
    struct vlc_vidsplit_part *VAR_3 = VAR_0->owner.sys;

    FUNC_1(&VAR_3->lock);
    VAR_3->width = VAR_1;
    VAR_3->height = VAR_2;

    if (VAR_3->display != ((void*)0))
        FUNC_2(VAR_3->display, VAR_1, VAR_2);
    FUNC_0(&VAR_3->lock);
}
