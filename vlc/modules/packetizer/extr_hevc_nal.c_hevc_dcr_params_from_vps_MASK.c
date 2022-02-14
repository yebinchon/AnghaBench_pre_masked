
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hxxx_bsfw_ep3b_ctx_s {int dummy; } ;
struct hevc_dcr_values {void** general_configuration; int b_temporalIdNested; void* i_numTemporalLayer; } ;
typedef int bs_t ;


 int FUNC_0 (int *,int const*,size_t,int *,struct hxxx_bsfw_ep3b_ctx_s*) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int FUNC_4 (struct hxxx_bsfw_ep3b_ctx_s*) ;

__attribute__((used)) static void FUNC_5( const uint8_t * VAR_1, size_t VAR_2,
                                      struct hevc_dcr_values *VAR_3 )
{
    if( VAR_2 < 19 )
        return;

    bs_t VAR_4;
    struct hxxx_bsfw_ep3b_ctx_s VAR_5;
    FUNC_4( &VAR_5 );
    FUNC_0( &VAR_4, VAR_1, VAR_2, &VAR_0, &VAR_5 );
    FUNC_3( &VAR_4, 16 + 4 + 2 + 6 );
    VAR_3->i_numTemporalLayer = FUNC_1( &VAR_4, 3 ) + 1;
    VAR_3->b_temporalIdNested = FUNC_2( &VAR_4 );


    FUNC_3( &VAR_4, 16 );

    for( unsigned VAR_6=0; VAR_6<12; VAR_6++ )
        VAR_3->general_configuration[VAR_6] = FUNC_1( &VAR_4, 8 );
}
