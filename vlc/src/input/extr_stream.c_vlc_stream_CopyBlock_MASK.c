
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_4__ {size_t i_buffer; size_t p_buffer; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (void*,size_t,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(block_t **restrict VAR_0,
                                    void *VAR_1, size_t VAR_2)
{
    block_t *VAR_3 = *VAR_0;

    if (VAR_3 == ((void*)0))
        return -1;

    if (VAR_2 > VAR_3->i_buffer)
        VAR_2 = VAR_3->i_buffer;

    if (VAR_1 != ((void*)0))
        FUNC_2(VAR_1, VAR_3->p_buffer, VAR_2);

    VAR_3->p_buffer += VAR_2;
    VAR_3->i_buffer -= VAR_2;

    if (VAR_3->i_buffer == 0)
    {
        FUNC_0(VAR_3);
        *VAR_0 = ((void*)0);
    }

    return FUNC_1(VAR_2 > 0) ? (ssize_t)VAR_2 : -1;
}
