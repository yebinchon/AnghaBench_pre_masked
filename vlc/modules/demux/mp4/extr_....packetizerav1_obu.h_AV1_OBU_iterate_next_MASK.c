
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int* p_tail; int* p_head; } ;
typedef TYPE_1__ AV1_OBU_iterator_ctx_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,size_t const) ;
 int FUNC_3 (int*,size_t const,int const*) ;

__attribute__((used)) static inline bool FUNC_4(AV1_OBU_iterator_ctx_t *VAR_0,
                                        const uint8_t **VAR_1, size_t *VAR_2)
{
    const size_t VAR_3 = VAR_0->p_tail - VAR_0->p_head;
    if(!FUNC_2(VAR_0->p_head, VAR_3))
        return 0;
    if(!FUNC_1(VAR_0->p_head))
    {
        *VAR_1 = VAR_0->p_head;
        *VAR_2 = VAR_3;
        VAR_0->p_head = VAR_0->p_tail;
        return 1;
    }

    uint8_t VAR_4;
    const uint32_t VAR_5 = FUNC_3(VAR_0->p_head, VAR_3, &VAR_4);
    const size_t VAR_6 = VAR_5 + VAR_4 + !!FUNC_0(VAR_0->p_head) + 1;
    if(VAR_4 == 0 || VAR_6 > VAR_3)
        return 0;
    *VAR_2 = VAR_6;
    *VAR_1 = VAR_0->p_head;
    VAR_0->p_head += VAR_6;
    return 1;
}
