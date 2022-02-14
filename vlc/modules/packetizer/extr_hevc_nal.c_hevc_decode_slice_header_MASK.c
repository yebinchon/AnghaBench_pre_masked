
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct hxxx_bsfw_ep3b_ctx_s {int dummy; } ;
typedef int pf_get_matchedxps ;
struct TYPE_7__ {int nuh_layer_id; void* temporal_id_plus1; void* nal_type; } ;
typedef TYPE_1__ hevc_slice_segment_header_t ;
typedef int bs_t ;


 int FUNC_0 (int *,int const*,size_t) ;
 int FUNC_1 (int *,int const*,size_t,int *,struct hxxx_bsfw_ep3b_ctx_s*) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 TYPE_1__* FUNC_4 (int,int) ;
 int FUNC_5 (int *,int ,void*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_7 (struct hxxx_bsfw_ep3b_ctx_s*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

hevc_slice_segment_header_t * FUNC_9( const uint8_t *VAR_1, size_t VAR_2, bool VAR_3,
                                                        pf_get_matchedxps VAR_4, void *VAR_5 )
{
    hevc_slice_segment_header_t *VAR_6 = FUNC_4(1, sizeof(hevc_slice_segment_header_t));
    if(FUNC_8(VAR_6))
    {
        bs_t VAR_7;
        struct hxxx_bsfw_ep3b_ctx_s VAR_8;
        if( VAR_3 )
        {
            FUNC_7( &VAR_8 );
            FUNC_1( &VAR_7, VAR_1, VAR_2, &VAR_0, &VAR_8 );
        }
        else FUNC_0( &VAR_7, VAR_1, VAR_2 );
        FUNC_3( &VAR_7, 1 );
        VAR_6->nal_type = FUNC_2( &VAR_7, 6 );
        VAR_6->nuh_layer_id = FUNC_2( &VAR_7, 6 );
        VAR_6->temporal_id_plus1 = FUNC_2( &VAR_7, 3 );
        if( VAR_6->nuh_layer_id > 62 || VAR_6->temporal_id_plus1 == 0 ||
           !FUNC_5( &VAR_7, VAR_4, VAR_5, VAR_6 ) )
        {
            FUNC_6( VAR_6 );
            VAR_6 = ((void*)0);
        }
    }
    return VAR_6;
}
