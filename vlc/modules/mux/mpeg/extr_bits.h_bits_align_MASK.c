
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_mask; size_t i_data; size_t i_size; int* p_data; } ;
typedef TYPE_1__ bits_buffer_t ;



__attribute__((used)) static inline void FUNC_0( bits_buffer_t *VAR_0 )
{
    if( VAR_0->i_mask != 0x80 && VAR_0->i_data < VAR_0->i_size )
    {
        VAR_0->i_mask = 0x80;
        VAR_0->i_data++;
        VAR_0->p_data[VAR_0->i_data] = 0x00;
    }
}
