
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ f_float; } ;
typedef TYPE_1__ vlc_value_t ;
typedef scalar_t__ vlc_tick_t ;
struct TYPE_16__ {scalar_t__ i_buffering_delay; scalar_t__ i_rate_date; scalar_t__ i_rate_delay; scalar_t__ rate_source; scalar_t__ rate; scalar_t__ i_cmd_delay; int p_out; int lock; int p_input; int wait; int b_paused; } ;
typedef TYPE_2__ ts_thread_t ;
struct TYPE_17__ {scalar_t__ i_date; int i_type; } ;
typedef TYPE_3__ ts_cmd_t ;






 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*,int) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (int ,int ,TYPE_1__*) ;
 int FUNC_11 (int ,char*,scalar_t__) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ,TYPE_3__*) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int const) ;
 int FUNC_20 () ;
 int FUNC_21 (scalar_t__) ;

__attribute__((used)) static void *FUNC_22( void *VAR_2 )
{
    ts_thread_t *VAR_3 = VAR_2;
    vlc_tick_t VAR_4 = -1;

    for( ;; )
    {
        ts_cmd_t VAR_5;
        vlc_tick_t VAR_6;
        bool VAR_7;


        FUNC_17( &VAR_3->lock );
        FUNC_12( &VAR_3->lock );

        for( ;; )
        {
            const int VAR_8 = FUNC_20();
            VAR_7 = FUNC_8( VAR_3->p_out );

            if( ( !VAR_3->b_paused || VAR_7 ) && !FUNC_7( VAR_3, &VAR_5, 0 ) )
            {
                FUNC_19( VAR_8 );
                break;
            }
            FUNC_19( VAR_8 );

            FUNC_16( &VAR_3->wait, &VAR_3->lock );
        }

        if( VAR_7 && VAR_4 < 0 )
        {
            VAR_4 = VAR_5.i_date;
        }
        else if( VAR_4 > 0 )
        {
            VAR_3->i_buffering_delay += VAR_4 - VAR_5.i_date;
            if( VAR_7 )
                VAR_4 = VAR_5.i_date;
            else
                VAR_4 = -1;
        }

        if( VAR_3->i_rate_date < 0 )
            VAR_3->i_rate_date = VAR_5.i_date;

        VAR_3->i_rate_delay = 0;
        if( VAR_3->rate_source != VAR_3->rate )
        {
            const vlc_tick_t VAR_9 = VAR_5.i_date - VAR_3->i_rate_date;
            VAR_3->i_rate_delay = VAR_9 * VAR_3->rate_source / VAR_3->rate - VAR_9;
        }
        if( VAR_3->i_cmd_delay + VAR_3->i_rate_delay + VAR_3->i_buffering_delay < 0 && VAR_3->rate != VAR_3->rate_source )
        {
            const int VAR_10 = FUNC_20();


            FUNC_11( VAR_3->p_input, "es out timeshift: auto reset rate to %f", VAR_3->rate_source );

            VAR_3->i_cmd_delay = 0;
            VAR_3->i_buffering_delay = 0;

            VAR_3->i_rate_delay = 0;
            VAR_3->i_rate_date = -1;
            VAR_3->rate = VAR_3->rate_source;

            if( !FUNC_9( VAR_3->p_out, VAR_3->rate_source, VAR_3->rate ) )
            {
                vlc_value_t VAR_11 = { .f_float = VAR_3->rate };



                FUNC_10( VAR_3->p_input, VAR_0, &VAR_11 );
            }

            FUNC_19( VAR_10 );
        }
        VAR_6 = VAR_5.i_date + VAR_3->i_cmd_delay + VAR_3->i_rate_delay + VAR_3->i_buffering_delay;

        FUNC_14();
        FUNC_18( &VAR_3->lock );



        FUNC_15( VAR_1, &VAR_5 );

        FUNC_21( VAR_6 );

        FUNC_14();


        const int VAR_12 = FUNC_20();
        switch( VAR_5.i_type )
        {
        case 131:
            FUNC_3( VAR_3->p_out, &VAR_5 );
            FUNC_0( &VAR_5 );
            break;
        case 128:
            FUNC_6( VAR_3->p_out, &VAR_5 );
            FUNC_2( &VAR_5 );
            break;
        case 130:
            FUNC_4( VAR_3->p_out, &VAR_5 );
            FUNC_1( &VAR_5 );
            break;
        case 129:
            FUNC_5( VAR_3->p_out, &VAR_5 );
            break;
        default:
            FUNC_13();
            break;
        }
        FUNC_19( VAR_12 );
    }

    return ((void*)0);
}
