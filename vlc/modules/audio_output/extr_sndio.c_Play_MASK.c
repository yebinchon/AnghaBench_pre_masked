
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_7__ {scalar_t__ i_nb_samples; int i_buffer; int p_buffer; } ;
typedef TYPE_1__ block_t ;
struct TYPE_8__ {TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_9__ {int delay; int hdl; } ;
typedef TYPE_3__ aout_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(audio_output_t *VAR_0, block_t *VAR_1, vlc_tick_t VAR_2)
{
    aout_sys_t *VAR_3 = VAR_0->sys;

    FUNC_1 (VAR_3->hdl, VAR_1->p_buffer, VAR_1->i_buffer);
    VAR_3->delay += VAR_1->i_nb_samples;
    FUNC_0 (VAR_1);
    (void) VAR_2;
}
