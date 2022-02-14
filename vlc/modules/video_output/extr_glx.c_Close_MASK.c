
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vlc_gl_t ;
struct TYPE_6__ {int win; int ctx; int * display; } ;
typedef TYPE_2__ vlc_gl_sys_t ;
typedef int Display ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(vlc_gl_t *VAR_0)
{
    vlc_gl_sys_t *VAR_1 = VAR_0->sys;
    Display *VAR_2 = VAR_1->display;

    FUNC_2(VAR_2, VAR_1->ctx);
    FUNC_3(VAR_2, VAR_1->win);
    FUNC_0(VAR_2);
    FUNC_1(VAR_1);
}
