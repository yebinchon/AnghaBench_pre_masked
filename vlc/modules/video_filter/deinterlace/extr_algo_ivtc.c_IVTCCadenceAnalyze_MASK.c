
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int i_nb_fields; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_10__ {int* pi_cadence_pos_history; int* pi_motion; int b_sequence_valid; int* pb_all_progressives; scalar_t__ i_mode; int i_cadence_pos; int i_tfd; } ;
typedef TYPE_3__ ivtc_sys_t ;
struct TYPE_11__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_8__ {TYPE_2__** pp_history; } ;
struct TYPE_12__ {TYPE_1__ context; TYPE_3__ ivtc; } ;
typedef TYPE_5__ filter_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 int* VAR_8 ;
 int* VAR_9 ;

__attribute__((used)) static void FUNC_2( filter_t *VAR_10 )
{
    FUNC_0( VAR_10 != ((void*)0) );

    filter_sys_t *VAR_11 = VAR_10->p_sys;
    ivtc_sys_t *VAR_12 = &VAR_11->ivtc;
    picture_t *VAR_13 = VAR_11->context.pp_history[0];
    picture_t *VAR_14 = VAR_11->context.pp_history[1];
    picture_t *VAR_15 = VAR_11->context.pp_history[2];

    FUNC_0( VAR_15 != ((void*)0) );
    FUNC_0( VAR_14 != ((void*)0) );
    FUNC_0( VAR_13 != ((void*)0) );
    int VAR_16 = VAR_12->pi_cadence_pos_history[VAR_2];
    int VAR_17 = VAR_12->pi_cadence_pos_history[VAR_2-1];
    int VAR_18 = VAR_12->pi_cadence_pos_history[VAR_2-2];

    bool VAR_19 = 0;
    if( VAR_16 != VAR_0 && VAR_17 != VAR_0 )
    {
        int VAR_20 = VAR_8[VAR_16];
        int VAR_21 = VAR_8[VAR_17];
        VAR_19 = (VAR_20 == (VAR_21 + 1) % 5);
    }
    bool VAR_22 = 0;
    if( VAR_17 != VAR_0 && VAR_18 != VAR_0 )
    {
        int VAR_23 = VAR_8[VAR_17];
        int VAR_24 = VAR_8[VAR_18];
        VAR_22 = (VAR_23 == (VAR_24 + 1) % 5);
    }

    int VAR_25 = VAR_12->pi_motion[VAR_2];
    int VAR_26 = VAR_12->pi_motion[VAR_2-1];

    bool VAR_27 = (VAR_13->i_nb_fields == 2);
    bool VAR_28 = (VAR_14->i_nb_fields == 2) &&
                         (VAR_26 > 0 || VAR_22);
    bool VAR_29 = (VAR_15->i_nb_fields == 2) &&
                         (VAR_25 > 0 || VAR_19);
    bool VAR_30 = (VAR_27 && VAR_28 && VAR_29);





    if( VAR_30 )
    {
        for( int VAR_31 = 0; VAR_31 < VAR_1; ++VAR_31 )
        {
            const int VAR_32 = VAR_12->pi_cadence_pos_history[VAR_31];
            if( VAR_32 == VAR_0 )
            {
                VAR_30 = 0;
                break;
            }
        }
    }


    VAR_12->b_sequence_valid = 0;
    if( VAR_30 )
    {

        int VAR_33[VAR_1];
        int VAR_34[VAR_1];
        for( int VAR_35 = 0; VAR_35 < VAR_1; ++VAR_35 )
        {
            const int VAR_36 = VAR_12->pi_cadence_pos_history[VAR_35];
            VAR_34[VAR_35] = VAR_8[VAR_36];
            VAR_33[VAR_35] = VAR_9[VAR_36];
        }
        VAR_12->b_sequence_valid = 1;
        bool VAR_37 = (VAR_34[0] == 3);
        int VAR_38 = VAR_34[0];
        for( int VAR_39 = 1; VAR_39 < VAR_1; ++VAR_39 )
        {
            if( VAR_34[VAR_39] != (++VAR_38 % 5) )
                VAR_12->b_sequence_valid = 0;
            if( VAR_34[VAR_39] != 3 )
                VAR_37 = 0;
        }
        VAR_12->pb_all_progressives[VAR_2] = VAR_37;

        if( VAR_12->b_sequence_valid )
        {

            int VAR_40 = 0;
            int VAR_41 = 0;
            int VAR_42 = 0;
            for( int VAR_43 = 0; VAR_43 < VAR_1; ++VAR_43 )
            {
                if( VAR_33[VAR_43] == VAR_6 )
                    VAR_40++;
                else if( VAR_33[VAR_43] == VAR_7 )
                    VAR_41++;
                else if( VAR_33[VAR_43] == VAR_5 )
                    VAR_42++;
            }



            int VAR_44 = VAR_6;
            if( VAR_41 >= 2)
                VAR_44 = VAR_7;
            else if( VAR_42 >= 2)
                VAR_44 = VAR_5;
            if( VAR_44 == VAR_7 )
            {
                if( VAR_12->i_mode != VAR_4 )
                    FUNC_1( VAR_10, "IVTC: 3:2 pulldown: NTSC TFF " "hard telecine detected." );

                VAR_12->i_mode = VAR_4;
                VAR_12->i_cadence_pos = VAR_34[VAR_2];
                VAR_12->i_tfd = VAR_7;
            }
            else if( VAR_44 == VAR_5 )
            {
                if( VAR_12->i_mode != VAR_4 )
                    FUNC_1( VAR_10, "IVTC: 3:2 pulldown: NTSC BFF " "hard telecine detected." );

                VAR_12->i_mode = VAR_4;
                VAR_12->i_cadence_pos = VAR_34[VAR_2];
                VAR_12->i_tfd = VAR_5;
            }
        }

        else if( VAR_37 )
        {




            bool VAR_45 = 1;
            for( int VAR_46 = 0; VAR_46 < VAR_1 ; VAR_46++ )
            {
                if( VAR_12->pb_all_progressives[VAR_46] == 0 )
                {
                    VAR_45 = 0;
                    break;
                }
            }


            if( VAR_45 )
            {





                if( VAR_12->i_mode == VAR_4 )
                    FUNC_1( VAR_10, "IVTC: 3:2 pulldown: progressive " "signal detected." );

                VAR_12->i_mode = VAR_3;
                VAR_12->i_cadence_pos = VAR_0;
                VAR_12->i_tfd = VAR_6;
            }
        }
    }
}
