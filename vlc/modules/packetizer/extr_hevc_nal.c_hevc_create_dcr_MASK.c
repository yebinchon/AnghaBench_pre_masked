
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct hevc_dcr_values {int i_numTemporalLayer; int i_chroma_idc; int i_bit_depth_luma_minus8; int i_bit_depth_chroma_minus8; int b_temporalIdNested; int general_configuration; } ;
struct hevc_dcr_params {scalar_t__ i_vps_count; scalar_t__ i_sps_count; scalar_t__ i_pps_count; scalar_t__ i_seipref_count; scalar_t__ i_seisuff_count; int * rgi_seisuff; int * p_seisuff; int * rgi_seipref; int * p_seipref; int * rgi_pps; int * p_pps; int * rgi_sps; int * p_sps; int * rgi_vps; int * p_vps; struct hevc_dcr_values* p_values; } ;
struct TYPE_4__ {int chroma_format_idc; int bit_depth_chroma_minus8; int bit_depth_luma_minus8; } ;
typedef TYPE_1__ hevc_sequence_parameter_set_t ;


 int FUNC_0 (int ,scalar_t__,int *,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int ,int ,struct hevc_dcr_values*) ;
 TYPE_1__* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int* FUNC_6 (size_t) ;
 int FUNC_7 (int*,int ,int) ;

uint8_t * FUNC_8( const struct hevc_dcr_params *VAR_5,
                           uint8_t VAR_6,
                           bool VAR_7, size_t *VAR_8 )
{
    *VAR_8 = 0;

    if( VAR_6 != 1 && VAR_6 != 2 && VAR_6 != 4 )
        return ((void*)0);

    struct hevc_dcr_values VAR_9 =
    {
        .general_configuration = 0,
        .i_numTemporalLayer = 0,
        .i_chroma_idc = 1,
        .i_bit_depth_luma_minus8 = 0,
        .i_bit_depth_chroma_minus8 = 0,
        .b_temporalIdNested = 0,
    };

    if( VAR_5->p_values != ((void*)0) )
    {
        VAR_9 = *VAR_5->p_values;
    }
    else
    {
        if( VAR_5->i_vps_count == 0 || VAR_5->i_sps_count == 0 )
           return ((void*)0);

        FUNC_3( VAR_5->p_vps[0], VAR_5->rgi_vps[0], &VAR_9 );

        hevc_sequence_parameter_set_t *VAR_10 =
                FUNC_4( VAR_5->p_sps[0], VAR_5->rgi_sps[0], 1 );
        if( VAR_10 )
        {
            VAR_9.i_chroma_idc = VAR_10->chroma_format_idc;
            VAR_9.i_bit_depth_chroma_minus8 = VAR_10->bit_depth_chroma_minus8;
            VAR_9.i_bit_depth_luma_minus8 = VAR_10->bit_depth_luma_minus8;
            FUNC_5( VAR_10 );
        }
    }

    size_t VAR_11 = 1+12+2+4+2+2;
    FUNC_1(VAR_5->i_vps_count, VAR_5->rgi_vps);
    FUNC_1(VAR_5->i_sps_count, VAR_5->rgi_sps);
    FUNC_1(VAR_5->i_pps_count, VAR_5->rgi_pps);
    FUNC_1(VAR_5->i_seipref_count, VAR_5->rgi_seipref);
    FUNC_1(VAR_5->i_seisuff_count, VAR_5->rgi_seisuff);

    uint8_t *VAR_12 = FUNC_6( VAR_11 );
    if( VAR_12 == ((void*)0) )
        return ((void*)0);

    *VAR_8 = VAR_11;
    uint8_t *VAR_13 = VAR_12;


    *VAR_13++ = 0x01;
    FUNC_7( VAR_13, VAR_9.general_configuration, 12 ); VAR_13 += 12;

    FUNC_2( VAR_13, 0xF000 ); VAR_13 += 2;

    *VAR_13++ = 0xFC;
    *VAR_13++ = (0xFC | (VAR_9.i_chroma_idc & 0x03));
    *VAR_13++ = (0xF8 | (VAR_9.i_bit_depth_luma_minus8 & 0x07));
    *VAR_13++ = (0xF8 | (VAR_9.i_bit_depth_chroma_minus8 & 0x07));


    FUNC_2( VAR_13, 0x0000); VAR_13 += 2;

    *VAR_13++ = ( ((VAR_9.i_numTemporalLayer & 0x07) << 3) |
              (VAR_9.b_temporalIdNested << 2) |
              (VAR_6 - 1) );

    *VAR_13++ = !!VAR_5->i_vps_count + !!VAR_5->i_sps_count +
           !!VAR_5->i_pps_count + !!VAR_5->i_seipref_count +
           !!VAR_5->i_seisuff_count;


    FUNC_0(VAR_4, VAR_5->i_vps_count,
                      VAR_5->p_vps, VAR_5->rgi_vps);
    FUNC_0(VAR_2, VAR_5->i_sps_count,
                      VAR_5->p_sps, VAR_5->rgi_sps);
    FUNC_0(VAR_0, VAR_5->i_pps_count,
                      VAR_5->p_pps, VAR_5->rgi_pps);
    FUNC_0(VAR_1, VAR_5->i_seipref_count,
                      VAR_5->p_seipref, VAR_5->rgi_seipref);
    FUNC_0(VAR_3, VAR_5->i_seisuff_count,
                      VAR_5->p_seisuff, VAR_5->rgi_seisuff);

    return VAR_12;
}
