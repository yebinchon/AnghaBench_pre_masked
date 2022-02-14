
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct picture_context_t {struct picture_context_t* (* copy ) (struct picture_context_t*) ;int destroy; } ;
struct TYPE_2__ {struct picture_context_t s; int va_dpy; int surface; } ;
struct vaapi_pic_ctx {TYPE_1__ ctx; int picref; } ;


 struct vaapi_pic_ctx* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct picture_context_t *
FUNC_2(struct picture_context_t *VAR_1)
{
    struct vaapi_pic_ctx *VAR_2 = (struct vaapi_pic_ctx *) VAR_1;
    struct vaapi_pic_ctx *VAR_3 = FUNC_0(sizeof *VAR_3);
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    VAR_3->ctx.s.destroy = VAR_0;
    VAR_3->ctx.s.copy = FUNC_2;
    VAR_3->ctx.surface = VAR_2->ctx.surface;
    VAR_3->ctx.va_dpy = VAR_2->ctx.va_dpy;
    VAR_3->picref = FUNC_1(VAR_2->picref);
    return &VAR_3->ctx.s;
}
