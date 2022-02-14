
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int next; int current; scalar_t__ i_flags; void* i_dts; void* i_pts; } ;
typedef TYPE_1__ cc_storage_t ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;

cc_storage_t * FUNC_3( void )
{
    cc_storage_t *VAR_1 = FUNC_2( sizeof(*VAR_1) );
    if( FUNC_1(VAR_1) )
    {
        VAR_1->i_pts = VAR_0;
        VAR_1->i_dts = VAR_0;
        VAR_1->i_flags = 0;
        FUNC_0( &VAR_1->current );
        FUNC_0( &VAR_1->next );
    }
    return VAR_1;
}
