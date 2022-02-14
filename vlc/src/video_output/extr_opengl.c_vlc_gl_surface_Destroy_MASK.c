
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* sys; } ;
struct TYPE_11__ {TYPE_1__ owner; } ;
typedef TYPE_2__ vout_window_t ;
struct TYPE_12__ {TYPE_2__* surface; } ;
typedef TYPE_3__ vlc_gl_t ;
struct TYPE_13__ {int lock; } ;
typedef TYPE_4__ vlc_gl_surface_t ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(vlc_gl_t *VAR_0)
{
    vout_window_t *VAR_1 = VAR_0->surface;
    vlc_gl_surface_t *VAR_2 = VAR_1->owner.sys;

    FUNC_1(VAR_0);
    FUNC_4(VAR_1);
    FUNC_3(VAR_1);
    FUNC_2(&VAR_2->lock);
    FUNC_0(VAR_2);
}
