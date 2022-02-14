
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct hxxx_helper {int i_nal_length_size; } ;
struct TYPE_5__ {int i_buffer; int p_buffer; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct hxxx_helper*,int ,int ,int ,int*) ;

__attribute__((used)) static block_t *
FUNC_2(struct hxxx_helper *VAR_1, block_t *VAR_2,
                               bool *VAR_3)
{
    if (VAR_3 != ((void*)0))
    {
        int VAR_4 = FUNC_1(VAR_1, VAR_2->p_buffer,
                                          VAR_2->i_buffer,
                                          VAR_1->i_nal_length_size,
                                          VAR_3);
        if (VAR_4 != VAR_0)
        {
            FUNC_0(VAR_2);
            return ((void*)0);
        }
    }
    return VAR_2;
}
