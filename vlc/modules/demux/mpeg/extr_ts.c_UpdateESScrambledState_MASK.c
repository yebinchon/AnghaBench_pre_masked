
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* p_extraes; scalar_t__ id; struct TYPE_3__* p_next; } ;
typedef TYPE_1__ ts_es_t ;
typedef int es_out_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_1( es_out_t *VAR_1, const ts_es_t *VAR_2, bool VAR_3 )
{
    for( ; VAR_2; VAR_2 = VAR_2->p_next )
    {
        if( VAR_2->id )
            FUNC_0( VAR_1, VAR_0,
                            VAR_2->id, VAR_3 );
        FUNC_1( VAR_1, VAR_2->p_extraes, VAR_3 );
    }
}
