
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* (* getProcAddressCb ) (int ,char const*) ;int opaque; } ;
typedef TYPE_1__ vout_display_sys_t ;
struct TYPE_5__ {TYPE_1__* sys; } ;
typedef TYPE_2__ vlc_gl_t ;


 void* FUNC_0 (int ,char const*) ;

__attribute__((used)) static void *FUNC_1(vlc_gl_t *VAR_0, const char *VAR_1)
{
    vout_display_sys_t *VAR_2 = VAR_0->sys;
    return VAR_2->getProcAddressCb(VAR_2->opaque, VAR_1);
}
