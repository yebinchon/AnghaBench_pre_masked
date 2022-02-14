
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_rate_date; float rate; float rate_source; int lock; int p_out; scalar_t__ i_rate_delay; int i_cmd_delay; } ;
typedef TYPE_1__ ts_thread_t ;


 int FUNC_0 (int ,float,float) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3( ts_thread_t *VAR_0, float VAR_1, float VAR_2 )
{
    int VAR_3;

    FUNC_1( &VAR_0->lock );
    VAR_0->i_cmd_delay += VAR_0->i_rate_delay;

    VAR_0->i_rate_date = -1;
    VAR_0->i_rate_delay = 0;
    VAR_0->rate = VAR_2;
    VAR_0->rate_source = VAR_1;

    VAR_3 = FUNC_0( VAR_0->p_out, VAR_2, VAR_2 );
    FUNC_2( &VAR_0->lock );

    return VAR_3;
}
