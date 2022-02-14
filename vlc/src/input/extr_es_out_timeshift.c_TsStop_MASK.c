
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock; TYPE_2__* p_storage_r; int thread; } ;
typedef TYPE_1__ ts_thread_t ;
typedef int ts_cmd_t ;
struct TYPE_7__ {int p_next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9( ts_thread_t *VAR_0 )
{
    FUNC_5( VAR_0->thread );
    FUNC_6( VAR_0->thread, ((void*)0) );

    FUNC_7( &VAR_0->lock );
    for( ;; )
    {
        ts_cmd_t VAR_1;

        if( FUNC_2( VAR_0, &VAR_1, 1 ) )
            break;

        FUNC_0( &VAR_1 );
    }
    FUNC_4( !VAR_0->p_storage_r || !VAR_0->p_storage_r->p_next );
    if( VAR_0->p_storage_r )
        FUNC_3( VAR_0->p_storage_r );
    FUNC_8( &VAR_0->lock );

    FUNC_1( VAR_0 );
}
