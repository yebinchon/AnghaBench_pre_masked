
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int filter_t ;
struct TYPE_4__ {int i_nb_samples; scalar_t__ p_buffer; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( filter_t * VAR_0, block_t * VAR_1, block_t * VAR_2 ) {
    FUNC_0(VAR_0);
    float *VAR_3 = (float *)VAR_2->p_buffer;
    const float *VAR_4 = (const float *)VAR_1->p_buffer;
    for( int VAR_5 = VAR_1->i_nb_samples; VAR_5--; )
    {
        *VAR_3++ = VAR_4[2] + VAR_4[3] + 0.5f * VAR_4[0];
        *VAR_3++ = VAR_4[2] + VAR_4[3] + 0.5f * VAR_4[1];
        VAR_4 += 4;
    }
}
