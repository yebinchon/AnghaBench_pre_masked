
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t i_buffer; int p_buffer; } ;
typedef TYPE_1__ block_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ,size_t) ;
 int * FUNC_1 (int *,size_t) ;

__attribute__((used)) static void FUNC_2(const block_t *VAR_1,
                           uint8_t **VAR_2, size_t *VAR_3)
{
    if(VAR_0 - VAR_1->i_buffer < *VAR_3 )
        return;

    size_t VAR_4 = VAR_1->i_buffer + *VAR_3;
    uint8_t *VAR_5 = FUNC_1(*VAR_2, VAR_4);
    if(VAR_5)
    {
        FUNC_0(&VAR_5[*VAR_3], VAR_1->p_buffer, VAR_1->i_buffer);
        *VAR_3 = VAR_4;
        *VAR_2 = VAR_5;
    }
}
