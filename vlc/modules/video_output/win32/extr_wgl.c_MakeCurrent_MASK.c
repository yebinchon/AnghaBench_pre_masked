
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hGLRC; int hGLDC; } ;
typedef TYPE_1__ vout_display_sys_t ;
struct TYPE_5__ {TYPE_1__* sys; } ;
typedef TYPE_2__ vlc_gl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(vlc_gl_t *VAR_2)
{
    vout_display_sys_t *VAR_3 = VAR_2->sys;
    bool VAR_4 = FUNC_0(VAR_3->hGLDC, VAR_3->hGLRC);
    return VAR_4 ? VAR_1 : VAR_0;
}
