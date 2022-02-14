
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct d3d9_pic_context {int picsys; } ;
struct TYPE_3__ {int * context; int * p_sys; } ;
typedef TYPE_1__ picture_t ;
typedef int picture_sys_d3d9_t ;


 struct d3d9_pic_context* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;

picture_sys_d3d9_t *FUNC_2(picture_t *VAR_0)
{
    if (FUNC_1(VAR_0->context == ((void*)0)))
        return VAR_0->p_sys;

    struct d3d9_pic_context *VAR_1 = FUNC_0(VAR_0->context);
    return &VAR_1->picsys;
}
