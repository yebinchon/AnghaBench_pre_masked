
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vaapi_pic_context {int va_dpy; } ;
struct TYPE_4__ {scalar_t__ context; } ;
typedef TYPE_1__ picture_t ;
typedef int VADisplay ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

VADisplay
FUNC_2(picture_t *VAR_0)
{
    FUNC_0(VAR_0);
    FUNC_1(VAR_0->context);

    struct vaapi_pic_context *VAR_1 = (struct vaapi_pic_context *)VAR_0->context;
    return VAR_1->va_dpy;
}
