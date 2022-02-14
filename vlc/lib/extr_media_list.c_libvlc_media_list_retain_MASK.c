
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int refcount_lock; int i_refcount; } ;
typedef TYPE_1__ libvlc_media_list_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2( libvlc_media_list_t * VAR_0 )
{
    FUNC_0( &VAR_0->refcount_lock );
    VAR_0->i_refcount++;
    FUNC_1( &VAR_0->refcount_lock );
}
