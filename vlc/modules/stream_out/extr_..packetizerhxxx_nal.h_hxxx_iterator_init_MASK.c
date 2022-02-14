
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int const* p_head; int const* p_tail; int i_nal_length_size; } ;
typedef TYPE_1__ hxxx_iterator_ctx_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1( hxxx_iterator_ctx_t *VAR_0, const uint8_t *VAR_1, size_t VAR_2,
                                       uint8_t VAR_3 )
{
    VAR_0->p_head = VAR_1;
    VAR_0->p_tail = VAR_1 + VAR_2;
    if( FUNC_0(VAR_3) == 1 && VAR_3 <= 4 )
        VAR_0->i_nal_length_size = VAR_3;
    else
        VAR_0->i_nal_length_size = 0;
}
