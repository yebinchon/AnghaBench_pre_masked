
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t i_es_count; struct TYPE_4__* p_es; struct TYPE_4__* p_descriptors; struct TYPE_4__* p_program_descriptors; } ;
typedef TYPE_1__ en50221_capmt_info_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1( en50221_capmt_info_t *VAR_0 )
{
    FUNC_0( VAR_0->p_program_descriptors );
    for( size_t VAR_1=0; VAR_1<VAR_0->i_es_count; VAR_1++ )
        FUNC_0( VAR_0->p_es[VAR_1].p_descriptors );
    FUNC_0( VAR_0->p_es );
    FUNC_0( VAR_0 );
}
