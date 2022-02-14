
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rate; scalar_t__ rate_source; int lock; int p_storage_r; int b_paused; } ;
typedef TYPE_1__ ts_thread_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3( ts_thread_t *VAR_0 )
{
    bool VAR_1;

    FUNC_1( &VAR_0->lock );
    VAR_1 = !VAR_0->b_paused &&
               VAR_0->rate == VAR_0->rate_source &&
               FUNC_0( VAR_0->p_storage_r );
    FUNC_2( &VAR_0->lock );

    return VAR_1;
}
