
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef scalar_t__ vlc_iconv_t ;
struct TYPE_13__ {char* psz_encoding; } ;
struct TYPE_14__ {int i_codec; TYPE_2__ subs; } ;
struct TYPE_12__ {scalar_t__ i_codec; } ;
struct TYPE_15__ {TYPE_3__ fmt_in; TYPE_1__ fmt_out; int pf_decode; TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_16__ {int i_align; scalar_t__ iconv_handle; int b_autodetect_utf8; } ;
typedef TYPE_5__ decoder_sys_t ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 (int,int) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 int FUNC_3 (TYPE_4__*,char*,char const*,int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 (TYPE_4__*,char*) ;
 char* FUNC_8 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_9 (char*,char const*) ;
 char* FUNC_10 (char*,char*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12( vlc_object_t *VAR_5 )
{
    decoder_t *VAR_6 = (decoder_t*)VAR_5;
    decoder_sys_t *VAR_7;

    switch( VAR_6->fmt_in.i_codec )
    {
        case 128:
        case 129:
            break;
        default:
            return VAR_1;
    }


    VAR_6->p_sys = VAR_7 = FUNC_0( 1, sizeof( *VAR_7 ) );
    if( VAR_7 == ((void*)0) )
        return VAR_2;

    VAR_6->pf_decode = VAR_0;
    VAR_6->fmt_out.i_codec = 0;


    VAR_7->i_align = -1;
    VAR_7->iconv_handle = (vlc_iconv_t)-1;
    VAR_7->b_autodetect_utf8 = 0;

    const char *VAR_8;
    char *VAR_9 = ((void*)0);


    if( VAR_6->fmt_in.i_codec == 129 )
        VAR_8 = "UTF-8";
    else
    if( VAR_6->fmt_in.subs.psz_encoding && *VAR_6->fmt_in.subs.psz_encoding )
    {
        VAR_8 = VAR_6->fmt_in.subs.psz_encoding;
        FUNC_2 (VAR_6, "trying demuxer-specified character encoding: %s",
                 VAR_8);
    }
    else
    {

        if ((VAR_9 = FUNC_8 (VAR_6, "subsdec-encoding")) != ((void*)0))
        {
            FUNC_2 (VAR_6, "trying configured character encoding: %s", VAR_9);
            if (!FUNC_5 (VAR_9, "system"))
            {
                FUNC_1 (VAR_9);
                VAR_9 = ((void*)0);
                VAR_8 = "";

            }
            else
                VAR_8 = VAR_9;
        }
        else

        {
            VAR_8 = FUNC_10("GetACP", "CP1252");
            FUNC_2 (VAR_6, "trying default character encoding: %s", VAR_8);
        }


        if (FUNC_6 (VAR_6, "subsdec-autodetect-utf8"))
        {
            FUNC_2 (VAR_6, "using automatic UTF-8 detection");
            VAR_7->b_autodetect_utf8 = 1;
        }
    }

    if (FUNC_4 (VAR_8, "UTF-8") && FUNC_4 (VAR_8, "utf8"))
    {
        VAR_7->iconv_handle = FUNC_9 ("UTF-8", VAR_8);
        if (VAR_7->iconv_handle == (vlc_iconv_t)(-1))
            FUNC_3 (VAR_6, "cannot convert from %s: %s", VAR_8,
                     FUNC_11(VAR_4));
    }
    FUNC_1 (VAR_9);

    VAR_7->i_align = FUNC_7( VAR_6, "subsdec-align" );

    return VAR_3;
}
