
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {int i_height; int i_width; } ;
typedef TYPE_3__ video_format_t ;
struct TYPE_25__ {TYPE_1__* p; } ;
typedef TYPE_4__ picture_t ;
typedef int image_handler_t ;
struct TYPE_26__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_27__ {TYPE_2__* p_style; } ;
typedef TYPE_6__ filter_sys_t ;
struct TYPE_23__ {int i_font_size; } ;
struct TYPE_22__ {int i_visible_lines; int i_visible_pitch; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_4__* FUNC_0 (int *,TYPE_4__*,TYPE_3__*,TYPE_3__*) ;
 int * FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (int *,char const*,TYPE_3__*) ;
 int FUNC_4 (TYPE_5__*,char*,char const*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ) ;

__attribute__((used)) static picture_t *FUNC_9( filter_t *VAR_2, const char *VAR_3 )
{
    filter_sys_t *VAR_4 = VAR_2->p_sys;
    video_format_t VAR_5;
    picture_t *VAR_6;
    picture_t *VAR_7 = ((void*)0);
    image_handler_t *VAR_8 = FUNC_1( VAR_2 );

    FUNC_8( &VAR_5, VAR_0 );

    VAR_6 = FUNC_3( VAR_8, VAR_3, &VAR_5 );

    if( !VAR_6 )
    {
        FUNC_4( VAR_2, "Unable to read image %s", VAR_3 );
    }
    else if( VAR_4->p_style->i_font_size > 0 )
    {
        video_format_t VAR_9;
        FUNC_7( &VAR_9, &VAR_5 );

        VAR_9.i_height = VAR_6->p[VAR_1].i_visible_lines;
        VAR_9.i_width = VAR_6->p[VAR_1].i_visible_pitch;
        VAR_5.i_width = VAR_6->p[VAR_1].i_visible_pitch
            *VAR_4->p_style->i_font_size/VAR_6->p[VAR_1].i_visible_lines;
        VAR_5.i_height = VAR_4->p_style->i_font_size;

        VAR_7 = FUNC_0( VAR_8, VAR_6, &VAR_9, &VAR_5 );
        FUNC_5( VAR_6 );
        FUNC_6( &VAR_9 );
        if( !VAR_7 )
        {
            FUNC_4( VAR_2, "Error while converting %s", VAR_3 );
        }
    }
    else
    {
        VAR_7 = VAR_6;
    }

    FUNC_6( &VAR_5 );
    FUNC_2( VAR_8 );

    return VAR_7;
}
