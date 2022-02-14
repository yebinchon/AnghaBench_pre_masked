
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_5__ {int b_locked; } ;
typedef TYPE_2__ picture_sys_t ;



__attribute__((used)) static int FUNC_0(picture_t *VAR_0)
{
    picture_sys_t *VAR_1 = VAR_0->p_sys;

    VAR_1->b_locked = 1;
    return 0;
}
