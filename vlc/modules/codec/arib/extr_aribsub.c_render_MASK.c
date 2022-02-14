
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {TYPE_7__* p_sys; } ;
struct TYPE_17__ {scalar_t__ i_start; scalar_t__ i_stop; int b_ephemer; int b_absolute; TYPE_1__ updater; } ;
typedef TYPE_2__ subpicture_t ;
struct TYPE_18__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_19__ {int b_ignore_position_adjustment; scalar_t__ b_ignore_ruby; scalar_t__ b_a_profile; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_20__ {scalar_t__ i_pts; } ;
typedef TYPE_5__ block_t ;
struct TYPE_21__ {int i_fontheight; struct TYPE_21__* p_next; int i_charbottom_adj; int i_charleft_adj; int i_charbottom; int i_charleft; int i_horint; int i_verint; int i_fontwidth; int i_planeheight; int i_planewidth; int i_font_color; int * psz_fontname; int psz_text; } ;
typedef TYPE_6__ arib_text_region_t ;
struct TYPE_22__ {TYPE_6__* p_region; } ;
typedef TYPE_7__ arib_spu_updater_sys_t ;
typedef int arib_parser_t ;
typedef int arib_decoder_t ;
struct TYPE_23__ {int i_fontheight; int p_end; int p_start; struct TYPE_23__* p_next; int i_veradj; int i_horadj; int i_charbottom; int i_charleft; int i_horint; int i_verint; int i_fontwidth; int i_planeheight; int i_planewidth; int i_foreground_color; } ;
typedef TYPE_8__ arib_buf_region_t ;


 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int *,unsigned char const*,size_t,char*,size_t) ;
 TYPE_8__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 unsigned char* FUNC_7 (int *,size_t*) ;
 scalar_t__ FUNC_8 (int,int) ;
 TYPE_2__* FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_3__*,char*,char*) ;
 int FUNC_12 (char*,char*,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,int,int) ;

__attribute__((used)) static subpicture_t *FUNC_15( decoder_t *VAR_0, arib_parser_t *VAR_1,
                             arib_decoder_t *VAR_2, block_t *VAR_3 )
{
    decoder_sys_t *VAR_4 = VAR_0->p_sys;
    subpicture_t *VAR_5 = ((void*)0);
    char *VAR_6 = ((void*)0);

    size_t VAR_7;
    const unsigned char *VAR_8 = FUNC_7( VAR_1, &VAR_7 );
    if( !VAR_8 || !VAR_7 )
        return ((void*)0);

    size_t VAR_9 = VAR_7 * 4;
    VAR_6 = (char*) FUNC_8( VAR_9 + 1, sizeof(*VAR_6) );
    if( VAR_6 == ((void*)0) )
    {
        return ((void*)0);
    }
    if( VAR_4->b_a_profile )
        FUNC_5( VAR_2 );
    else
        FUNC_6( VAR_2 );

    VAR_9 = FUNC_1( VAR_2,
                                          VAR_8,
                                          VAR_7,
                                          VAR_6,
                                          VAR_9 );
    VAR_5 = FUNC_9( VAR_0 );
    if( VAR_5 == ((void*)0) )
    {
        goto decoder_NewSubpictureText_failed;
    }

    VAR_5->i_start = VAR_3->i_pts;
    VAR_5->i_stop = VAR_3->i_pts + FUNC_0(FUNC_3( VAR_2 ));
    VAR_5->b_ephemer = (VAR_5->i_start == VAR_5->i_stop);
    VAR_5->b_absolute = 1;

    arib_spu_updater_sys_t *VAR_10 = VAR_5->updater.p_sys;

    arib_text_region_t *VAR_11 = VAR_10->p_region =
        (arib_text_region_t*) FUNC_8( 1, sizeof(arib_text_region_t) );
    if( VAR_11 == ((void*)0) )
    {
        goto malloc_failed;
    }
    for( const arib_buf_region_t *VAR_12 = FUNC_2( VAR_2 );
         VAR_12; VAR_12 = VAR_12->p_next )
    {
        if( VAR_4->b_ignore_ruby && VAR_12->i_fontheight == 18 )
        {
            continue;
        }

        int VAR_13 = VAR_12->p_end - VAR_12->p_start;
        char *VAR_14 = (char*) FUNC_8( VAR_13 + 1, sizeof(char) );
        if( VAR_14 == ((void*)0) )
        {
            goto malloc_failed;
        }
        FUNC_14(VAR_14, VAR_12->p_start, VAR_13);
        VAR_14[VAR_13] = '\0';




        VAR_11->psz_text = FUNC_13( VAR_14 );
        FUNC_10( VAR_14 );
        VAR_11->psz_fontname = ((void*)0);
        VAR_11->i_font_color = VAR_12->i_foreground_color;
        VAR_11->i_planewidth = VAR_12->i_planewidth;
        VAR_11->i_planeheight = VAR_12->i_planeheight;
        VAR_11->i_fontwidth = VAR_12->i_fontwidth;
        VAR_11->i_fontheight = VAR_12->i_fontheight;
        VAR_11->i_verint = VAR_12->i_verint;
        VAR_11->i_horint = VAR_12->i_horint;
        VAR_11->i_charleft = VAR_12->i_charleft;
        VAR_11->i_charbottom = VAR_12->i_charbottom;
        VAR_11->i_charleft_adj = 0;
        VAR_11->i_charbottom_adj = 0;
        if( !VAR_4->b_ignore_position_adjustment )
        {
            VAR_11->i_charleft_adj = VAR_12->i_horadj;
            VAR_11->i_charbottom_adj = VAR_12->i_veradj;
        }
        VAR_11->p_next = ((void*)0);
        if( VAR_12->p_next != ((void*)0) )
        {
            VAR_11 = VAR_11->p_next =
                (arib_text_region_t*) FUNC_8( 1, sizeof(arib_text_region_t) );
            if( VAR_11 == ((void*)0) )
            {
                goto malloc_failed;
            }
        }
    }

decoder_NewSubpictureText_failed:
malloc_failed:
    FUNC_4( VAR_2 );
    FUNC_10( VAR_6 );

    return VAR_5;
}
