
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s; int picsys; } ;
struct dxva2_pic_context {TYPE_1__ ctx; int va_surface; } ;
typedef int picture_context_t ;


 int FUNC_0 (int *) ;
 struct dxva2_pic_context* FUNC_1 (int *) ;
 struct dxva2_pic_context* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static picture_context_t *FUNC_5(picture_context_t *VAR_0)
{
    struct dxva2_pic_context *VAR_1 = FUNC_1(VAR_0);
    struct dxva2_pic_context *VAR_2 = FUNC_2(sizeof(*VAR_2));
    if (FUNC_3(VAR_2==((void*)0)))
        return ((void*)0);
    *VAR_2 = *VAR_1;
    FUNC_4(VAR_2->va_surface);
    FUNC_0(&VAR_2->ctx.picsys);
    return &VAR_2->ctx.s;
}
