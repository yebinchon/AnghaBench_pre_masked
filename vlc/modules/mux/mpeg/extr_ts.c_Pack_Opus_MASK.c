
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int quot; int rem; } ;
typedef TYPE_1__ lldiv_t ;
struct TYPE_9__ {int* p_buffer; int i_buffer; } ;
typedef TYPE_2__ block_t ;


 TYPE_2__* FUNC_0 (TYPE_2__*,int,int ) ;
 TYPE_1__ FUNC_1 (int ,int) ;
 int FUNC_2 (int*,int,int) ;

__attribute__((used)) static block_t *FUNC_3(block_t *VAR_0)
{
    lldiv_t VAR_1 = FUNC_1(VAR_0->i_buffer, 255);
    VAR_0 = FUNC_0(VAR_0, 2 + VAR_1.quot + 1, VAR_0->i_buffer);
    if (VAR_0) {
        VAR_0->p_buffer[0] = 0x7f;
        VAR_0->p_buffer[1] = 0xe0;
        FUNC_2(&VAR_0->p_buffer[2], 0xff, VAR_1.quot);
        VAR_0->p_buffer[2+VAR_1.quot] = VAR_1.rem;
    }

    return VAR_0;
}
