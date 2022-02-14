
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_fourcc_t ;
struct TYPE_14__ {scalar_t__ i_sar_den; scalar_t__ i_sar_num; int i_visible_height; int i_visible_width; int i_chroma; } ;
typedef TYPE_1__ video_format_t ;
struct TYPE_15__ {TYPE_4__* p_region; int i_original_picture_height; int i_original_picture_width; } ;
typedef TYPE_2__ subpicture_t ;
struct TYPE_16__ {TYPE_1__ format; } ;
typedef TYPE_3__ picture_t ;
typedef int image_handler_t ;
struct TYPE_17__ {TYPE_3__* p_picture; } ;


 TYPE_3__* FUNC_0 (int *,TYPE_3__*,TYPE_1__*,TYPE_1__*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_2__* FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (TYPE_1__*) ;

subpicture_t *FUNC_6( vlc_object_t *VAR_0,
                                         picture_t *VAR_1, vlc_fourcc_t VAR_2 )
{

    video_format_t VAR_3 = VAR_1->format;


    video_format_t VAR_4;
    VAR_4 = VAR_3;
    VAR_4.i_chroma = VAR_2;


    image_handler_t *VAR_5 = FUNC_1( VAR_0 );
    if( !VAR_5 )
        return ((void*)0);

    picture_t *VAR_6 = FUNC_0( VAR_5, VAR_1, &VAR_3, &VAR_4 );

    FUNC_2( VAR_5 );

    if( !VAR_6 )
        return ((void*)0);

    subpicture_t *VAR_7 = FUNC_4( ((void*)0) );
    if( !VAR_7 )
    {
         FUNC_3( VAR_6 );
         return ((void*)0);
    }

    VAR_7->i_original_picture_width = VAR_4.i_visible_width;
    VAR_7->i_original_picture_height = VAR_4.i_visible_height;

    VAR_4.i_sar_num =
    VAR_4.i_sar_den = 0;

    VAR_7->p_region = FUNC_5( &VAR_4 );
    if( VAR_7->p_region )
    {
        FUNC_3( VAR_7->p_region->p_picture );
        VAR_7->p_region->p_picture = VAR_6;
    }
    else
    {
        FUNC_3( VAR_6 );
    }
    return VAR_7;
}
