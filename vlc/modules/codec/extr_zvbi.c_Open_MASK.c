
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_20__ {int i_codec; } ;
struct TYPE_17__ {int i_magazine; int i_page; } ;
struct TYPE_18__ {TYPE_1__ teletext; } ;
struct TYPE_19__ {scalar_t__ i_codec; TYPE_2__ subs; scalar_t__ psz_language; } ;
struct TYPE_21__ {int pf_decode; TYPE_4__ fmt_out; TYPE_3__ fmt_in; TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_22__ {char* i_key; int b_update; int i_wanted_page; void* b_text; void* i_level; void* i_align; void* b_opaque; int i_wanted_subpage; int * p_vbi_dec; int lock; } ;
typedef TYPE_6__ decoder_sys_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_6__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_5__*,char*,int ) ;
 int FUNC_3 (TYPE_5__*,char*) ;
 int FUNC_4 (TYPE_5__*,char*) ;
 int * VAR_18 ;
 int ** VAR_19 ;
 int FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (TYPE_5__*,char*,int ,TYPE_6__*) ;
 void* FUNC_7 (TYPE_5__*,char*) ;
 void* FUNC_8 (TYPE_5__*,char*) ;
 int FUNC_9 (TYPE_5__*,char*,int) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 () ;
 int FUNC_12 (int *,int,int ,TYPE_5__*) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15( vlc_object_t *VAR_20 )
{
    decoder_t *VAR_21 = (decoder_t *) VAR_20;
    decoder_sys_t *VAR_22 = ((void*)0);

    if( VAR_21->fmt_in.i_codec != VAR_13 )
        return VAR_15;

    int VAR_23 = FUNC_8( VAR_21, "vbi-page" );
    if( VAR_23 > 999 )
    {
        FUNC_4( VAR_21, "invalid vbi-page requested");
        VAR_23 = 0;
    }

    VAR_22 = VAR_21->p_sys = FUNC_1( 1, sizeof(decoder_sys_t) );
    if( VAR_22 == ((void*)0) )
        return VAR_16;

    VAR_22->i_key[0] = VAR_22->i_key[1] = VAR_22->i_key[2] = '*' - '0';
    VAR_22->b_update = 0;
    VAR_22->p_vbi_dec = FUNC_11();
    FUNC_14( &VAR_22->lock );

    if( VAR_22->p_vbi_dec == ((void*)0) )
    {
        FUNC_3( VAR_21, "VBI decoder could not be created." );
        FUNC_0( VAR_20 );
        return VAR_16;
    }





    for( int VAR_24 = 0; VAR_19[VAR_24] != ((void*)0); VAR_24++ )
    {
        if( VAR_21->fmt_in.psz_language && !FUNC_5( VAR_21->fmt_in.psz_language, VAR_19[VAR_24] ) )
        {
            FUNC_13( VAR_22->p_vbi_dec, VAR_18[VAR_24]);
            FUNC_2( VAR_21, "overwriting default zvbi region: %d", VAR_18[VAR_24] );
        }
    }

    FUNC_12( VAR_22->p_vbi_dec, VAR_11 | VAR_7 |




                                0 , VAR_1, VAR_21 );


    VAR_22->i_wanted_page = VAR_23;
    FUNC_6( VAR_21, "vbi-page", VAR_3, VAR_22 );


    if( VAR_22->i_wanted_page == 100 && VAR_21->fmt_in.subs.teletext.i_magazine < 9 )
    {
        VAR_22->i_wanted_page = 100 * VAR_21->fmt_in.subs.teletext.i_magazine +
                               FUNC_10( VAR_21->fmt_in.subs.teletext.i_page );
        FUNC_9( VAR_21, "vbi-page", VAR_22->i_wanted_page );
    }
    VAR_22->i_wanted_subpage = VAR_4;

    VAR_22->b_opaque = FUNC_7( VAR_21, "vbi-opaque" );
    FUNC_6( VAR_21, "vbi-opaque", VAR_2, VAR_22 );

    VAR_22->i_align = FUNC_8( VAR_21, "vbi-position" );

    VAR_22->b_text = FUNC_7( VAR_21, "vbi-text" );

    VAR_22->i_level = FUNC_8( VAR_21, "vbi-level" );

    VAR_21->fmt_out.i_codec = VAR_22->b_text ? VAR_14 : VAR_12;

    VAR_21->pf_decode = VAR_0;
    return VAR_17;
}
