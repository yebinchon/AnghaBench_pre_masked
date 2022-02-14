
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * renderSrc; int * resource; } ;
struct TYPE_3__ {int s; TYPE_2__ picsys; } ;
struct d3d11va_pic_context {TYPE_1__ ctx; int va_surface; } ;
typedef int picture_context_t ;


 int FUNC_0 (TYPE_2__*) ;
 struct d3d11va_pic_context* FUNC_1 (int *) ;
 int VAR_0 ;
 struct d3d11va_pic_context* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static picture_context_t *FUNC_5(picture_context_t *VAR_1)
{
    struct d3d11va_pic_context *VAR_2 = FUNC_1(VAR_1);
    struct d3d11va_pic_context *VAR_3 = FUNC_2(sizeof(*VAR_3));
    if (FUNC_3(VAR_3==((void*)0)))
        return ((void*)0);
    *VAR_3 = *VAR_2;
    FUNC_4(VAR_3->va_surface);
    for (int VAR_4=0;VAR_4<VAR_0; VAR_4++)
    {
        VAR_3->ctx.picsys.resource[VAR_4] = VAR_2->ctx.picsys.resource[VAR_4];
        VAR_3->ctx.picsys.renderSrc[VAR_4] = VAR_2->ctx.picsys.renderSrc[VAR_4];
    }
    FUNC_0(&VAR_3->ctx.picsys);
    return &VAR_3->ctx.s;
}
