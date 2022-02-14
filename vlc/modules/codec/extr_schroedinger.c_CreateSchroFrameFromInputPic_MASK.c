
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct enc_picture_free_t {TYPE_5__* p_enc; TYPE_4__* p_pic; } ;
struct TYPE_17__ {TYPE_2__* p; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_18__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ encoder_t ;
struct TYPE_19__ {TYPE_1__* p_format; } ;
typedef TYPE_6__ encoder_sys_t ;
struct TYPE_20__ {int format; TYPE_3__* components; int height; int width; } ;
struct TYPE_16__ {int stride; int length; int h_shift; int v_shift; int data; int height; int width; } ;
struct TYPE_15__ {int i_pitch; int i_lines; int p_pixels; int i_visible_lines; int i_visible_pitch; } ;
struct TYPE_14__ {scalar_t__ chroma_format; int height; int width; } ;
typedef TYPE_7__ SchroFrame ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 struct enc_picture_free_t* FUNC_2 (int) ;
 TYPE_7__* FUNC_3 () ;
 int FUNC_4 (TYPE_7__*,int ,struct enc_picture_free_t*) ;
 int FUNC_5 (TYPE_7__*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static SchroFrame *FUNC_7( encoder_t *VAR_6, picture_t *VAR_7 )
{
    encoder_sys_t *VAR_8 = VAR_6->p_sys;
    SchroFrame *VAR_9 = FUNC_3();
    struct enc_picture_free_t *VAR_10;

    if( !VAR_9 )
        return ((void*)0);

    if( !VAR_7 )
        return ((void*)0);

    VAR_9->format = VAR_3;
    if( VAR_8->p_format->chroma_format == VAR_1 )
    {
        VAR_9->format = VAR_4;
    }
    else if( VAR_8->p_format->chroma_format == VAR_2 )
    {
        VAR_9->format = VAR_5;
    }

    VAR_9->width = VAR_8->p_format->width;
    VAR_9->height = VAR_8->p_format->height;

    VAR_10 = FUNC_2( sizeof( *VAR_10 ) );
    if( FUNC_6( VAR_10 == ((void*)0) ) ) {
        FUNC_5( VAR_9 );
        return ((void*)0);
    }

    VAR_10->p_pic = VAR_7;
    VAR_10->p_enc = VAR_6;
    FUNC_4( VAR_9, VAR_0, VAR_10 );

    for( int VAR_11=0; VAR_11<3; VAR_11++ )
    {
        VAR_9->components[VAR_11].width = VAR_7->p[VAR_11].i_visible_pitch;
        VAR_9->components[VAR_11].stride = VAR_7->p[VAR_11].i_pitch;
        VAR_9->components[VAR_11].height = VAR_7->p[VAR_11].i_visible_lines;
        VAR_9->components[VAR_11].length =
            VAR_7->p[VAR_11].i_pitch * VAR_7->p[VAR_11].i_lines;
        VAR_9->components[VAR_11].data = VAR_7->p[VAR_11].p_pixels;

        if( VAR_11!=0 )
        {
            VAR_9->components[VAR_11].v_shift =
                FUNC_1( VAR_9->format );
            VAR_9->components[VAR_11].h_shift =
                FUNC_0( VAR_9->format );
        }
    }

    return VAR_9;
}
