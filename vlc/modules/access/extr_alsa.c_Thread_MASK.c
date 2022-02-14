
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int snd_pcm_t ;
typedef int snd_pcm_state_t ;
typedef int snd_pcm_sframes_t ;
struct TYPE_10__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_11__ {int period_size; int es; int rate; int * pcm; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_12__ {int i_nb_samples; int i_pts; scalar_t__ i_length; void* i_buffer; int p_buffer; } ;
typedef TYPE_3__ block_t ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;


 TYPE_3__* FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_8 (int *,int*) ;
 void* FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int,int ) ;
 int FUNC_18 () ;

__attribute__((used)) static void *FUNC_19 (void *VAR_1)
{
    demux_t *VAR_2 = VAR_1;
    demux_sys_t *VAR_3 = VAR_2->p_sys;
    snd_pcm_t *VAR_4 = VAR_3->pcm;
    size_t VAR_5;
    int VAR_6, VAR_7;

    VAR_6 = FUNC_16 ();
    VAR_5 = FUNC_9 (VAR_4, VAR_3->period_size);
    VAR_7 = FUNC_12 (VAR_4);
    if (VAR_7)
    {
        FUNC_6 (VAR_2, "cannot prepare device: %s", FUNC_14 (VAR_7));
        return ((void*)0);
    }

    for (;;)
    {
        block_t *VAR_8 = FUNC_2 (VAR_5);
        if (FUNC_15(VAR_8 == ((void*)0)))
            break;


        FUNC_1 (VAR_4, VAR_6);


        snd_pcm_sframes_t VAR_9, VAR_10;
        vlc_tick_t VAR_11;

        VAR_9 = FUNC_10 (VAR_4, VAR_8->p_buffer, VAR_3->period_size);
        VAR_11 = FUNC_18 ();
        if (VAR_9 < 0)
        {
            FUNC_3 (VAR_8);
            if (VAR_9 == -VAR_0)
                continue;

            VAR_7 = FUNC_11 (VAR_4, VAR_9, 1);
            if (VAR_7 == 0)
            {
                FUNC_7 (VAR_2, "cannot read samples: %s",
                          FUNC_14 (VAR_9));
                snd_pcm_state_t VAR_12 = FUNC_13 (VAR_4);
                switch (VAR_12)
                {
                case 129:
                    VAR_7 = FUNC_12 (VAR_4);
                    if (VAR_7 < 0)
                    {
                        FUNC_6 (VAR_2, "cannot prepare device: %s",
                                 FUNC_14 (VAR_7));
                        return ((void*)0);
                    }
                    continue;
                case 128:
                    continue;
                default:
                    break;
                }
            }
            FUNC_6 (VAR_2, "cannot recover record stream: %s",
                     FUNC_14 (VAR_7));
            FUNC_0 (VAR_2, VAR_4);
            break;
        }


        if (FUNC_8 (VAR_4, &VAR_10))
            VAR_10 = 0;
        VAR_10 += VAR_9;
        VAR_11 -= FUNC_17(VAR_10, VAR_3->rate);

        VAR_8->i_buffer = FUNC_9 (VAR_4, VAR_9);
        VAR_8->i_nb_samples = VAR_9;
        VAR_8->i_pts = VAR_11;
        VAR_8->i_length = FUNC_17(VAR_9, VAR_3->rate);

        FUNC_5(VAR_2->out, VAR_8->i_pts);
        FUNC_4 (VAR_2->out, VAR_3->es, VAR_8);
    }
    return ((void*)0);
}
