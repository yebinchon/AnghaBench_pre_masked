
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vlc_gl_t ;
struct TYPE_5__ {int win; int display; } ;
typedef TYPE_2__ vlc_gl_sys_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1 (vlc_gl_t *VAR_0)
{
    vlc_gl_sys_t *VAR_1 = VAR_0->sys;

    FUNC_0 (VAR_1->display, VAR_1->win);
}
