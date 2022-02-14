
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int snd_pcm_t ;
typedef int snd_pcm_sframes_t ;
struct TYPE_10__ {size_t p_buffer; size_t i_buffer; scalar_t__ i_nb_samples; } ;
typedef TYPE_1__ block_t ;
struct TYPE_11__ {TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_12__ {scalar_t__ chans_to_reorder; int * pcm; int format; int chans_table; } ;
typedef TYPE_3__ aout_sys_t ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (size_t,size_t,scalar_t__,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (TYPE_2__*,char*,int ) ;
 size_t FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,size_t,scalar_t__) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(audio_output_t *VAR_0, block_t *VAR_1, vlc_tick_t VAR_2)
{
    aout_sys_t *VAR_3 = VAR_0->sys;

    if (VAR_3->chans_to_reorder != 0)
        FUNC_1(VAR_1->p_buffer, VAR_1->i_buffer,
                           VAR_3->chans_to_reorder, VAR_3->chans_table, VAR_3->format);

    snd_pcm_t *VAR_4 = VAR_3->pcm;




    while (VAR_1->i_nb_samples > 0)
    {
        snd_pcm_sframes_t VAR_5;

        VAR_5 = FUNC_7 (VAR_4, VAR_1->p_buffer, VAR_1->i_nb_samples);
        if (VAR_5 >= 0)
        {
            size_t VAR_6 = FUNC_5 (VAR_4, VAR_5);
            VAR_1->i_nb_samples -= VAR_5;
            VAR_1->p_buffer += VAR_6;
            VAR_1->i_buffer -= VAR_6;

        }
        else
        {
            int VAR_7 = FUNC_6 (VAR_4, VAR_5, 1);
            if (VAR_7)
            {
                FUNC_3 (VAR_0, "cannot recover playback stream: %s",
                         FUNC_8 (VAR_7));
                FUNC_0 (VAR_0, VAR_4);
                break;
            }
            FUNC_4 (VAR_0, "cannot write samples: %s", FUNC_8 (VAR_5));
        }
    }
    FUNC_2 (VAR_1);
    (void) VAR_2;
}
