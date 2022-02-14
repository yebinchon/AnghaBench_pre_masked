
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int system_ids_t ;
struct TYPE_3__ {int i_stream_type; int i_es_pid; int i_descriptors; int p_descriptors; } ;
typedef TYPE_1__ en50221_capmt_es_info_t ;


 int FUNC_0 (int ,int ,int const*,int*) ;
 int* FUNC_1 (int*,size_t) ;

__attribute__((used)) static uint8_t *FUNC_2( const en50221_capmt_es_info_t *VAR_0,
                         const system_ids_t *VAR_1,
                         size_t VAR_2, size_t VAR_3,
                         uint8_t VAR_4, uint8_t *VAR_5 )
{
    uint8_t *VAR_6;

    if ( VAR_3 )
        VAR_6 = FUNC_1( VAR_5, VAR_2 + 6 + VAR_3 );
    else
        VAR_6 = FUNC_1( VAR_5, VAR_2 + 5 );

    uint8_t *VAR_7 = &VAR_6[ VAR_2 ];

    VAR_7[0] = VAR_0->i_stream_type;
    VAR_7[1] = VAR_0->i_es_pid >> 8;
    VAR_7[2] = VAR_0->i_es_pid & 0xff;

    if ( VAR_3 )
    {
        VAR_7[3] = (VAR_3 + 1) >> 8;
        VAR_7[4] = (VAR_3 + 1) & 0xff;
        VAR_7[5] = VAR_4;

        FUNC_0( VAR_0->p_descriptors,
                         VAR_0->i_descriptors,
                         VAR_1, &VAR_7[6] );
    }
    else
    {
        VAR_7[3] = 0;
        VAR_7[4] = 0;
    }

    return VAR_6;
}
