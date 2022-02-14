
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pic_sys_vaapi_instance {int dec_device; int num_render_targets; int render_targets; int va_dpy; int pic_refcount; struct pic_sys_vaapi_instance* instance; } ;
struct TYPE_3__ {struct pic_sys_vaapi_instance* p_sys; } ;
typedef TYPE_1__ picture_t ;
typedef struct pic_sys_vaapi_instance picture_sys_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct pic_sys_vaapi_instance*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(picture_t *VAR_0)
{
    picture_sys_t *VAR_1 = VAR_0->p_sys;
    struct pic_sys_vaapi_instance *VAR_2 = VAR_1->instance;

    if (FUNC_0(&VAR_2->pic_refcount, 1) == 1)
    {
        FUNC_2(VAR_2->va_dpy, VAR_2->render_targets,
                          VAR_2->num_render_targets);
        FUNC_3(VAR_2->dec_device);
        FUNC_1(VAR_2);
    }
    FUNC_1(VAR_0->p_sys);
}
