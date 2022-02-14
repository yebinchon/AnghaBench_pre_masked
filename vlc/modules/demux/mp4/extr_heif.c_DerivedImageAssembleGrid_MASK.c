
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_22__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_28__ {int output_width; int output_height; int columns_minus_one; int rows_minus_one; } ;
union heif_derivation_data {TYPE_4__ ImageGrid; } ;
typedef scalar_t__ uint32_t ;
typedef size_t uint16_t ;
struct TYPE_24__ {TYPE_9__* (* BOXDATA ) (int ) ;} ;
struct heif_private_t {TYPE_1__ current; int p_root; } ;
typedef int image_handler_t ;
struct TYPE_26__ {int i_sar_num; int i_width; int i_visible_width; int i_sar_den; int i_height; int i_visible_height; } ;
struct TYPE_29__ {TYPE_2__ video; } ;
typedef TYPE_5__ es_format_t ;
struct TYPE_30__ {scalar_t__ p_sys; } ;
typedef TYPE_6__ demux_t ;
struct TYPE_31__ {int p_buffer; } ;
typedef TYPE_7__ block_t ;
struct TYPE_33__ {int item_type; } ;
struct TYPE_32__ {scalar_t__ i_type; struct TYPE_32__* p_next; struct TYPE_32__* p_first; } ;
struct TYPE_27__ {int i_to_item_id; } ;
struct TYPE_25__ {scalar_t__ i_from_item_id; size_t i_reference_count; TYPE_3__* p_references; } ;
typedef TYPE_8__ MP4_Box_t ;


 TYPE_22__* FUNC_0 (TYPE_8__ const*) ;
 int FUNC_1 (TYPE_6__*,int *,int ,int ,size_t,int,int,int) ;
 TYPE_8__* FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int ,scalar_t__,union heif_derivation_data*) ;
 int FUNC_4 (TYPE_6__*,scalar_t__,TYPE_5__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char,char,char,char) ;
 scalar_t__ VAR_3 ;
 TYPE_7__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_5__*,int ,int ) ;
 int * FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_6__*,char*,size_t,int,...) ;
 int VAR_4 ;
 TYPE_9__* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12( demux_t *VAR_5, uint32_t VAR_6,
                                     es_format_t *VAR_7, block_t **VAR_8 )
{
    struct heif_private_t *VAR_9 = (void *) VAR_5->p_sys;

    const MP4_Box_t *VAR_10 = FUNC_2( VAR_9->p_root, "meta/iref" );
    if(!VAR_10)
        return VAR_2;

    const MP4_Box_t *VAR_11;
    for( VAR_11 = VAR_10->p_first; VAR_11; VAR_11 = VAR_11->p_next )
    {
        if( VAR_11->i_type == FUNC_5('d','i','m','g') &&
            FUNC_0(VAR_11)->i_from_item_id == VAR_6 )
            break;
    }

    if(!VAR_11)
        return VAR_2;

    union heif_derivation_data VAR_12;
    if( FUNC_3( VAR_5,
                            VAR_9->current.BOXDATA(VAR_4)->item_type,
                            VAR_6, &VAR_12 ) != VAR_3 )
        return VAR_2;

    FUNC_10(VAR_5,"%ux%upx image %ux%u tiles composition",
            VAR_12.ImageGrid.output_width,
            VAR_12.ImageGrid.output_height,
            VAR_12.ImageGrid.columns_minus_one + 1,
            VAR_12.ImageGrid.columns_minus_one + 1);

    image_handler_t *VAR_13 = FUNC_8( VAR_5 );
    if( !VAR_13 )
        return VAR_2;

    block_t *VAR_14 = FUNC_6( VAR_12.ImageGrid.output_width *
                                    VAR_12.ImageGrid.output_height * 4 );
    if( !VAR_14 )
        return VAR_2;
    *VAR_8 = VAR_14;

    FUNC_7( VAR_7, VAR_0, VAR_1 );
    VAR_7->video.i_sar_num =
    VAR_7->video.i_width =
    VAR_7->video.i_visible_width = VAR_12.ImageGrid.output_width;
    VAR_7->video.i_sar_den =
    VAR_7->video.i_height =
    VAR_7->video.i_visible_height = VAR_12.ImageGrid.output_height;

    for( uint16_t VAR_15=0; VAR_15<FUNC_0(VAR_11)->i_reference_count; VAR_15++ )
    {
        FUNC_10( VAR_5, "Loading tile %d/%d", VAR_15,
                 (VAR_12.ImageGrid.rows_minus_one + 1) *
                 (VAR_12.ImageGrid.columns_minus_one + 1) );
        FUNC_1( VAR_5, VAR_13,
                       FUNC_0(VAR_11)->p_references[VAR_15].i_to_item_id,
                       VAR_14->p_buffer, VAR_15,
                       VAR_12.ImageGrid.columns_minus_one + 1,
                       VAR_12.ImageGrid.output_width,
                       VAR_12.ImageGrid.output_height );
    }

    FUNC_4( VAR_5, VAR_6, VAR_7, ((void*)0) );

    FUNC_9( VAR_13 );

    return VAR_3;
}
