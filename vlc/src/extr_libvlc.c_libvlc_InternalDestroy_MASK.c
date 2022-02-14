
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int exit; } ;
typedef TYPE_1__ libvlc_priv_t ;
typedef int libvlc_int_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4( libvlc_int_t *VAR_0 )
{
    libvlc_priv_t *VAR_1 = FUNC_0( VAR_0 );

    FUNC_1( &VAR_1->exit );

    FUNC_2(&VAR_1->lock);
    FUNC_3(VAR_0);
}
