
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int* p_data; size_t i_data; int i_mask; } ;
typedef TYPE_1__ bits_buffer_t ;



__attribute__((used)) static inline void FUNC_0( bits_buffer_t *VAR_0,
                               int VAR_1, uint64_t VAR_2 )
{
    while( VAR_1 > 0 )
    {
        VAR_1--;

        if( ( VAR_2 >> VAR_1 )&0x01 )
        {
            VAR_0->p_data[VAR_0->i_data] |= VAR_0->i_mask;
        }
        else
        {
            VAR_0->p_data[VAR_0->i_data] &= ~VAR_0->i_mask;
        }
        VAR_0->i_mask >>= 1;
        if( VAR_0->i_mask == 0 )
        {
            VAR_0->i_data++;
            VAR_0->i_mask = 0x80;
        }
    }
}
