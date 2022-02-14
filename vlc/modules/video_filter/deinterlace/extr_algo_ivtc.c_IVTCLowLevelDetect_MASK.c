
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_7__ {int* pi_motion; int* pi_top_rep; int* pi_bot_rep; void** pi_scores; } ;
typedef TYPE_2__ ivtc_sys_t ;
struct TYPE_8__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_6__ {int ** pp_history; } ;
struct TYPE_9__ {TYPE_1__ context; TYPE_2__ ivtc; } ;
typedef TYPE_4__ filter_sys_t ;


 void* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int*,int*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3( filter_t *VAR_4 )
{
    FUNC_2( VAR_4 != ((void*)0) );

    filter_sys_t *VAR_5 = VAR_4->p_sys;
    ivtc_sys_t *VAR_6 = &VAR_5->ivtc;
    picture_t *VAR_7 = VAR_5->context.pp_history[1];
    picture_t *VAR_8 = VAR_5->context.pp_history[2];

    FUNC_2( VAR_8 != ((void*)0) );
    FUNC_2( VAR_7 != ((void*)0) );



    VAR_6->pi_scores[VAR_2] = FUNC_0( VAR_8,
                                                                  VAR_8 );
    VAR_6->pi_scores[VAR_1] = FUNC_0( VAR_8,
                                                                  VAR_7 );
    VAR_6->pi_scores[VAR_0] = FUNC_0( VAR_7,
                                                                  VAR_8 );

    int VAR_9 = 0, VAR_10 = 0;
    int VAR_11 = FUNC_1(VAR_7, VAR_8, &VAR_9, &VAR_10);
    VAR_6->pi_motion[VAR_3] = VAR_11;
    VAR_6->pi_top_rep[VAR_3] = (VAR_9 <= 2*VAR_10/3);
    VAR_6->pi_bot_rep[VAR_3] = (VAR_10 <= 2*VAR_9/3);
}
