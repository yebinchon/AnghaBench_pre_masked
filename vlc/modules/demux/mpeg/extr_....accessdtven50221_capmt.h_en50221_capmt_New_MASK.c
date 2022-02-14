
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int * p_es; scalar_t__ i_es_count; int * p_program_descriptors; scalar_t__ i_program_descriptors; int i_program_number; int i_version; } ;
typedef TYPE_1__ en50221_capmt_info_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static inline en50221_capmt_info_t * FUNC_2( uint8_t VAR_0, uint16_t VAR_1 )
{
    en50221_capmt_info_t *VAR_2 = FUNC_1( sizeof(*VAR_2) );
    if( FUNC_0(VAR_2) )
    {
        VAR_2->i_version = VAR_0;
        VAR_2->i_program_number = VAR_1;
        VAR_2->i_program_descriptors = 0;
        VAR_2->p_program_descriptors = ((void*)0);
        VAR_2->i_es_count = 0;
        VAR_2->p_es = ((void*)0);
    }
    return VAR_2;
}
