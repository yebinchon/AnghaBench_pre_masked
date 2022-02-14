
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int i_nb_fields; int b_top_field_first; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_10__ {scalar_t__ i_mode; scalar_t__ i_old_mode; int i_tfd; scalar_t__ i_cadence_pos; } ;
typedef TYPE_3__ ivtc_sys_t ;
struct TYPE_11__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_8__ {TYPE_2__** pp_history; } ;
struct TYPE_12__ {TYPE_1__ context; TYPE_3__ ivtc; } ;
typedef TYPE_5__ filter_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,char*) ;

__attribute__((used)) static void FUNC_2( filter_t *VAR_3 )
{
    FUNC_0( VAR_3 != ((void*)0) );

    filter_sys_t *VAR_4 = VAR_3->p_sys;
    ivtc_sys_t *VAR_5 = &VAR_4->ivtc;
    picture_t *VAR_6 = VAR_4->context.pp_history[0];
    picture_t *VAR_7 = VAR_4->context.pp_history[1];
    picture_t *VAR_8 = VAR_4->context.pp_history[2];

    FUNC_0( VAR_8 != ((void*)0) );
    FUNC_0( VAR_7 != ((void*)0) );
    FUNC_0( VAR_6 != ((void*)0) );
    bool VAR_9 = (VAR_6->i_nb_fields == 2) &&
                             (VAR_7->i_nb_fields == 3) &&
                             (VAR_8->i_nb_fields == 2);

    bool VAR_10 = (VAR_6->i_nb_fields == 3) &&
                             (VAR_7->i_nb_fields == 2) &&
                             (VAR_8->i_nb_fields == 3);


    bool VAR_11 = (VAR_6->i_nb_fields == 3) &&
                             (VAR_7->i_nb_fields == 2) &&
                             (VAR_8->i_nb_fields == 2);




    if( VAR_9 || VAR_10 || VAR_11 )
    {
        if( VAR_5->i_mode != VAR_1 )
        {
            FUNC_1( VAR_3, "IVTC: 3:2 pulldown: NTSC soft telecine " "detected." );

            VAR_5->i_old_mode = VAR_5->i_mode;
        }


        VAR_5->i_mode = VAR_1;


        VAR_5->i_cadence_pos = VAR_0;
        VAR_5->i_tfd = VAR_2;
    }

    else if( VAR_5->i_mode == VAR_1 )
    {
        FUNC_1( VAR_3, "IVTC: 3:2 pulldown: NTSC soft telecine ended. " "Returning to previous mode." );
        VAR_5->i_mode = VAR_5->i_old_mode;
        VAR_5->i_cadence_pos = 0;



        VAR_5->i_tfd = !VAR_8->b_top_field_first;
    }
}
