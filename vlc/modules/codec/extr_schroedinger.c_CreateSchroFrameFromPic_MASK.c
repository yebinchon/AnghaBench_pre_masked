
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct picture_free_t {TYPE_5__* p_dec; TYPE_4__* p_pic; } ;
struct TYPE_18__ {int b_progressive; int i_nb_fields; int b_top_field_first; TYPE_1__* p; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_19__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_20__ {TYPE_3__* p_format; } ;
typedef TYPE_6__ decoder_sys_t ;
struct TYPE_21__ {int format; TYPE_2__* components; int height; int width; } ;
struct TYPE_17__ {scalar_t__ chroma_format; int top_field_first; int interlaced; int height; int width; } ;
struct TYPE_16__ {int stride; int length; int h_shift; int v_shift; int data; int height; int width; } ;
struct TYPE_15__ {int i_pitch; int i_lines; int p_pixels; int i_visible_lines; int i_visible_pitch; } ;
typedef TYPE_7__ SchroFrame ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 TYPE_4__* FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 struct picture_free_t* FUNC_4 (int) ;
 TYPE_7__* FUNC_5 () ;
 int FUNC_6 (TYPE_7__*,int ,struct picture_free_t*) ;

__attribute__((used)) static SchroFrame *FUNC_7( decoder_t *VAR_6 )
{
    decoder_sys_t *VAR_7 = VAR_6->p_sys;
    SchroFrame *VAR_8 = FUNC_5();
    picture_t *VAR_9 = ((void*)0);
    struct picture_free_t *VAR_10;

    if( !VAR_8 )
        return ((void*)0);

    if( FUNC_3( VAR_6 ) )
        return ((void*)0);
    VAR_9 = FUNC_2( VAR_6 );

    if( !VAR_9 )
        return ((void*)0);

    VAR_8->format = VAR_2;
    if( VAR_7->p_format->chroma_format == VAR_0 )
    {
        VAR_8->format = VAR_3;
    }
    else if( VAR_7->p_format->chroma_format == VAR_1 )
    {
        VAR_8->format = VAR_4;
    }

    VAR_8->width = VAR_7->p_format->width;
    VAR_8->height = VAR_7->p_format->height;

    VAR_10 = FUNC_4( sizeof( *VAR_10 ) );
    VAR_10->p_pic = VAR_9;
    VAR_10->p_dec = VAR_6;
    FUNC_6( VAR_8, VAR_5, VAR_10 );

    for( int VAR_11=0; VAR_11<3; VAR_11++ )
    {
        VAR_8->components[VAR_11].width = VAR_9->p[VAR_11].i_visible_pitch;
        VAR_8->components[VAR_11].stride = VAR_9->p[VAR_11].i_pitch;
        VAR_8->components[VAR_11].height = VAR_9->p[VAR_11].i_visible_lines;
        VAR_8->components[VAR_11].length =
            VAR_9->p[VAR_11].i_pitch * VAR_9->p[VAR_11].i_lines;
        VAR_8->components[VAR_11].data = VAR_9->p[VAR_11].p_pixels;

        if(VAR_11!=0)
        {
            VAR_8->components[VAR_11].v_shift =
                FUNC_1( VAR_8->format );
            VAR_8->components[VAR_11].h_shift =
                FUNC_0( VAR_8->format );
        }
    }

    VAR_9->b_progressive = !VAR_7->p_format->interlaced;
    VAR_9->b_top_field_first = VAR_7->p_format->top_field_first;
    VAR_9->i_nb_fields = 2;

    return VAR_8;
}
