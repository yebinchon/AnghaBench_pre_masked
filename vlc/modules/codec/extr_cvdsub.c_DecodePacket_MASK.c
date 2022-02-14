
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int i_entries; int ** palette; } ;
typedef TYPE_1__ video_palette_t ;
struct TYPE_22__ {int i_sar_num; int i_sar_den; TYPE_1__* p_palette; scalar_t__ i_y_offset; scalar_t__ i_x_offset; int i_visible_height; int i_height; int i_visible_width; int i_width; } ;
typedef TYPE_2__ video_format_t ;
struct TYPE_23__ {int b_ephemer; TYPE_4__* p_region; scalar_t__ i_stop; scalar_t__ i_start; } ;
typedef TYPE_3__ subpicture_t ;
struct TYPE_24__ {int i_x; int i_y; } ;
typedef TYPE_4__ subpicture_region_t ;
struct TYPE_25__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_26__ {int i_x_start; int i_y_start; int ** p_palette; int i_height; int i_width; scalar_t__ i_duration; } ;
typedef TYPE_6__ decoder_sys_t ;
struct TYPE_27__ {scalar_t__ i_pts; } ;
typedef TYPE_7__ block_t ;


 int FUNC_0 (TYPE_5__*,TYPE_7__*,TYPE_4__*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (TYPE_5__*,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_4__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static subpicture_t *FUNC_6( decoder_t *VAR_1, block_t *VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_1->p_sys;
    subpicture_t *VAR_4;
    subpicture_region_t *VAR_5;
    video_format_t VAR_6;
    video_palette_t VAR_7;
    int VAR_8;


    VAR_4 = FUNC_1( VAR_1, ((void*)0) );
    if( !VAR_4 ) return ((void*)0);

    VAR_4->i_start = VAR_2->i_pts;
    VAR_4->i_stop = VAR_2->i_pts + VAR_3->i_duration;
    VAR_4->b_ephemer = 1;


    FUNC_5( &VAR_6, VAR_0 );
    VAR_6.i_sar_num = 1;
    VAR_6.i_sar_den = 1;
    VAR_6.i_width = VAR_6.i_visible_width = VAR_3->i_width;
    VAR_6.i_height = VAR_6.i_visible_height = VAR_3->i_height;
    VAR_6.i_x_offset = VAR_6.i_y_offset = 0;
    VAR_6.p_palette = &VAR_7;
    VAR_6.p_palette->i_entries = 4;
    for( VAR_8 = 0; VAR_8 < VAR_6.p_palette->i_entries; VAR_8++ )
    {
        VAR_6.p_palette->palette[VAR_8][0] = VAR_3->p_palette[VAR_8][0];
        VAR_6.p_palette->palette[VAR_8][1] = VAR_3->p_palette[VAR_8][1];
        VAR_6.p_palette->palette[VAR_8][2] = VAR_3->p_palette[VAR_8][2];
        VAR_6.p_palette->palette[VAR_8][3] = VAR_3->p_palette[VAR_8][3];
    }

    VAR_5 = FUNC_4( &VAR_6 );
    if( !VAR_5 )
    {
        FUNC_2( VAR_1, "cannot allocate SPU region" );
        FUNC_3( VAR_4 );
        return ((void*)0);
    }

    VAR_4->p_region = VAR_5;
    VAR_5->i_x = VAR_3->i_x_start;
    VAR_5->i_x = VAR_5->i_x * 3 / 4;
    VAR_5->i_y = VAR_3->i_y_start;

    FUNC_0( VAR_1, VAR_2, VAR_5 );

    return VAR_4;
}
