
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_storage_r; int lock; } ;
typedef TYPE_1__ ts_thread_t ;
struct TYPE_8__ {struct TYPE_8__* p_next; } ;
typedef TYPE_2__ ts_storage_t ;
typedef int ts_cmd_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4( ts_thread_t *VAR_2, ts_cmd_t *VAR_3, bool VAR_4 )
{
    FUNC_3( &VAR_2->lock );

    if( FUNC_1( VAR_2->p_storage_r ) )
        return VAR_0;

    FUNC_2( VAR_2->p_storage_r, VAR_3, VAR_4 );

    while( FUNC_1( VAR_2->p_storage_r ) )
    {
        ts_storage_t *VAR_5 = VAR_2->p_storage_r->p_next;
        if( !VAR_5 )
            break;

        FUNC_0( VAR_2->p_storage_r );
        VAR_2->p_storage_r = VAR_5;
    }

    return VAR_1;
}
