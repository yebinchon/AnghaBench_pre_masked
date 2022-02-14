
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* ops; } ;
typedef TYPE_2__ vlc_tls_client_t ;
struct TYPE_7__ {int (* destroy ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(vlc_tls_client_t *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;

    VAR_0->ops->destroy(VAR_0);
    FUNC_3(FUNC_0(VAR_0));
    FUNC_2(VAR_0);
}
