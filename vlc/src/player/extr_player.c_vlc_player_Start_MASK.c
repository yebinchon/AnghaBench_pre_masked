
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int started; TYPE_3__* input; scalar_t__ start_paused; int media; scalar_t__ next_media; } ;
typedef TYPE_1__ vlc_player_t ;
struct TYPE_11__ {int thread; int started; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_3__* FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;

int
FUNC_9(vlc_player_t *VAR_5)
{
    FUNC_4(VAR_5);

    FUNC_3(VAR_5);

    if (VAR_5->started)
        return VAR_3;

    if (!FUNC_5(VAR_5))
    {
        if (VAR_5->next_media)
        {
            VAR_5->started = 1;
            return VAR_3;
        }
        else
            return VAR_1;
    }

    if (!VAR_5->media)
        return VAR_1;

    if (!VAR_5->input)
    {

        VAR_5->input = FUNC_6(VAR_5, VAR_5->media);

        if (!VAR_5->input)
            return VAR_2;
    }
    FUNC_0(!VAR_5->input->started);

    if (VAR_5->start_paused)
    {
        FUNC_1(VAR_5->input->thread, "start-paused", VAR_4);
        FUNC_2(VAR_5->input->thread, "start-paused", 1);
    }

    int VAR_6 = FUNC_7(VAR_5->input);
    if (VAR_6 == VAR_3)
    {
        VAR_5->started = 1;
        FUNC_8(VAR_5, VAR_0);
    }
    return VAR_6;
}
