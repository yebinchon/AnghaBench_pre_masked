
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_8__ {scalar_t__ i_length; } ;
typedef TYPE_1__ mp4mux_sample_t ;
struct TYPE_9__ {scalar_t__ i_start_time; scalar_t__ i_duration; void* i_start_offset; } ;
typedef TYPE_2__ mp4mux_edit_t ;
struct TYPE_10__ {scalar_t__ i_first_dts; scalar_t__ i_last_pts; scalar_t__ i_last_dts; int tinfo; } ;
typedef TYPE_3__ mp4_stream_t ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(mp4_stream_t *VAR_1, vlc_tick_t VAR_2,
                              bool VAR_3)
{
    const mp4mux_edit_t *VAR_4 = FUNC_2(VAR_1->tinfo);


    if(VAR_4 != ((void*)0) && VAR_3)
        return 1;

    const mp4mux_sample_t *VAR_5 = FUNC_3(VAR_1->tinfo);
    if(VAR_5 == ((void*)0))
        return 1;

    mp4mux_edit_t VAR_6;

    if(VAR_4 == ((void*)0))
    {
        VAR_6.i_start_time = 0;
        VAR_6.i_start_offset = FUNC_0(0, VAR_1->i_first_dts - VAR_2);
    }
    else
    {
        VAR_6.i_start_time = FUNC_0(0, VAR_4->i_start_time + VAR_4->i_duration);
        VAR_6.i_start_offset = 0;
    }

    if(VAR_3)
    {
        VAR_6.i_duration = 0;
    }
    else
    {
        if(VAR_1->i_last_pts != VAR_0)
            VAR_6.i_duration = VAR_1->i_last_pts - VAR_1->i_first_dts;
        else
            VAR_6.i_duration = VAR_1->i_last_dts - VAR_1->i_first_dts;

        VAR_6.i_duration += VAR_5->i_length;
    }

    return FUNC_1(VAR_1->tinfo, &VAR_6);
}
