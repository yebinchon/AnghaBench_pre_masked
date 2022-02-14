
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vlc_gl_t ;
struct TYPE_5__ {int ctx; int win; int display; } ;
typedef TYPE_2__ vlc_gl_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1 (vlc_gl_t *VAR_2)
{
    vlc_gl_sys_t *VAR_3 = VAR_2->sys;

    if (!FUNC_0 (VAR_3->display, VAR_3->win, VAR_3->win, VAR_3->ctx))
        return VAR_0;
    return VAR_1;
}
