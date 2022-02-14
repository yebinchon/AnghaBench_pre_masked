
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_33__ {int i_entries; scalar_t__** palette; } ;
typedef TYPE_4__ video_palette_t ;
struct TYPE_34__ {int i_sar_num; int i_sar_den; int i_height; int i_visible_height; scalar_t__ i_y_offset; scalar_t__ i_x_offset; scalar_t__ i_visible_width; scalar_t__ i_width; TYPE_4__* p_palette; } ;
typedef TYPE_5__ video_format_t ;
typedef int uint8_t ;
struct TYPE_35__ {int b_ephemer; int b_subtitle; TYPE_7__* p_region; int i_original_picture_height; int i_original_picture_width; int i_start; int b_absolute; } ;
typedef TYPE_6__ subpicture_t ;
struct TYPE_36__ {struct TYPE_36__* p_next; int i_align; scalar_t__ i_y; scalar_t__ i_x; int p_text; TYPE_1__* p_picture; } ;
typedef TYPE_7__ subpicture_region_t ;
struct TYPE_37__ {int i_id; scalar_t__ i_y; scalar_t__ i_x; } ;
typedef TYPE_8__ dvbsub_regiondef_t ;
struct TYPE_38__ {int i_id; int i_height; int i_clut; int i_depth; int i_object_defs; scalar_t__ i_width; TYPE_10__* p_object_defs; int * p_pixbuf; struct TYPE_38__* p_next; } ;
typedef TYPE_9__ dvbsub_region_t ;
struct TYPE_25__ {int i_type; scalar_t__ i_y; scalar_t__ i_x; int psz_text; } ;
typedef TYPE_10__ dvbsub_objectdef_t ;
struct TYPE_26__ {scalar_t__ T; scalar_t__ Cr; scalar_t__ Cb; scalar_t__ Y; } ;
typedef TYPE_11__ dvbsub_color_t ;
struct TYPE_27__ {int i_id; TYPE_11__* c_8b; TYPE_11__* c_4b; TYPE_11__* c_2b; struct TYPE_27__* p_next; } ;
typedef TYPE_12__ dvbsub_clut_t ;
struct TYPE_28__ {TYPE_14__* p_sys; } ;
typedef TYPE_13__ decoder_t ;
struct TYPE_31__ {scalar_t__ i_y; scalar_t__ i_x; scalar_t__ b_windowed; int i_height; int i_width; } ;
struct TYPE_29__ {int i_spu_x; int i_spu_y; int i_spu_position; TYPE_12__* p_cluts; TYPE_9__* p_regions; TYPE_3__* p_page; TYPE_2__ display; int i_pts; int b_absolute; } ;
typedef TYPE_14__ decoder_sys_t ;
struct TYPE_32__ {int i_region_defs; TYPE_8__* p_region_defs; } ;
struct TYPE_30__ {int Y_PITCH; int * Y_PIXELS; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (TYPE_13__*,int *) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (TYPE_13__*,char*,int,...) ;
 int FUNC_3 (TYPE_13__*,char*) ;
 TYPE_7__* FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,int ) ;

