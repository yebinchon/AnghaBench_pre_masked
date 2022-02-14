
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vlc_va_t ;
struct TYPE_7__ {int * hw_surface; } ;
typedef TYPE_3__ vlc_va_sys_t ;
typedef int vlc_va_surface_t ;
struct TYPE_5__ {int s; } ;
struct dxva2_pic_context {TYPE_1__ ctx; int * va_surface; } ;
typedef int picture_context_t ;


 struct dxva2_pic_context* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (int *) ;

__attribute__((used)) static picture_context_t* FUNC_3(vlc_va_t *VAR_0, vlc_va_surface_t *VAR_1)
{
    vlc_va_sys_t *VAR_2 = VAR_0->sys;
    struct dxva2_pic_context *VAR_3 = FUNC_0(VAR_2->hw_surface[FUNC_2(VAR_1)]);
    if (FUNC_1(VAR_3==((void*)0)))
        return ((void*)0);
    VAR_3->va_surface = VAR_1;
    return &VAR_3->ctx.s;
}
