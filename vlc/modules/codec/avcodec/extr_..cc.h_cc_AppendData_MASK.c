
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int i_608channels; int i_708channels; int* p_data; int i_data; } ;
typedef TYPE_1__ cc_data_t ;



__attribute__((used)) static inline void FUNC_0( cc_data_t *VAR_0, uint8_t VAR_1, const uint8_t VAR_2[2] )
{
    uint8_t VAR_3 = VAR_1 & 0x03;
    if( VAR_3 == 0 || VAR_3 == 1 )
        VAR_0->i_608channels |= (3 << (2 * VAR_3));
    else
        VAR_0->i_708channels |= 1;

    VAR_0->p_data[VAR_0->i_data++] = VAR_1;
    VAR_0->p_data[VAR_0->i_data++] = VAR_2[0];
    VAR_0->p_data[VAR_0->i_data++] = VAR_2[1];
}
