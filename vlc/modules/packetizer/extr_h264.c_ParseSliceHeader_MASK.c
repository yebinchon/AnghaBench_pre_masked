
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int i_pic_parameter_set_id; } ;
typedef TYPE_1__ h264_slice_t ;
typedef int h264_sequence_parameter_set_t ;
typedef int h264_picture_parameter_set_t ;
struct TYPE_10__ {int * p_sys; } ;
typedef TYPE_2__ decoder_t ;
typedef int decoder_sys_t ;
struct TYPE_11__ {size_t i_buffer; int * p_buffer; } ;
typedef TYPE_3__ block_t ;


 int FUNC_0 (TYPE_2__*,int const*,int const*) ;
 int FUNC_1 (int ,int *,int const**,int const**) ;
 int FUNC_2 (int const*,size_t,int (*) (int ,int *,int const**,int const**),int *,TYPE_1__*) ;
 int FUNC_3 (int const**,size_t*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5( decoder_t *VAR_0, const block_t *VAR_1, h264_slice_t *VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_0->p_sys;

    const uint8_t *VAR_4 = VAR_1->p_buffer;
    size_t VAR_5 = VAR_1->i_buffer;

    if( !FUNC_3( &VAR_4, &VAR_5 ) || VAR_5 < 2 )
        return 0;

    if( !FUNC_2( VAR_4, VAR_5, FUNC_1, VAR_3, VAR_2 ) )
        return 0;

    const h264_sequence_parameter_set_t *VAR_6;
    const h264_picture_parameter_set_t *VAR_7;
    FUNC_1( VAR_2->i_pic_parameter_set_id, VAR_3, &VAR_6, &VAR_7 );
    if( FUNC_4( !VAR_6 || !VAR_7) )
        return 0;

    FUNC_0( VAR_0, VAR_6, VAR_7 );

    return 1;
}
