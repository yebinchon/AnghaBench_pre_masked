
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_size; int i_mask; scalar_t__* p_data; scalar_t__ i_data; } ;
typedef TYPE_1__ bits_buffer_t ;


 scalar_t__* FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1( bits_buffer_t *VAR_0,
                                  int VAR_1, void *VAR_2 )
{
    VAR_0->i_size = VAR_1;
    VAR_0->i_data = 0;
    VAR_0->i_mask = 0x80;
    VAR_0->p_data = VAR_2;
    if( !VAR_0->p_data )
    {
        if( !( VAR_0->p_data = FUNC_0( VAR_1 ) ) )
            return -1;
    }
    VAR_0->p_data[0] = 0;
    return 0;
}
