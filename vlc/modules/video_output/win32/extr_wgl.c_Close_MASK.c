
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ hGLDC; int hvideownd; scalar_t__ hGLRC; } ;
typedef TYPE_1__ vout_display_sys_t ;
struct TYPE_7__ {TYPE_1__* sys; } ;
typedef TYPE_2__ vlc_gl_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(vlc_gl_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;

    if (VAR_1->hGLRC)
        FUNC_3(VAR_1->hGLRC);
    if (VAR_1->hGLDC)
        FUNC_1(VAR_1->hvideownd, VAR_1->hGLDC);

    FUNC_0(VAR_0);

    FUNC_2(VAR_1);
}
