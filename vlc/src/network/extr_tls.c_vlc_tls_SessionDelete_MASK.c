
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; } ;
typedef TYPE_2__ vlc_tls_t ;
struct TYPE_5__ {int (* close ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

void FUNC_3 (vlc_tls_t *VAR_0)
{
    int VAR_1 = FUNC_2();
    VAR_0->ops->close(VAR_0);
    FUNC_1(VAR_1);
}
