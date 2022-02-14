
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct hxxx_helper {int i_nal_length_size; } ;
struct TYPE_6__ {int i_buffer; int p_buffer; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct hxxx_helper*) ;
 TYPE_1__* FUNC_3 (struct hxxx_helper*,TYPE_1__*,int*) ;

__attribute__((used)) static block_t *
FUNC_4(struct hxxx_helper *VAR_0, block_t *VAR_1,
                                 bool *VAR_2)
{
    FUNC_0(FUNC_2(VAR_0));
    FUNC_1(VAR_1->p_buffer, VAR_1->i_buffer,
                       VAR_0->i_nal_length_size);
    return FUNC_3(VAR_0, VAR_1, VAR_2);
}
