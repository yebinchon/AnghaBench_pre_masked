
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_16__ {scalar_t__ date; int i_nb_fields; scalar_t__ b_top_field_first; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_17__ {scalar_t__ i_mode; int b_sequence_valid; size_t i_cadence_pos; size_t i_tfd; int* pi_scores; int* pi_final_scores; int * pi_v_raw; } ;
typedef TYPE_3__ ivtc_sys_t ;
struct TYPE_18__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_15__ {TYPE_2__** pp_history; } ;
struct TYPE_19__ {TYPE_1__ context; TYPE_3__ ivtc; } ;
typedef TYPE_5__ filter_sys_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,int ,int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,char*,int,int) ;
 int** VAR_18 ;
 int* VAR_19 ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static bool FUNC_4( filter_t *VAR_20, picture_t *VAR_21 )
{
    FUNC_1( VAR_20 != ((void*)0) );
    FUNC_1( VAR_21 != ((void*)0) );

    filter_sys_t *VAR_22 = VAR_20->p_sys;
    ivtc_sys_t *VAR_23 = &VAR_22->ivtc;
    vlc_tick_t VAR_24 = VAR_17;

    picture_t *VAR_25 = VAR_22->context.pp_history[1];
    picture_t *VAR_26 = VAR_22->context.pp_history[2];

    FUNC_1( VAR_26 != ((void*)0) );
    FUNC_1( VAR_25 != ((void*)0) );
    int VAR_27 = -1;
    int VAR_28;
    if( VAR_23->i_mode == VAR_8 )
    {



        if( VAR_23->b_sequence_valid )
        {
            FUNC_1( VAR_23->i_cadence_pos != VAR_0 );
            FUNC_1( VAR_23->i_tfd != VAR_15 );


            VAR_28 = VAR_18[VAR_23->i_tfd][VAR_23->i_cadence_pos];

            if( VAR_28 == VAR_14 )
            {

                VAR_23->i_cadence_pos = (VAR_23->i_cadence_pos + 1) % 5;


                return 0;
            }
            else
            {
                if( VAR_28 == VAR_13 )
                    VAR_27 = VAR_23->pi_scores[VAR_5];
                else if( VAR_28 == VAR_12 )
                    VAR_27 = VAR_23->pi_scores[VAR_2];
                else if( VAR_28 == VAR_11 )
                    VAR_27 = VAR_23->pi_scores[VAR_4];
                else if( VAR_28 == VAR_10 )
                    VAR_27 = VAR_23->pi_scores[VAR_3];





                int VAR_29 = 0;
                for( int VAR_30 = 0; VAR_30 < VAR_6; VAR_30++)
                    VAR_29 += VAR_23->pi_final_scores[VAR_30];
                VAR_29 /= VAR_6;



                if( VAR_27 > 1000 && VAR_27 > 2*VAR_29 )
                {


                    VAR_23->b_sequence_valid = 0;
                    FUNC_2( VAR_20, "Rejected cadence-based frame " "construction: interlace score %d " "(running average %d)",


                                       VAR_27, VAR_29 );
                    VAR_23->pi_v_raw[VAR_7] = VAR_16;
                }
            }
        }







        if( !VAR_23->b_sequence_valid )
        {
            int VAR_31 = VAR_23->pi_scores[VAR_5];
            int VAR_32 = VAR_23->pi_scores[VAR_4];
            int VAR_33 = VAR_23->pi_scores[VAR_3];

            if( VAR_26->b_top_field_first )
            {
                if( VAR_31 <= VAR_32 )
                {
                    VAR_28 = VAR_13;
                    VAR_27 = VAR_31;
                }
                else
                {
                    VAR_28 = VAR_11;
                    VAR_27 = VAR_32;
                }
            }
            else
            {
                if( VAR_31 <= VAR_33 )
                {
                    VAR_28 = VAR_13;
                    VAR_27 = VAR_31;
                }
                else
                {
                    VAR_28 = VAR_10;
                    VAR_27 = VAR_33;
                }
            }
        }
        if( VAR_23->b_sequence_valid )
        {



            int VAR_34 = VAR_19[VAR_23->i_cadence_pos];
            FUNC_1( VAR_34 >= 0 );


            VAR_24 = VAR_25->date
                    + (VAR_26->date - VAR_25->date)*VAR_34/4;
        }
        else







        {
            VAR_24 = VAR_25->date;
        }


        VAR_23->i_cadence_pos = (VAR_23->i_cadence_pos + 1) % 5;
    }
    else if( VAR_23->i_mode == VAR_9 )
    {
        VAR_28 = VAR_12;
        VAR_27 = VAR_23->pi_scores[VAR_2];






        if( VAR_25->i_nb_fields == 3 )
        {


            vlc_tick_t VAR_35 = ( (VAR_26->date - VAR_25->date)/3 ) / 2;
            VAR_24 = VAR_25->date + VAR_35;
        }
        else
        {
            VAR_24 = VAR_25->date;
        }
    }
    else
    {
        VAR_28 = VAR_13;
        VAR_27 = VAR_23->pi_scores[VAR_5];



        VAR_24 = VAR_26->date;
    }



    FUNC_1( VAR_28 != VAR_14 );


    if( VAR_28 == VAR_13 )
        FUNC_3( VAR_21, VAR_26 );
    else if( VAR_28 == VAR_12 )
        FUNC_3( VAR_21, VAR_25 );
    else if( VAR_28 == VAR_11 )
        FUNC_0( VAR_20, VAR_21, VAR_26, VAR_25, VAR_1, 0 );
    else if( VAR_28 == VAR_10 )
        FUNC_0( VAR_20, VAR_21, VAR_25, VAR_26, VAR_1, 0 );
    for( int VAR_36 = 1; VAR_36 < VAR_6; VAR_36++ )
        VAR_23->pi_final_scores[VAR_36-1] = VAR_23->pi_final_scores[VAR_36];
    VAR_23->pi_final_scores[VAR_7] = VAR_27;




    if( VAR_24 != VAR_17 )
        VAR_21->date = VAR_24;

    return 1;
}
