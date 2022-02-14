
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int input_thread_t ;
struct TYPE_8__ {scalar_t__ i_int; } ;
struct TYPE_10__ {TYPE_1__ val; } ;
typedef TYPE_3__ input_control_param_t ;
struct TYPE_11__ {int * pf_demux; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_12__ {scalar_t__ i_state; int p_es_out; TYPE_2__* master; scalar_t__ b_can_pause; } ;
struct TYPE_9__ {scalar_t__ b_eof; TYPE_4__* p_demux; } ;


 scalar_t__ FUNC_0 (int *,int,TYPE_3__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int*,TYPE_3__*,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 TYPE_5__* FUNC_12 (int *) ;
 int FUNC_13 (int *,char*,...) ;
 scalar_t__ FUNC_14 (int *,char*) ;
 scalar_t__ FUNC_15 () ;

__attribute__((used)) static void FUNC_16( input_thread_t *VAR_4, bool VAR_5 )
{
    vlc_tick_t VAR_6 = 0;
    vlc_tick_t VAR_7 = 0;

    if( VAR_5 && FUNC_14( VAR_4, "start-paused" ) )
        FUNC_2( VAR_4, FUNC_15() );

    bool VAR_8 = VAR_5 &&
                           FUNC_14( VAR_4, "play-and-pause" );
    bool VAR_9 = 0;

    demux_t *VAR_10 = FUNC_12(VAR_4)->master->p_demux;
    const bool VAR_11 = VAR_10->pf_demux != ((void*)0);

    while( !FUNC_11( VAR_4 ) && FUNC_12(VAR_4)->i_state != VAR_0 )
    {
        vlc_tick_t VAR_12 = -1;
        bool VAR_13 = FUNC_12(VAR_4)->i_state == VAR_3;



        if( VAR_13 )
            VAR_13 = !FUNC_8( FUNC_12(VAR_4)->p_es_out )
                    || FUNC_12(VAR_4)->master->b_eof;

        if( !VAR_13 )
        {
            if( !FUNC_12(VAR_4)->master->b_eof )
            {
                bool VAR_14 = 0;

                FUNC_4( VAR_4, &VAR_14 );

                if( VAR_11 )
                    VAR_12 = FUNC_10( FUNC_12(VAR_4)->p_es_out );
                if( VAR_14 )
                    VAR_6 = 0;

                VAR_9 = 0;
            }
            else if( !FUNC_9( FUNC_12(VAR_4)->p_es_out ) )
            {
                FUNC_13( VAR_4, "waiting decoder fifos to empty" );
                VAR_12 = FUNC_15() + VAR_2;
            }


            else if( VAR_8 && FUNC_12(VAR_4)->b_can_pause )
            {
                if( VAR_9 )
                    break;

                input_control_param_t VAR_15;
                VAR_15.val.i_int = VAR_3;

                FUNC_13( VAR_4, "pausing at EOF (pause after each)");
                FUNC_0( VAR_4, VAR_1, VAR_15 );

                VAR_13 = 1;
                VAR_9 = 1;
            }
            else
            {
                if( FUNC_6( VAR_4 ) )
                    break;
            }


            vlc_tick_t VAR_16 = FUNC_15();
            if( VAR_16 >= VAR_6 )
            {
                FUNC_5( VAR_4 );
                VAR_6 = VAR_16 + FUNC_7(250);
            }
        }


        for( ;; )
        {
            vlc_tick_t VAR_17 = VAR_12;



            bool VAR_18 = FUNC_8( FUNC_12(VAR_4)->p_es_out )
                            && !FUNC_12(VAR_4)->master->b_eof;
            if( VAR_18 )
            {
                vlc_tick_t VAR_19 = FUNC_15();


                if( VAR_19 < VAR_7 + FUNC_7(125)
                 && (VAR_17 < 0 || VAR_17 > VAR_19 + FUNC_7(20)) )
                    VAR_17 = VAR_19 + FUNC_7(20);
                else
                    VAR_18 = 0;
            }

            int VAR_20;
            input_control_param_t VAR_21;

            if( FUNC_3( VAR_4, &VAR_20, &VAR_21, VAR_17, VAR_18 ) )
            {
                if( VAR_18 )
                    continue;
                break;
            }


            FUNC_13( VAR_4, "control type=%d", VAR_20 );

            if( FUNC_0( VAR_4, VAR_20, VAR_21 ) )
            {
                if( FUNC_1( VAR_20 ) )
                    VAR_7 = FUNC_15();
                VAR_6 = 0;
            }


            if( VAR_12 != 0 )
                VAR_12 = FUNC_10( FUNC_12(VAR_4)->p_es_out );
        }
    }
}
