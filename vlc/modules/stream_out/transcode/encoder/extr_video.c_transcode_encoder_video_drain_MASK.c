
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int b_abort; int thread; int lock_out; int cond; scalar_t__ b_threaded; } ;
typedef TYPE_1__ transcode_encoder_t ;
typedef int block_t ;


 int VAR_0 ;
 int FUNC_0 (int **,int *) ;
 int * FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7( transcode_encoder_t *VAR_1, block_t **VAR_2 )
{
    if( !VAR_1->b_threaded )
    {
        block_t *VAR_3;
        do {
            VAR_3 = FUNC_1( VAR_1, ((void*)0) );
            FUNC_0( VAR_2, VAR_3 );
        } while( VAR_3 );
    }
    else
    {
        if( VAR_1->b_threaded && !VAR_1->b_abort )
        {
            FUNC_5( &VAR_1->lock_out );
            VAR_1->b_abort = 1;
            FUNC_3( &VAR_1->cond );
            FUNC_6( &VAR_1->lock_out );
            FUNC_4( VAR_1->thread, ((void*)0) );
        }
        FUNC_0( VAR_2, FUNC_2( VAR_1 ) );
    }
    return VAR_0;
}
