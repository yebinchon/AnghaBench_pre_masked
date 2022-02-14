
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_8__ {int i_es_count; TYPE_2__* p_es; } ;
typedef TYPE_1__ en50221_capmt_info_t ;
struct TYPE_9__ {int * p_descriptors; scalar_t__ i_descriptors; int i_stream_type; int i_es_pid; } ;
typedef TYPE_2__ en50221_capmt_es_info_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static inline en50221_capmt_es_info_t *FUNC_2( en50221_capmt_info_t *VAR_0,
                                                            uint8_t VAR_1,
                                                            uint16_t VAR_2 )
{
    en50221_capmt_es_info_t *VAR_3 = FUNC_1( VAR_0->p_es, sizeof(en50221_capmt_es_info_t) *
                                                              (VAR_0->i_es_count + 1) );
    if( FUNC_0(VAR_3) )
    {
        VAR_0->p_es = VAR_3;
        en50221_capmt_es_info_t *VAR_4 = &VAR_0->p_es[ VAR_0->i_es_count++ ];
        VAR_4->i_es_pid = VAR_2;
        VAR_4->i_stream_type = VAR_1;
        VAR_4->i_descriptors = 0;
        VAR_4->p_descriptors = ((void*)0);
        return VAR_4;
    }
    return ((void*)0);
}
