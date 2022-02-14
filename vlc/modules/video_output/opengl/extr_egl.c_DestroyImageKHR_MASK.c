
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vlc_gl_t ;
struct TYPE_5__ {int (* eglDestroyImageKHR ) (int ,void*) ;int display; } ;
typedef TYPE_2__ vlc_gl_sys_t ;


 int FUNC_0 (int ,void*) ;

__attribute__((used)) static bool FUNC_1(vlc_gl_t *VAR_0, void *VAR_1)
{
    vlc_gl_sys_t *VAR_2 = VAR_0->sys;

    return VAR_2->eglDestroyImageKHR(VAR_2->display, VAR_1);
}
