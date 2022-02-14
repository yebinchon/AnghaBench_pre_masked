
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int const* p_tail; int const* p_head; } ;
typedef TYPE_1__ AV1_OBU_iterator_ctx_t ;



__attribute__((used)) static inline void FUNC_0(AV1_OBU_iterator_ctx_t *VAR_0,
                                         const uint8_t *VAR_1, size_t VAR_2)
{
    VAR_0->p_head = VAR_1;
    VAR_0->p_tail = VAR_1 + VAR_2;
}
