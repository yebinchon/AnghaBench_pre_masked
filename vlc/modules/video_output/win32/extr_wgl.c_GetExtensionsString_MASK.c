
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* (* GetExtensionsStringEXT ) () ;char const* (* GetExtensionsStringARB ) (int ) ;} ;
struct TYPE_6__ {int hGLDC; TYPE_1__ exts; } ;
typedef TYPE_2__ vout_display_sys_t ;
struct TYPE_7__ {TYPE_2__* sys; } ;
typedef TYPE_3__ vlc_gl_t ;


 char const* FUNC_0 () ;
 char const* FUNC_1 (int ) ;

__attribute__((used)) static const char *FUNC_2(vlc_gl_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;
    return VAR_1->exts.GetExtensionsStringEXT ?
            VAR_1->exts.GetExtensionsStringEXT() :
            VAR_1->exts.GetExtensionsStringARB(VAR_1->hGLDC);
}
