
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct hxxx_helper_nal {TYPE_1__* b; } ;
struct TYPE_5__ {size_t i_buffer; int p_buffer; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (size_t) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ,size_t) ;
 int FUNC_2 (int ,int const*,size_t) ;

__attribute__((used)) static int
FUNC_3(struct hxxx_helper_nal *VAR_2,
               const uint8_t *VAR_3, size_t VAR_4)
{
    if (!VAR_2->b)
    {
        VAR_2->b = FUNC_0(VAR_4);
        if (!VAR_2->b)
            return VAR_0;
    }
    else if (VAR_2->b != ((void*)0) && VAR_4 > VAR_2->b->i_buffer)
    {
        block_t *VAR_5 = FUNC_1(VAR_2->b, 0, VAR_4);
        if (VAR_5 == ((void*)0))
            return VAR_0;
        VAR_2->b = VAR_5;
    }
    FUNC_2(VAR_2->b->p_buffer, VAR_3, VAR_4);
    VAR_2->b->i_buffer = VAR_4;
    return VAR_1;
}
