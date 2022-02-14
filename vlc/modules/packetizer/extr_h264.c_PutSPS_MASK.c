
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {size_t i_id; } ;
typedef TYPE_2__ h264_sequence_parameter_set_t ;
struct TYPE_17__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_18__ {TYPE_1__* sps; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_19__ {size_t i_buffer; int * p_buffer; } ;
typedef TYPE_5__ block_t ;
struct TYPE_15__ {int p_sps; } ;


 int FUNC_0 (TYPE_4__*,size_t,TYPE_5__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_2__* FUNC_2 (int const*,size_t,int) ;
 int FUNC_3 (int const**,size_t*) ;
 int FUNC_4 (TYPE_3__*,char*,size_t) ;
 int FUNC_5 (TYPE_3__*,char*) ;

__attribute__((used)) static void FUNC_6( decoder_t *VAR_0, block_t *VAR_1 )
{
    decoder_sys_t *VAR_2 = VAR_0->p_sys;

    const uint8_t *VAR_3 = VAR_1->p_buffer;
    size_t VAR_4 = VAR_1->i_buffer;

    if( !FUNC_3( &VAR_3, &VAR_4 ) )
    {
        FUNC_1( VAR_1 );
        return;
    }

    h264_sequence_parameter_set_t *VAR_5 = FUNC_2( VAR_3, VAR_4, 1 );
    if( !VAR_5 )
    {
        FUNC_5( VAR_0, "invalid SPS" );
        FUNC_1( VAR_1 );
        return;
    }


    if( !VAR_2->sps[VAR_5->i_id].p_sps )
        FUNC_4( VAR_0, "found NAL_SPS (sps_id=%d)", VAR_5->i_id );

    FUNC_0( VAR_2, VAR_5->i_id, VAR_1, VAR_5 );
}
