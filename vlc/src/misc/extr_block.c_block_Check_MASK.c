
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* p_start; int i_size; unsigned char* p_buffer; int i_buffer; struct TYPE_3__* p_next; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (block_t *VAR_0)
{
    while (VAR_0 != ((void*)0))
    {
        unsigned char *VAR_1 = VAR_0->p_start;
        unsigned char *VAR_2 = VAR_0->p_start + VAR_0->i_size;
        unsigned char *VAR_3 = VAR_0->p_buffer;
        unsigned char *VAR_4 = VAR_0->p_buffer + VAR_0->i_buffer;

        FUNC_0 (VAR_1 <= VAR_2);
        FUNC_0 (VAR_3 <= VAR_4);
        FUNC_0 (VAR_3 >= VAR_1);
        FUNC_0 (VAR_4 <= VAR_2);

        VAR_0 = VAR_0->p_next;
    }
}
