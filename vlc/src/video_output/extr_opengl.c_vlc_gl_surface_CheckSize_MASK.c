
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* sys; } ;
struct TYPE_8__ {TYPE_1__ owner; } ;
typedef TYPE_2__ vout_window_t ;
struct TYPE_9__ {TYPE_2__* surface; } ;
typedef TYPE_3__ vlc_gl_t ;
struct TYPE_10__ {unsigned int width; unsigned int height; int lock; } ;
typedef TYPE_4__ vlc_gl_surface_t ;


 int FUNC_0 (TYPE_3__*,unsigned int,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(vlc_gl_t *VAR_0, unsigned *restrict VAR_1,
                              unsigned *restrict VAR_2)
{
    vout_window_t *VAR_3 = VAR_0->surface;
    vlc_gl_surface_t *VAR_4 = VAR_3->owner.sys;
    bool VAR_5 = 0;

    FUNC_1(&VAR_4->lock);
    if (VAR_4->width >= 0 && VAR_4->height >= 0)
    {
        *VAR_1 = VAR_4->width;
        *VAR_2 = VAR_4->height;
        VAR_4->width = -1;
        VAR_4->height = -1;

        FUNC_0(VAR_0, *VAR_1, *VAR_2);
        VAR_5 = 1;
    }
    FUNC_2(&VAR_4->lock);
    return VAR_5;
}
