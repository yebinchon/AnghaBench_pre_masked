
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* destroy ) (TYPE_1__*) ;} ;
typedef TYPE_1__ vlc_gl_t ;
struct vlc_gl_priv_t {int rc; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

void FUNC_5(vlc_gl_t *VAR_0)
{
    struct vlc_gl_priv_t *VAR_1 = (struct vlc_gl_priv_t *)VAR_0;
    if (!FUNC_2(&VAR_1->rc))
        return;

    if (VAR_0->destroy != ((void*)0))
        VAR_0->destroy(VAR_0);
    FUNC_4(FUNC_0(VAR_0));
    FUNC_3(VAR_0);
}
