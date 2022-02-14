
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* vlc_tick_t ;
struct TYPE_14__ {size_t i_nb_samples; void* i_length; void* i_dts; void* i_pts; int i_buffer; int p_buffer; } ;
typedef TYPE_2__ block_t ;
struct TYPE_15__ {size_t i_bytes_per_frame; size_t i_frame_length; int i_rate; } ;
typedef TYPE_3__ audio_sample_format_t ;
struct TYPE_16__ {int (* play ) (TYPE_4__*,TYPE_2__*,void* const) ;} ;
typedef TYPE_4__ audio_output_t ;
struct TYPE_13__ {int rate; int clock; } ;
struct TYPE_17__ {TYPE_1__ sync; TYPE_3__ mixer_format; } ;
typedef TYPE_5__ aout_owner_t ;


 TYPE_5__* FUNC_0 (TYPE_4__*) ;
 TYPE_2__* FUNC_1 (size_t) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*,char*,size_t) ;
 size_t FUNC_4 (void*,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*,void* const) ;
 scalar_t__ FUNC_6 (int ) ;
 void* FUNC_7 (int ,void* const,void*,int ) ;
 void* FUNC_8 () ;

__attribute__((used)) static void FUNC_9 (audio_output_t *VAR_0, vlc_tick_t VAR_1, vlc_tick_t VAR_2)
{
    aout_owner_t *VAR_3 = FUNC_0 (VAR_0);
    const audio_sample_format_t *VAR_4 = &VAR_3->mixer_format;
    size_t VAR_5 = FUNC_4(VAR_1, VAR_4->i_rate);

    block_t *VAR_6 = FUNC_1 (VAR_5 * VAR_4->i_bytes_per_frame
                                  / VAR_4->i_frame_length);
    if (FUNC_6(VAR_6 == ((void*)0)))
        return;

    FUNC_3 (VAR_0, "inserting %zu zeroes", VAR_5);
    FUNC_2 (VAR_6->p_buffer, 0, VAR_6->i_buffer);
    VAR_6->i_nb_samples = VAR_5;
    VAR_6->i_pts = VAR_2;
    VAR_6->i_dts = VAR_2;
    VAR_6->i_length = VAR_1;

    const vlc_tick_t VAR_7 = FUNC_8();
    const vlc_tick_t VAR_8 =
       FUNC_7(VAR_3->sync.clock, VAR_7, VAR_2,
                                 VAR_3->sync.rate);
    VAR_0->play(VAR_0, VAR_6, VAR_8);
}
