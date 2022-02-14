
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int audio_output_t ;
struct TYPE_3__ {int buffers_played; int buffers_lost; } ;
typedef TYPE_1__ aout_owner_t ;


 TYPE_1__* FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;

void FUNC_2(audio_output_t *VAR_1, unsigned *restrict VAR_2,
                           unsigned *restrict VAR_3)
{
    aout_owner_t *VAR_4 = FUNC_0 (VAR_1);

    *VAR_2 = FUNC_1(&VAR_4->buffers_lost, 0,
                                     VAR_0);
    *VAR_3 = FUNC_1(&VAR_4->buffers_played, 0,
                                       VAR_0);
}
