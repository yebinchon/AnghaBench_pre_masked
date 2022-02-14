
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* p_buffer; int i_buffer; } ;
typedef TYPE_1__ block_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int,int ) ;

__attribute__((used)) static inline block_t * FUNC_2(block_t *VAR_0)
{

    VAR_0 = FUNC_0(VAR_0);

    if(VAR_0 &&
       (VAR_0->p_buffer[0] & 0x81) == 0 &&
       (VAR_0->p_buffer[0] & 0x7A) != 0x12)
    {
        VAR_0 = FUNC_1(VAR_0, 2, VAR_0->i_buffer);
        if(VAR_0)
        {
            VAR_0->p_buffer[0] = 0x12;
            VAR_0->p_buffer[1] = 0x00;
        }
    }
    return VAR_0;
}
