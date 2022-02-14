
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_7__ {TYPE_1__* p_sample_vide; } ;
struct TYPE_8__ {scalar_t__ i_type; int i_pos; TYPE_2__ data; int i_handler; } ;
struct TYPE_6__ {int i_qt_image_description; scalar_t__* sz_compressorname; int i_depth; int i_height; int i_width; int i_qt_color_table; int i_qt_frame_count; int i_qt_data_size; int i_vertresolution; int i_horizresolution; int i_qt_spatial_quality; int i_qt_temporal_quality; int i_qt_vendor; int i_qt_revision_level; int i_qt_version; scalar_t__** p_qt_image_description; int i_data_reference_index; int * i_reserved1; } ;
typedef TYPE_3__ MP4_Box_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,TYPE_3__*,int*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__** FUNC_6 (int) ;
 int FUNC_7 (scalar_t__**,int*,int) ;
 int FUNC_8 (int *,char*,int ,int ,int ,scalar_t__*) ;
 int FUNC_9 (int *,char*) ;
 int* VAR_6 ;
 int* VAR_7 ;
 scalar_t__ FUNC_10 (int ) ;

int FUNC_11( stream_t *VAR_8, MP4_Box_t *VAR_9 )
{
    VAR_9->i_handler = VAR_1;
    FUNC_3( VAR_2, VAR_3 );

    size_t VAR_10 = VAR_5 + VAR_4;

    for( unsigned VAR_11 = 0; VAR_11 < 6 ; VAR_11++ )
    {
        FUNC_0( VAR_9->data.p_sample_vide->i_reserved1[VAR_11] );
    }

    FUNC_1( VAR_9->data.p_sample_vide->i_data_reference_index );




    if( VAR_5 > 0 )
    {
        VAR_9->data.p_sample_vide->p_qt_image_description = FUNC_6( VAR_5 );
        if( FUNC_10( VAR_9->data.p_sample_vide->p_qt_image_description == ((void*)0) ) )
            FUNC_4( 0 );
        VAR_9->data.p_sample_vide->i_qt_image_description = VAR_5;
        FUNC_7( VAR_9->data.p_sample_vide->p_qt_image_description,
                VAR_7, VAR_5 );
    }
    else
    {
        VAR_9->data.p_sample_vide->i_qt_image_description = 0;
        VAR_9->data.p_sample_vide->p_qt_image_description = ((void*)0);
    }

    FUNC_1( VAR_9->data.p_sample_vide->i_qt_version );
    FUNC_1( VAR_9->data.p_sample_vide->i_qt_revision_level );
    FUNC_2( VAR_9->data.p_sample_vide->i_qt_vendor );

    FUNC_2( VAR_9->data.p_sample_vide->i_qt_temporal_quality );
    FUNC_2( VAR_9->data.p_sample_vide->i_qt_spatial_quality );

    FUNC_1( VAR_9->data.p_sample_vide->i_width );
    FUNC_1( VAR_9->data.p_sample_vide->i_height );

    FUNC_2( VAR_9->data.p_sample_vide->i_horizresolution );
    FUNC_2( VAR_9->data.p_sample_vide->i_vertresolution );

    FUNC_2( VAR_9->data.p_sample_vide->i_qt_data_size );
    FUNC_1( VAR_9->data.p_sample_vide->i_qt_frame_count );

    if ( VAR_5 < 32 )
        FUNC_4( 0 );
    if( VAR_7[0] <= 31 )
    {
        FUNC_7( &VAR_9->data.p_sample_vide->sz_compressorname, &VAR_7[1], VAR_7[0] );
        VAR_9->data.p_sample_vide->sz_compressorname[VAR_7[0]] = 0;
    }
    VAR_7 += 32; VAR_5 -= 32;

    FUNC_1( VAR_9->data.p_sample_vide->i_depth );
    FUNC_1( VAR_9->data.p_sample_vide->i_qt_color_table );

    if( VAR_9->i_type == VAR_0 )
    {
        FUNC_9( VAR_8, "DRM protected streams are not supported." );
        FUNC_4( 0 );
    }

    if( VAR_10 > 78 && VAR_7 - VAR_6 > 78 )
    {
        FUNC_5( VAR_8, VAR_9, VAR_7, VAR_5,
                                      VAR_9->i_pos + VAR_7 - VAR_6 );
    }
    FUNC_4( 1 );
}
