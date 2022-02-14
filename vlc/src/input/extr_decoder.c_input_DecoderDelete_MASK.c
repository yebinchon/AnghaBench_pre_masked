
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ b_supported; } ;
struct decoder_owner {int flushing; int b_waiting; TYPE_2__ cc; int thread; int lock; scalar_t__ out_pool; scalar_t__ vout_thread_started; int * p_vout; int wait_request; int p_fifo; } ;
struct TYPE_8__ {scalar_t__ i_cat; } ;
struct TYPE_10__ {TYPE_1__ fmt_in; } ;
typedef TYPE_3__ decoder_t ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct decoder_owner* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int,int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11( decoder_t *VAR_3 )
{
    struct decoder_owner *VAR_4 = FUNC_1( VAR_3 );

    FUNC_4( VAR_4->thread );

    FUNC_6( VAR_4->p_fifo );
    VAR_4->flushing = 1;
    FUNC_7( VAR_4->p_fifo );


    FUNC_9( &VAR_4->lock );
    VAR_4->b_waiting = 0;
    FUNC_5( &VAR_4->wait_request );
    if( VAR_3->fmt_in.i_cat == VAR_1 && VAR_4->p_vout != ((void*)0) && VAR_4->vout_thread_started )
    {
        if (VAR_4->out_pool)
            FUNC_3( VAR_4->out_pool, 1 );
    }
    FUNC_10( &VAR_4->lock );

    FUNC_8( VAR_4->thread, ((void*)0) );


    if( VAR_4->cc.b_supported )
    {
        for( int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++ )
            FUNC_2( VAR_3, VAR_2, VAR_5, 0 );
    }


    FUNC_0( VAR_3 );
}
