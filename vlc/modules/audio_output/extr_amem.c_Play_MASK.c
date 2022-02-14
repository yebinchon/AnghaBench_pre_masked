
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_7__ {int i_nb_samples; int p_buffer; } ;
typedef TYPE_1__ block_t ;
struct TYPE_8__ {TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_9__ {int lock; int opaque; int (* play ) (int ,int ,int ,int ) ;} ;
typedef TYPE_3__ aout_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(audio_output_t *VAR_0, block_t *VAR_1, vlc_tick_t VAR_2)
{
    aout_sys_t *VAR_3 = VAR_0->sys;

    FUNC_2(&VAR_3->lock);
    VAR_3->play(VAR_3->opaque, VAR_1->p_buffer, VAR_1->i_nb_samples, VAR_2);
    FUNC_3(&VAR_3->lock);
    FUNC_0 (VAR_1);
}
