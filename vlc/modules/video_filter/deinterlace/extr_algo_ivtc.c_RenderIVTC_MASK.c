
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_15__ {int* pi_scores; int* pi_final_scores; } ;
typedef TYPE_2__ ivtc_sys_t ;
struct TYPE_16__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_14__ {int ** pp_history; } ;
struct TYPE_17__ {TYPE_1__ context; TYPE_2__ ivtc; } ;
typedef TYPE_4__ filter_sys_t ;


 int FUNC_0 (int *,int *) ;
 size_t VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int *) ;

int FUNC_12( filter_t *VAR_3, picture_t *VAR_4, picture_t *VAR_5 )
{
    FUNC_9(VAR_5);
    FUNC_10( VAR_3 != ((void*)0) );
    FUNC_10( VAR_4 != ((void*)0) );

    filter_sys_t *VAR_6 = VAR_3->p_sys;
    ivtc_sys_t *VAR_7 = &VAR_6->ivtc;

    picture_t *VAR_8 = VAR_6->context.pp_history[0];
    picture_t *VAR_9 = VAR_6->context.pp_history[1];
    picture_t *VAR_10 = VAR_6->context.pp_history[2];


    if( !VAR_10 )
        return VAR_1;


    FUNC_5( VAR_3 );



    if( VAR_8 && VAR_9 )
    {

        FUNC_6( VAR_3 );





        FUNC_8( VAR_3 );
        FUNC_2( VAR_3 );
        FUNC_3( VAR_3 );
        FUNC_4( VAR_3 );
        FUNC_1( VAR_3 );


        bool VAR_11 = FUNC_7( VAR_3, VAR_4 );

        if( VAR_11 )
            return VAR_2;
        else
            return VAR_1;
    }
    else if( !VAR_8 && !VAR_9 )
    {






        int VAR_12 = FUNC_0( VAR_10, VAR_10 );
        VAR_7->pi_scores[VAR_0] = VAR_12;
        VAR_7->pi_final_scores[0] = VAR_12;

        FUNC_11( VAR_4, VAR_10 );
        return VAR_2;
    }
    else
    {


        FUNC_10( VAR_9 && !VAR_8 );
        FUNC_6( VAR_3 );




        VAR_7->pi_final_scores[1] = VAR_7->pi_scores[VAR_0];

        FUNC_11( VAR_4, VAR_10 );
        return VAR_2;
    }
}
