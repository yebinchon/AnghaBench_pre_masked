
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int decoder_t ;
struct TYPE_6__ {int* p_buffer; int i_buffer; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__**) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_2(decoder_t *VAR_1, block_t **VAR_2)
{
    block_t *VAR_3 = *VAR_2;


    VAR_3 = *VAR_2 = FUNC_1(VAR_3, 4, VAR_3->i_buffer);
    if (VAR_3 == ((void*)0))
        return VAR_0;
    VAR_3->p_buffer[0] = 0x00;
    VAR_3->p_buffer[1] = 0x00;
    VAR_3->p_buffer[2] = 0x01;
    VAR_3->p_buffer[3] = 0x0d;

    return FUNC_0(VAR_1, VAR_2);
}
