
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ const* p_head; scalar_t__* p_tail; } ;
typedef TYPE_1__ hxxx_iterator_ctx_t ;


 int FUNC_0 (scalar_t__ const**,size_t*) ;
 void* FUNC_1 (scalar_t__ const*,scalar_t__*) ;

__attribute__((used)) static inline bool FUNC_2( hxxx_iterator_ctx_t *VAR_0, const uint8_t **VAR_1, size_t *VAR_2 )
{
    if( !VAR_0->p_head )
        return 0;

    VAR_0->p_head = FUNC_1( VAR_0->p_head, VAR_0->p_tail );
    if( !VAR_0->p_head )
        return 0;

    const uint8_t *VAR_3 = FUNC_1( VAR_0->p_head + 3, VAR_0->p_tail );
    if( !VAR_3 )
        VAR_3 = VAR_0->p_tail;


    while( VAR_3 > VAR_0->p_head && VAR_3[-1] == 0 )
        VAR_3--;

    *VAR_1 = VAR_0->p_head;
    *VAR_2 = VAR_3 - VAR_0->p_head;
    VAR_0->p_head = VAR_3;

    return FUNC_0( VAR_1, VAR_2 );
}
