
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int demux_t ;
struct TYPE_5__ {int i_buffer; int p_buffer; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,void*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2 (demux_t *VAR_0, void *VAR_1, block_t *VAR_2)
{
    if (VAR_2->i_buffer < 4)
    {
        FUNC_0 (VAR_2);
        return;
    }

    VAR_2->i_buffer -= 4;
    VAR_2->p_buffer += 4;

    FUNC_1 (VAR_0, VAR_1, VAR_2);
}
