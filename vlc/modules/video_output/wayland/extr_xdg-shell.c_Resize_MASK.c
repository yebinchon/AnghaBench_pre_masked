
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int wl; } ;
struct TYPE_9__ {TYPE_2__ display; TYPE_4__* sys; } ;
typedef TYPE_3__ vout_window_t ;
struct TYPE_7__ {unsigned int width; unsigned int height; } ;
struct TYPE_10__ {int lock; TYPE_1__ set; int toplevel; } ;
typedef TYPE_4__ vout_window_sys_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int,unsigned int) ;
 int FUNC_5 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_6(vout_window_t *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    vout_window_sys_t *VAR_3 = VAR_0->sys;
    FUNC_1(&VAR_3->lock);
    VAR_3->set.width = VAR_1;
    VAR_3->set.height = VAR_2;
    FUNC_0(VAR_0);
    FUNC_2(&VAR_3->lock);
    FUNC_3(VAR_0->display.wl);
}
