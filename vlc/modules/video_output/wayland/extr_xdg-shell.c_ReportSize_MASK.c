
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* sys; } ;
typedef TYPE_3__ vout_window_t ;
struct TYPE_7__ {unsigned int width; unsigned int height; } ;
struct TYPE_8__ {int width; int height; } ;
struct TYPE_10__ {int surface; TYPE_1__ set; TYPE_2__ wm; } ;
typedef TYPE_4__ vout_window_sys_t ;


 int FUNC_0 (TYPE_3__*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(vout_window_t *VAR_0)
{
    vout_window_sys_t *VAR_1 = VAR_0->sys;


    unsigned VAR_2 = VAR_1->wm.width ? VAR_1->wm.width : VAR_1->set.width;
    unsigned VAR_3 = VAR_1->wm.height ? VAR_1->wm.height : VAR_1->set.height;

    FUNC_0(VAR_0, VAR_2, VAR_3);
    FUNC_1(VAR_1->surface, 0, 0, VAR_2, VAR_3);
}
