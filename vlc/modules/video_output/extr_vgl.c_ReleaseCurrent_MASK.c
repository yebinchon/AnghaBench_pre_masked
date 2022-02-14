
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int opaque; int (* makeCurrentCb ) (int ,int) ;} ;
typedef TYPE_1__ vout_display_sys_t ;
struct TYPE_5__ {TYPE_1__* sys; } ;
typedef TYPE_2__ vlc_gl_t ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(vlc_gl_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;
    VAR_1->makeCurrentCb(VAR_1->opaque, 0);
}
