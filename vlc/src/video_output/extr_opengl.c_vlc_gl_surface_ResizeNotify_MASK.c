
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* sys; } ;
struct TYPE_7__ {TYPE_1__ owner; } ;
typedef TYPE_2__ vout_window_t ;
struct TYPE_8__ {unsigned int width; unsigned int height; int lock; } ;
typedef TYPE_3__ vlc_gl_surface_t ;


 int FUNC_0 (TYPE_2__*,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(vout_window_t *VAR_0,
                                        unsigned VAR_1, unsigned VAR_2)
{
    vlc_gl_surface_t *VAR_3 = VAR_0->owner.sys;

    FUNC_0(VAR_0, "resized to %ux%u", VAR_1, VAR_2);

    FUNC_1(&VAR_3->lock);
    VAR_3->width = VAR_1;
    VAR_3->height = VAR_2;
    FUNC_2(&VAR_3->lock);
}
