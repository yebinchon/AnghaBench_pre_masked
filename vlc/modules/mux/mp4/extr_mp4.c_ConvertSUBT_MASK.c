
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_buffer; char* p_buffer; } ;
typedef TYPE_1__ block_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int,int) ;

__attribute__((used)) static block_t *FUNC_1(block_t *VAR_0)
{
    VAR_0 = FUNC_0(VAR_0, 2, VAR_0->i_buffer);
    if( !VAR_0 )
        return ((void*)0);

    if (VAR_0->i_buffer > 2 && VAR_0->p_buffer[VAR_0->i_buffer-1] == '\0')
        VAR_0->i_buffer--;

    VAR_0->p_buffer[0] = ((VAR_0->i_buffer - 2) >> 8)&0xff;
    VAR_0->p_buffer[1] = ((VAR_0->i_buffer - 2) )&0xff;

    return VAR_0;
}
