
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_9__ ;
typedef struct TYPE_42__ TYPE_8__ ;
typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_23__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_18__ ;
typedef struct TYPE_32__ TYPE_17__ ;
typedef struct TYPE_31__ TYPE_16__ ;
typedef struct TYPE_30__ TYPE_15__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef size_t uint8_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct heif_private_t {int i_image_duration; int p_root; } ;
struct TYPE_39__ {int min_luminance; int max_luminance; void* white_point; void* primaries; } ;
struct TYPE_37__ {int MaxFALL; int MaxCLL; } ;
struct TYPE_27__ {int i_frame_rate; int i_frame_rate_base; TYPE_5__ mastering; TYPE_3__ lighting; int color_range; int space; int transfer; int primaries; int orientation; int i_sar_den; int i_sar_num; int i_visible_height; int i_visible_width; } ;
struct TYPE_31__ {int i_extra; TYPE_12__ video; int i_codec; void* p_extra; } ;
typedef TYPE_16__ es_format_t ;
struct TYPE_32__ {scalar_t__ p_sys; } ;
typedef TYPE_17__ demux_t ;
struct TYPE_43__ {int i_blob; int p_blob; } ;
struct TYPE_42__ {size_t i_item_id; size_t i_association_count; TYPE_7__* p_assocs; } ;
struct TYPE_41__ {scalar_t__ i_property_index; } ;
struct TYPE_40__ {int i_luminanceMin; int i_luminanceMax; int white_point; int primaries; } ;
struct TYPE_38__ {int i_maxFALL; int i_maxCLL; } ;
struct TYPE_34__ {int i_full_range; int i_matrix_idx; int i_transfer_function_idx; int i_primary_idx; } ;
struct TYPE_36__ {TYPE_1__ nclc; } ;
struct TYPE_35__ {size_t i_entry_count; TYPE_8__* p_entries; } ;
struct TYPE_30__ {TYPE_6__* p_SmDm; TYPE_4__* p_CoLL; TYPE_2__* p_colr; TYPE_14__* p_irot; TYPE_13__* p_pasp; TYPE_11__* p_ispe; TYPE_10__* p_av1C; TYPE_9__* p_binary; } ;
struct TYPE_33__ {int i_type; TYPE_15__ data; } ;
struct TYPE_29__ {int i_ccw_degrees; } ;
struct TYPE_28__ {int i_vertical_spacing; int i_horizontal_spacing; } ;
struct TYPE_26__ {int i_height; int i_width; } ;
struct TYPE_25__ {int i_av1C; int p_av1C; } ;
typedef TYPE_18__ MP4_Box_t ;
 TYPE_23__* FUNC_0 (TYPE_18__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_18__* FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (void*,int ,int) ;

__attribute__((used)) static int FUNC_7( demux_t *VAR_12, uint32_t VAR_13,
                                 es_format_t *VAR_14, const MP4_Box_t **VAR_15 )
{
    struct heif_private_t *VAR_16 = (void *) VAR_12->p_sys;

    const MP4_Box_t *VAR_17 = FUNC_1( VAR_16->p_root, "meta/iprp/ipma" );
    if( !VAR_17 )
        return VAR_10;


    for( uint32_t VAR_18=0; VAR_18<FUNC_0(VAR_17)->i_entry_count; VAR_18++ )
    {
        if( FUNC_0(VAR_17)->p_entries[VAR_18].i_item_id != VAR_13 )
            continue;

        for( uint8_t VAR_19=0; VAR_19<FUNC_0(VAR_17)->p_entries[VAR_18].i_association_count; VAR_19++ )
        {
            if( !FUNC_0(VAR_17)->p_entries[VAR_18].p_assocs[VAR_19].i_property_index )
                continue;

            const MP4_Box_t *VAR_20 = FUNC_1( VAR_16->p_root, "meta/iprp/ipco/[%u]",
                FUNC_0(VAR_17)->p_entries[VAR_18].p_assocs[VAR_19].i_property_index - 1 );
            if( !VAR_20 )
                continue;

            switch( VAR_20->i_type )
            {
                case 133:
                case 136:
                    if( !VAR_14->p_extra && VAR_20->data.p_binary &&
                       ((VAR_14->i_codec == VAR_8 && VAR_20->i_type == 133) ||
                        (VAR_14->i_codec == VAR_7 && VAR_20->i_type == 136) ))
                    {
                        VAR_14->p_extra = FUNC_5( VAR_20->data.p_binary->i_blob );
                        if( VAR_14->p_extra )
                        {
                            VAR_14->i_extra = VAR_20->data.p_binary->i_blob;
                            FUNC_6( VAR_14->p_extra, VAR_20->data.p_binary->p_blob, VAR_14->i_extra );
                        }
                    }
                    break;
                case 137:
                    if( VAR_14->i_codec == VAR_6 && !VAR_14->i_extra &&
                        VAR_20->data.p_av1C->i_av1C >= 4 )
                    {
                        VAR_14->p_extra = FUNC_5( VAR_20->data.p_av1C->i_av1C );
                        if( VAR_14->p_extra )
                        {
                            VAR_14->i_extra = VAR_20->data.p_av1C->i_av1C ;
                            FUNC_6( VAR_14->p_extra, VAR_20->data.p_av1C->p_av1C, VAR_14->i_extra );
                        }
                    }
                    break;
                case 130:
                    if( VAR_14->i_codec == VAR_9 )
                        *VAR_15 = VAR_20;
                    break;
                case 131:
                    VAR_14->video.i_visible_width = VAR_20->data.p_ispe->i_width;
                    VAR_14->video.i_visible_height = VAR_20->data.p_ispe->i_height;
                    break;
                case 128:
                    if( VAR_20->data.p_pasp->i_horizontal_spacing &&
                        VAR_20->data.p_pasp->i_vertical_spacing )
                    {
                        VAR_14->video.i_sar_num = VAR_20->data.p_pasp->i_horizontal_spacing;
                        VAR_14->video.i_sar_den = VAR_20->data.p_pasp->i_vertical_spacing;
                    }
                    break;
                case 132:
                    switch( VAR_20->data.p_irot->i_ccw_degrees % 360 )
                    {
                        default:
                        case 0: VAR_14->video.orientation = VAR_2 ; break;
                        case 90: VAR_14->video.orientation = VAR_5; break;
                        case 180: VAR_14->video.orientation = VAR_3 ; break;
                        case 270: VAR_14->video.orientation = VAR_4 ; break;
                    }
                    break;
                case 134:
                    VAR_14->video.primaries = FUNC_2(
                                            VAR_20->data.p_colr->nclc.i_primary_idx );
                    VAR_14->video.transfer = FUNC_4(
                                            VAR_20->data.p_colr->nclc.i_transfer_function_idx );
                    VAR_14->video.space = FUNC_3(
                                        VAR_20->data.p_colr->nclc.i_matrix_idx );
                    VAR_14->video.color_range = VAR_20->data.p_colr->nclc.i_full_range ?
                                VAR_0 : VAR_1;
                    break;
                case 135:
                    VAR_14->video.lighting.MaxCLL = VAR_20->data.p_CoLL->i_maxCLL;
                    VAR_14->video.lighting.MaxFALL = VAR_20->data.p_CoLL->i_maxFALL;
                    break;
                case 129:
                    FUNC_6( VAR_14->video.mastering.primaries,
                            VAR_20->data.p_SmDm->primaries, sizeof(uint16_t) * 6 );
                    FUNC_6( VAR_14->video.mastering.white_point,
                            VAR_20->data.p_SmDm->white_point, sizeof(uint16_t) * 2 );
                    VAR_14->video.mastering.max_luminance = VAR_20->data.p_SmDm->i_luminanceMax;
                    VAR_14->video.mastering.min_luminance = VAR_20->data.p_SmDm->i_luminanceMin;
                    break;
            }
        }
    }

    VAR_14->video.i_frame_rate = 1000;
    VAR_14->video.i_frame_rate_base = VAR_16->i_image_duration / 1000;

    return VAR_11;
}
