
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int b_top_field_first; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_9__ {int* pi_scores; int* pi_s_cadence_pos; int* pi_cadence_pos_history; int* pi_motion; int* pb_s_reliable; } ;
typedef TYPE_3__ ivtc_sys_t ;
typedef int int64_t ;
struct TYPE_10__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_7__ {TYPE_2__** pp_history; } ;
struct TYPE_11__ {TYPE_1__ context; TYPE_3__ ivtc; } ;
typedef TYPE_5__ filter_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 size_t** VAR_8 ;
 int* VAR_9 ;

__attribute__((used)) static void FUNC_1( filter_t *VAR_10 )
{
    FUNC_0( VAR_10 != ((void*)0) );

    filter_sys_t *VAR_11 = VAR_10->p_sys;
    ivtc_sys_t *VAR_12 = &VAR_11->ivtc;
    picture_t *VAR_13 = VAR_11->context.pp_history[2];

    FUNC_0( VAR_13 != ((void*)0) );




    int VAR_14[VAR_7];
    for( int VAR_15 = 0; VAR_15 < VAR_7; VAR_15++ )
        VAR_14[VAR_15] = VAR_12->pi_scores[ VAR_8[VAR_15][0] ]
                          + VAR_12->pi_scores[ VAR_8[VAR_15][1] ]
                          + VAR_12->pi_scores[ VAR_8[VAR_15][2] ];

    int VAR_16 = VAR_3;
    int VAR_17 = VAR_14[VAR_16];


    int VAR_18 = VAR_5;
    int VAR_19 = VAR_4;
    if( !VAR_13->b_top_field_first )
    {
        VAR_18 = VAR_1;
        VAR_19 = VAR_0;
    }
    for( int VAR_20 = VAR_18; VAR_20 < VAR_19; VAR_20++ )
    {
        if( VAR_14[VAR_20] < VAR_17 )
        {
            VAR_17 = VAR_14[VAR_20];
            VAR_16 = VAR_20;
        }
    }



    VAR_12->pi_s_cadence_pos[VAR_6] = VAR_16;
    int VAR_21 = VAR_14[VAR_3];
    int VAR_22 = 0;
    if( VAR_16 != VAR_3 )
        VAR_22 = VAR_14[VAR_3];
    for( int VAR_23 = VAR_18; VAR_23 < VAR_19; VAR_23++ )
    {
        VAR_21 += VAR_14[VAR_23];
        if( VAR_23 != VAR_16 )
            VAR_22 += VAR_14[VAR_23];
    }

    VAR_21 /= (VAR_19 - VAR_18 + 1);
    VAR_22 /= (VAR_19 - VAR_18);


    double VAR_24 = (double)VAR_22 / (double)VAR_21;
    int64_t VAR_25 = (int64_t)(VAR_14[VAR_3] - VAR_21);
    int64_t VAR_26 = VAR_25*VAR_25;
    int64_t VAR_27 = 0;
    if( VAR_16 != VAR_3 )
    {
        int64_t VAR_28 = (int64_t)(VAR_14[VAR_3]
                                      - VAR_22);
        VAR_27 = VAR_28*VAR_28;
    }
    for( int VAR_29 = VAR_18; VAR_29 < VAR_19; VAR_29++ )
    {
        VAR_25 = (int64_t)(VAR_14[VAR_29] - VAR_21);
        VAR_26 += (VAR_25*VAR_25);
        if( VAR_29 != VAR_16 )
        {
            int64_t VAR_30 = (int64_t)(VAR_14[VAR_29] - VAR_22);
            VAR_27 += (VAR_30*VAR_30);
        }
    }

    VAR_26 /= (uint64_t)(VAR_19 - VAR_18 + 1);
    VAR_27 /= (uint64_t)(VAR_19 - VAR_18);
    int VAR_31 = VAR_12->pi_cadence_pos_history[VAR_6-1];
    int VAR_32 = VAR_9[VAR_16];




    bool VAR_33 = 0;
    if( VAR_31 != VAR_2 )
    {
        int VAR_34 = VAR_9[VAR_31];
        VAR_33 = (VAR_32 == (VAR_34 + 1) % 5);
    }




    int VAR_35 = VAR_12->pi_motion[VAR_6];
    bool VAR_36 =
      ( VAR_35 > 0 &&
        VAR_24 > 1.005 &&
        ( VAR_33 || ( (double)VAR_26 > 1.17*(double)VAR_27 ) )
      );
    VAR_12->pb_s_reliable[VAR_6] = VAR_36;
}
