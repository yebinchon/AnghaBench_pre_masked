
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int i_physical_channels; } ;
struct TYPE_9__ {TYPE_1__ audio; } ;
struct TYPE_10__ {TYPE_2__ fmt_in; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_11__ {int i_nb_samples; scalar_t__ p_buffer; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0( filter_t * VAR_1, block_t * VAR_2, block_t * VAR_3 ) {
    float *VAR_4 = (float *)VAR_3->p_buffer;
    const float *VAR_5 = (const float *)VAR_2->p_buffer;
    for( int VAR_6 = VAR_2->i_nb_samples; VAR_6--; )
    {
        *VAR_4++ = VAR_5[2] + VAR_5[0] / 4 + VAR_5[1] / 4;

        VAR_5 += 3;

        if( VAR_1->fmt_in.audio.i_physical_channels & VAR_0 ) VAR_5++;
    }
}
