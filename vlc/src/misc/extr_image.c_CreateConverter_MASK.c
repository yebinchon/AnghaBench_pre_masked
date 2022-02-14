
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_12__ {int i_chroma; } ;
typedef TYPE_1__ video_format_t ;
struct TYPE_14__ {scalar_t__ i_y_offset; scalar_t__ i_x_offset; } ;
struct TYPE_15__ {int i_codec; TYPE_4__ video; } ;
struct TYPE_13__ {int p_module; TYPE_8__ fmt_out; TYPE_8__ fmt_in; } ;
typedef TYPE_2__ filter_t ;
typedef int es_format_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_8__*,int const*) ;
 int FUNC_2 (TYPE_2__*,char*,int *,int) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_4__*,TYPE_1__ const*) ;
 TYPE_2__* FUNC_5 (int *,int,char*) ;

__attribute__((used)) static filter_t *FUNC_6( vlc_object_t *VAR_0, const es_format_t *VAR_1,
                               const video_format_t *VAR_2 )
{
    filter_t *VAR_3;

    VAR_3 = FUNC_5( VAR_0, sizeof(filter_t), "filter" );

    FUNC_1( &VAR_3->fmt_in, VAR_1 );
    FUNC_1( &VAR_3->fmt_out, VAR_1 );
    FUNC_4( &VAR_3->fmt_out.video, VAR_2 );


    VAR_3->fmt_out.video.i_x_offset = 0;
    VAR_3->fmt_out.video.i_y_offset = 0;

    VAR_3->fmt_out.i_codec = VAR_2->i_chroma;
    VAR_3->p_module = FUNC_2( VAR_3, "video converter", ((void*)0), 0 );

    if( !VAR_3->p_module )
    {
        FUNC_3( VAR_3, "no video converter found" );
        FUNC_0( VAR_3 );
        return ((void*)0);
    }

    return VAR_3;
}
