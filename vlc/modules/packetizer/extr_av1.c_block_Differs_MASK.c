
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_buffer; int p_buffer; } ;
typedef TYPE_1__ block_t ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(const block_t *VAR_0, const block_t *VAR_1)
{
    return (VAR_0->i_buffer != VAR_1->i_buffer ||
            FUNC_0(VAR_0->p_buffer, VAR_1->p_buffer, VAR_0->i_buffer));
}
