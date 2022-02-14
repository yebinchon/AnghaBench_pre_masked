
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef float vlc_tick_t ;
typedef int picture_t ;
struct TYPE_19__ {int video; } ;
struct TYPE_18__ {int video; } ;
struct TYPE_21__ {int p_module; int (* pf_video_blend ) (TYPE_4__*,TYPE_10__*,TYPE_11__*,int ,int ,int ) ;TYPE_2__ fmt_in; TYPE_1__ fmt_out; TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_22__ {int b_done; int i_loops; TYPE_11__* p_blend_image; int i_alpha; TYPE_10__* p_base_image; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_20__ {float i_visible_pitch; float i_visible_lines; } ;
struct TYPE_17__ {TYPE_3__* p; int format; } ;
struct TYPE_16__ {int format; } ;


 float VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_4__*,char*,int *,int) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,char*,float,float) ;
 int FUNC_3 (int *) ;
 float FUNC_4 (float) ;
 int FUNC_5 (TYPE_4__*,TYPE_10__*,TYPE_11__*,int ,int ,int ) ;
 TYPE_4__* FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*) ;
 float FUNC_8 () ;

__attribute__((used)) static picture_t *FUNC_9( filter_t *VAR_2, picture_t *VAR_3 )
{
    filter_sys_t *VAR_4 = VAR_2->p_sys;
    filter_t *VAR_5;

    if( VAR_4->b_done )
        return VAR_3;

    VAR_5 = FUNC_6( VAR_2, sizeof(filter_t) );
    if( !VAR_5 )
    {
        FUNC_3( VAR_3 );
        return ((void*)0);
    }
    VAR_5->fmt_out.video = VAR_4->p_base_image->format;
    VAR_5->fmt_in.video = VAR_4->p_blend_image->format;
    VAR_5->p_module = FUNC_0( VAR_5, "video blending", ((void*)0), 0 );
    if( !VAR_5->p_module )
    {
        FUNC_3( VAR_3 );
        FUNC_7(VAR_5);
        return ((void*)0);
    }

    vlc_tick_t VAR_6 = FUNC_8();
    for( int VAR_7 = 0; VAR_7 < VAR_4->i_loops; ++VAR_7 )
    {
        VAR_5->pf_video_blend( VAR_5,
                                 VAR_4->p_base_image, VAR_4->p_blend_image,
                                 0, 0, VAR_4->i_alpha );
    }
    VAR_6 = FUNC_8() - VAR_6;

    FUNC_2( VAR_2, "Blended %d images in %f sec", VAR_4->i_loops,
              FUNC_4(VAR_6) );
    FUNC_2( VAR_2, "Speed is: %f images/second, %f pixels/second",
              (float) VAR_4->i_loops / VAR_6 * VAR_0,
              (float) VAR_4->i_loops / VAR_6 * VAR_0 *
                  VAR_4->p_blend_image->p[VAR_1].i_visible_pitch *
                  VAR_4->p_blend_image->p[VAR_1].i_visible_lines );

    FUNC_1( VAR_5, VAR_5->p_module );

    FUNC_7(VAR_5);

    VAR_4->b_done = 1;
    return VAR_3;
}
