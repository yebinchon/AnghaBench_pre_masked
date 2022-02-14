
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vaapi_pic_ctx {int picref; } ;
struct picture_context_t {int dummy; } ;


 int FUNC_0 (struct picture_context_t*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct picture_context_t *VAR_0)
{
    struct vaapi_pic_ctx *VAR_1 = (struct vaapi_pic_ctx *) VAR_0;
    FUNC_1(VAR_1->picref);
    FUNC_0(VAR_0);
}
