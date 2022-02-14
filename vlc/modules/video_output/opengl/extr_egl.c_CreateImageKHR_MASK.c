
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vlc_gl_t ;
struct TYPE_5__ {void* (* eglCreateImageKHR ) (int ,int *,unsigned int,void*,int const*) ;int display; } ;
typedef TYPE_2__ vlc_gl_sys_t ;
typedef int int32_t ;


 void* FUNC_0 (int ,int *,unsigned int,void*,int const*) ;

__attribute__((used)) static void *FUNC_1(vlc_gl_t *VAR_0, unsigned VAR_1, void *VAR_2,
                            const int32_t *VAR_3)
{
    vlc_gl_sys_t *VAR_4 = VAR_0->sys;

    return VAR_4->eglCreateImageKHR(VAR_4->display, ((void*)0), VAR_1, VAR_2,
                                  VAR_3);
}
