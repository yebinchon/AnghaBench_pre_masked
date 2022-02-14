
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int b_top_field_first; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_9__ {int* pi_top_rep; int* pi_bot_rep; int* pi_v_raw; int* pb_v_reliable; scalar_t__* pi_v_cadence_pos; } ;
typedef TYPE_3__ ivtc_sys_t ;
typedef scalar_t__ ivtc_cadence_pos ;
struct TYPE_10__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_7__ {TYPE_2__** pp_history; } ;
struct TYPE_11__ {TYPE_1__ context; TYPE_3__ ivtc; } ;
typedef TYPE_5__ filter_sys_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ) ;
 int* VAR_19 ;

__attribute__((used)) static void FUNC_1( filter_t *VAR_20 )
{
    FUNC_0( VAR_20 != ((void*)0) );

    filter_sys_t *VAR_21 = VAR_20->p_sys;
    ivtc_sys_t *VAR_22 = &VAR_21->ivtc;

    picture_t *VAR_23 = VAR_21->context.pp_history[2];

    FUNC_0( VAR_23 != ((void*)0) );
    int VAR_24 = 0;
    VAR_24 |= VAR_19[ VAR_5 ];





    bool VAR_25 = VAR_22->pi_top_rep[VAR_10];
    bool VAR_26 = VAR_22->pi_bot_rep[VAR_10];
    bool VAR_27 = VAR_22->pi_top_rep[VAR_10-1];
    bool VAR_28 = VAR_22->pi_bot_rep[VAR_10-1];
    if( VAR_25 )
    {
        VAR_24 |= VAR_19[ VAR_9 ];
        VAR_24 |= VAR_19[ VAR_1 ];
    }
    if( VAR_27 )
    {
        VAR_24 |= VAR_19[ VAR_6 ];
        VAR_24 |= VAR_19[ VAR_2 ];
    }
    if( VAR_26 )
    {
        VAR_24 |= VAR_19[ VAR_7 ];
        VAR_24 |= VAR_19[ VAR_3 ];
    }
    if( VAR_28 )
    {
        VAR_24 |= VAR_19[ VAR_8 ];
        VAR_24 |= VAR_19[ VAR_0 ];
    }







    bool VAR_29 = VAR_23->b_top_field_first;
    if( VAR_29 )
        VAR_24 &= VAR_16;
    else
        VAR_24 &= VAR_13;



    int VAR_30 = VAR_22->pi_v_raw[VAR_10-1];
    bool VAR_31 = 0;
    bool VAR_32 = 0;
    if( VAR_30 & VAR_17 )
        VAR_31 = 1;
    if( VAR_30 & VAR_14 )
        VAR_32 = 1;

    VAR_30 = (VAR_30 << 1) & VAR_12;

    if( VAR_31 )
        VAR_30 |= VAR_18;
    if( VAR_32 )
        VAR_30 |= VAR_15;





    if( (VAR_24 & VAR_30) != 0 )
        VAR_24 = VAR_24 & VAR_30;
    else
        VAR_24 = VAR_12;
    VAR_22->pi_v_raw[VAR_10] = VAR_24;



    ivtc_cadence_pos VAR_33 = VAR_4;
    if( VAR_24 != 0 )
    {
        for( int VAR_34 = 0; VAR_34 < VAR_11; VAR_34++ )
        {



            if( VAR_24 == (VAR_24 & VAR_19[VAR_34]) )
            {
                VAR_33 = VAR_34;
                break;
            }
        }
    }







    VAR_22->pi_v_cadence_pos[VAR_10] = VAR_33;
    VAR_22->pb_v_reliable[VAR_10] = (VAR_33 != VAR_4);
}
