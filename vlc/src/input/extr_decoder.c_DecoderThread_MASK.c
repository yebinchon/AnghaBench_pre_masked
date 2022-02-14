
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_3__ {scalar_t__ i_cat; } ;
struct TYPE_4__ {TYPE_1__ fmt_out; } ;
struct decoder_owner {int flushing; int reset_out_state; int paused; scalar_t__ pause_date; float request_rate; scalar_t__ delay; scalar_t__ frames_countdown; int b_idle; int b_draining; int drained; int lock; int wait_acknowledge; int p_fifo; int * p_aout; TYPE_2__ dec; int wait_fifo; } ;
typedef int block_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct decoder_owner*,scalar_t__) ;
 int FUNC_1 (struct decoder_owner*,int,scalar_t__) ;
 int FUNC_2 (struct decoder_owner*,float) ;
 int FUNC_3 (struct decoder_owner*) ;
 int FUNC_4 (struct decoder_owner*,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int) ;
 int FUNC_18 () ;
 int FUNC_19 () ;

__attribute__((used)) static void *FUNC_20( void *VAR_1 )
{
    struct decoder_owner *VAR_2 = (struct decoder_owner *)VAR_1;
    float VAR_3 = 1.f;
    vlc_tick_t VAR_4 = 0;
    bool VAR_5 = 0;


    FUNC_12( VAR_2->p_fifo );
    FUNC_10( VAR_2->p_fifo );

    for( ;; )
    {
        if( VAR_2->flushing )
        {

            int VAR_6 = FUNC_18();

            FUNC_13( VAR_2->p_fifo );


            FUNC_3( VAR_2 );

            FUNC_12( VAR_2->p_fifo );
            FUNC_17( VAR_6 );




            VAR_2->flushing = 0;

            continue;
        }




        if( VAR_2->reset_out_state )
        {
            VAR_3 = 1.f;
            VAR_5 = 0;
            VAR_4 = 0;
            VAR_2->reset_out_state = 0;
        }

        if( VAR_5 != VAR_2->paused )
        {
            int VAR_7 = FUNC_18();
            vlc_tick_t VAR_8 = VAR_2->pause_date;

            VAR_5 = VAR_2->paused;
            FUNC_13( VAR_2->p_fifo );

            FUNC_1( VAR_2, VAR_5, VAR_8 );

            FUNC_17( VAR_7 );
            FUNC_12( VAR_2->p_fifo );
            continue;
        }

        if( VAR_3 != VAR_2->request_rate )
        {
            int VAR_9 = FUNC_18();

            VAR_3 = VAR_2->request_rate;
            FUNC_13( VAR_2->p_fifo );

            FUNC_2( VAR_2, VAR_3 );

            FUNC_17( VAR_9 );
            FUNC_12( VAR_2->p_fifo );
        }

        if( VAR_4 != VAR_2->delay )
        {
            int VAR_10 = FUNC_18();

            VAR_4 = VAR_2->delay;
            FUNC_13( VAR_2->p_fifo );

            FUNC_0( VAR_2, VAR_4 );

            FUNC_17( VAR_10 );
            FUNC_12( VAR_2->p_fifo );
        }

        if( VAR_2->paused && VAR_2->frames_countdown == 0 )
        {
            VAR_2->b_idle = 1;
            FUNC_9( &VAR_2->wait_acknowledge );
            FUNC_14( VAR_2->p_fifo );
            VAR_2->b_idle = 0;
            continue;
        }

        FUNC_9( &VAR_2->wait_fifo );
        FUNC_19();

        block_t *VAR_11 = FUNC_11( VAR_2->p_fifo );
        if( VAR_11 == ((void*)0) )
        {
            if( FUNC_6(!VAR_2->b_draining) )
            {
                VAR_2->b_idle = 1;
                FUNC_9( &VAR_2->wait_acknowledge );
                FUNC_14( VAR_2->p_fifo );
                VAR_2->b_idle = 0;
                continue;
            }


        }

        FUNC_13( VAR_2->p_fifo );

        int VAR_12 = FUNC_18();
        FUNC_4( VAR_2, VAR_11 );

        if( VAR_11 == ((void*)0) && VAR_2->dec.fmt_out.i_cat == VAR_0 )
        {

            if( VAR_2->p_aout != ((void*)0) )
                FUNC_5( VAR_2->p_aout );
        }
        FUNC_17( VAR_12 );


        FUNC_15( &VAR_2->lock );
        FUNC_12( VAR_2->p_fifo );
        if( VAR_2->b_draining && (VAR_11 == ((void*)0)) )
        {
            VAR_2->b_draining = 0;
            VAR_2->drained = 1;
        }
        FUNC_9( &VAR_2->wait_acknowledge );
        FUNC_16( &VAR_2->lock );
    }
    FUNC_8();
    FUNC_7();
}
