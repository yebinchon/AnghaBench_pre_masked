
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ref_count; int instance_lock; } ;
typedef TYPE_1__ libvlc_instance_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( libvlc_instance_t *VAR_1 )
{
    FUNC_0( VAR_1 != ((void*)0) );
    FUNC_0( VAR_1->ref_count < VAR_0 );

    FUNC_1( &VAR_1->instance_lock );
    VAR_1->ref_count++;
    FUNC_2( &VAR_1->instance_lock );
}
