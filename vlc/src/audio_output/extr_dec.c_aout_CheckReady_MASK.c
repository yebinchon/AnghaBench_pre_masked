
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int audio_output_t ;
struct TYPE_8__ {scalar_t__ i_format; } ;
struct TYPE_6__ {int delay; int clock; int resamp_type; } ;
struct TYPE_7__ {TYPE_4__ mixer_format; TYPE_1__ sync; int * filters; int filters_cfg; TYPE_4__ filter_format; int volume; TYPE_4__ input_format; int restart; } ;
typedef TYPE_2__ aout_owner_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ,int ,TYPE_4__*,TYPE_4__*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11 (audio_output_t *VAR_7)
{
    aout_owner_t *VAR_8 = FUNC_6 (VAR_7);
    int VAR_9 = VAR_2;

    int VAR_10 = FUNC_8(&VAR_8->restart, 0,
                                           VAR_6);
    if (FUNC_10(VAR_10))
    {
        if (VAR_8->mixer_format.i_format)
            FUNC_1 (VAR_7, VAR_8->filters);

        if (VAR_10 & VAR_5)
        {
            FUNC_9 (VAR_7, "restarting output...");
            if (VAR_8->mixer_format.i_format)
                FUNC_4 (VAR_7);
            VAR_8->filter_format = VAR_8->mixer_format = VAR_8->input_format;
            VAR_8->filters_cfg = VAR_3;
            if (FUNC_5 (VAR_7))
                VAR_8->mixer_format.i_format = 0;
            FUNC_7 (VAR_8->volume,
                                   VAR_8->mixer_format.i_format);





            if (VAR_10 == VAR_5)
                VAR_9 = VAR_0;
        }

        FUNC_9 (VAR_7, "restarting filters...");
        VAR_8->sync.resamp_type = VAR_4;

        if (VAR_8->mixer_format.i_format)
        {
            VAR_8->filters = FUNC_2(FUNC_0(VAR_7),
                                                      VAR_8->sync.clock,
                                                      &VAR_8->filter_format,
                                                      &VAR_8->mixer_format,
                                                      &VAR_8->filters_cfg);
            if (VAR_8->filters == ((void*)0))
            {
                FUNC_4 (VAR_7);
                VAR_8->mixer_format.i_format = 0;
            }
            FUNC_3(VAR_8->filters, VAR_8->sync.delay);
        }



    }
    return (VAR_8->mixer_format.i_format) ? VAR_9 : VAR_1;
}
