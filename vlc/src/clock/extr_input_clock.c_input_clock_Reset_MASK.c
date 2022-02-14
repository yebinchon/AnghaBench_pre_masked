
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b_has_reference; int b_has_external_clock; int lock; int i_ts_max; int ref; } ;
typedef TYPE_1__ input_clock_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( input_clock_t *VAR_1 )
{
    FUNC_1( &VAR_1->lock );

    VAR_1->b_has_reference = 0;
    VAR_1->ref = FUNC_0( VAR_0, VAR_0 );
    VAR_1->b_has_external_clock = 0;
    VAR_1->i_ts_max = VAR_0;

    FUNC_2( &VAR_1->lock );
}