__attribute__((used)) static subpicture_t *FUNC_8( decoder_t *VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_2->p_sys;
    subpicture_t *VAR_4;
    subpicture_region_t **VAR_5;
    int VAR_6, VAR_7;
    int VAR_8;
    int VAR_9;


    VAR_4 = FUNC_0( VAR_2, ((void*)0) );
    if( !VAR_4 )
        return ((void*)0);

    VAR_4->b_absolute = VAR_3->b_absolute;

    VAR_4->i_start = VAR_3->i_pts;

    VAR_4->b_ephemer = 1;


    VAR_4->b_subtitle = 1;


    VAR_8 = VAR_3->i_spu_x;
    VAR_9 = VAR_3->i_spu_y;

    VAR_4->i_original_picture_width = VAR_3->display.i_width;
    VAR_4->i_original_picture_height = VAR_3->display.i_height;

    if( VAR_3->display.b_windowed )
    {
        VAR_8 += VAR_3->display.i_x;
        VAR_9 += VAR_3->display.i_y;
    }

    VAR_5 = &VAR_4->p_region;







    for( VAR_6 = 0; VAR_3->p_page && ( VAR_6 < VAR_3->p_page->i_region_defs ); VAR_6++ )
    {
        dvbsub_region_t *VAR_10;
        dvbsub_regiondef_t *VAR_11;
        dvbsub_clut_t *VAR_12;
        dvbsub_color_t *VAR_13;
        subpicture_region_t *VAR_14;
        uint8_t *VAR_15, *VAR_16;
        video_format_t VAR_17;
        video_palette_t VAR_18;
        int VAR_19;

        VAR_11 = &VAR_3->p_page->p_region_defs[VAR_6];


        for( VAR_10 = VAR_3->p_regions; VAR_10 != ((void*)0);
             VAR_10 = VAR_10->p_next )
        {
            if( VAR_11->i_id == VAR_10->i_id ) break;
        }
        if( !VAR_10 )
        {
            FUNC_2( VAR_2, "region %i not found", VAR_11->i_id );
            continue;
        }


        for( VAR_12 = VAR_3->p_cluts; VAR_12 != ((void*)0); VAR_12 = VAR_12->p_next )
        {
            if( VAR_10->i_clut == VAR_12->i_id ) break;
        }
        if( !VAR_12 )
        {
            FUNC_2( VAR_2, "clut %i not found", VAR_10->i_clut );
            continue;
        }





        FUNC_7( &VAR_17, VAR_1 );
        VAR_17.i_sar_num = 0;
        VAR_17.i_sar_den = 1;
        VAR_17.i_width = VAR_17.i_visible_width = VAR_10->i_width;
        VAR_17.i_height = VAR_17.i_visible_height = VAR_10->i_height;
        VAR_17.i_x_offset = VAR_17.i_y_offset = 0;
        VAR_17.p_palette = &VAR_18;
        VAR_17.p_palette->i_entries = ( VAR_10->i_depth == 1 ) ? 4 :
            ( ( VAR_10->i_depth == 2 ) ? 16 : 256 );
        VAR_13 = ( VAR_10->i_depth == 1 ) ? VAR_12->c_2b :
            ( ( VAR_10->i_depth == 2 ) ? VAR_12->c_4b : VAR_12->c_8b );
        for( VAR_7 = 0; VAR_7 < VAR_17.p_palette->i_entries; VAR_7++ )
        {
            VAR_17.p_palette->palette[VAR_7][0] = VAR_13[VAR_7].Y;
            VAR_17.p_palette->palette[VAR_7][1] = VAR_13[VAR_7].Cb;
            VAR_17.p_palette->palette[VAR_7][2] = VAR_13[VAR_7].Cr;
            VAR_17.p_palette->palette[VAR_7][3] = 0xff - VAR_13[VAR_7].T;
        }

        VAR_14 = FUNC_4( &VAR_17 );
        VAR_17.p_palette = ((void*)0);
        FUNC_6( &VAR_17 );
        if( !VAR_14 )
        {
            FUNC_3( VAR_2, "cannot allocate SPU region" );
            continue;
        }
        VAR_14->i_x = VAR_8 + VAR_11->i_x;
        VAR_14->i_y = VAR_9 + VAR_11->i_y;
        VAR_14->i_align = VAR_3->i_spu_position;
        *VAR_5 = VAR_14;
        VAR_5 = &VAR_14->p_next;

        VAR_15 = VAR_10->p_pixbuf;
        VAR_16 = VAR_14->p_picture->Y_PIXELS;
        VAR_19 = VAR_14->p_picture->Y_PITCH;


        for( VAR_7 = 0; VAR_7 < VAR_10->i_height; VAR_7++ )
        {
            FUNC_1( VAR_16, VAR_15, VAR_10->i_width );
            VAR_15 += VAR_10->i_width;
            VAR_16 += VAR_19;
        }



        for( VAR_7 = 0; VAR_7 < VAR_10->i_object_defs; VAR_7++ )
        {
            dvbsub_objectdef_t *VAR_20 = &VAR_10->p_object_defs[VAR_7];

            if( ( VAR_20->i_type != 1 ) || !VAR_20->psz_text )
                continue;


            FUNC_7( &VAR_17, VAR_0 );
            VAR_17.i_sar_num = 1;
            VAR_17.i_sar_den = 1;
            VAR_17.i_width = VAR_17.i_visible_width = VAR_10->i_width;
            VAR_17.i_height = VAR_17.i_visible_height = VAR_10->i_height;
            VAR_17.i_x_offset = VAR_17.i_y_offset = 0;
            VAR_14 = FUNC_4( &VAR_17 );
            FUNC_6( &VAR_17 );

            VAR_14->p_text = FUNC_5( VAR_20->psz_text );
            VAR_14->i_x = VAR_8 + VAR_11->i_x + VAR_20->i_x;
            VAR_14->i_y = VAR_9 + VAR_11->i_y + VAR_20->i_y;
            VAR_14->i_align = VAR_3->i_spu_position;
            *VAR_5 = VAR_14;
            VAR_5 = &VAR_14->p_next;
        }
    }

    return VAR_4;
}
