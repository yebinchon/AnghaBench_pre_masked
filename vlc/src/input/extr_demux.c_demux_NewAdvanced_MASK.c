
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct vlc_demux_private {int * module; } ;
typedef int stream_t ;
typedef int input_thread_t ;
typedef int es_out_t ;
struct TYPE_8__ {char const* psz_name; char const* psz_location; char* psz_filepath; int b_preparsing; int * p_sys; int * pf_control; int * pf_demux; int * out; int * s; int * psz_url; int * p_input_item; } ;
typedef TYPE_1__ demux_t ;


 char* FUNC_0 (char const*,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 char* FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,char const*,char const*,char*) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const*,char*) ;
 void* FUNC_9 (char const*) ;
 int FUNC_10 (TYPE_1__*) ;
 char* FUNC_11 (int *) ;
 char* FUNC_12 (char*,char) ;
 char* FUNC_13 (int *,char*) ;
 scalar_t__ FUNC_14 (int ) ;
 int * FUNC_15 (TYPE_1__*,char*,char const*,int,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_16 (int *,int ,int,char*) ;
 struct vlc_demux_private* FUNC_17 (TYPE_1__*) ;

demux_t *FUNC_18( vlc_object_t *VAR_2, input_thread_t *VAR_3,
                            const char *VAR_4, const char *VAR_5,
                            stream_t *VAR_6, es_out_t *VAR_7, bool VAR_8 )
{
    struct vlc_demux_private *VAR_9;
    demux_t *VAR_10 = FUNC_16(VAR_2, VAR_0,
                                            sizeof (*VAR_9), "demux");

    if (FUNC_14(VAR_10 == ((void*)0)))
        return ((void*)0);

    FUNC_1(VAR_6 != ((void*)0));
    VAR_9 = FUNC_17(VAR_10);

    if (!FUNC_7( VAR_4, "any" ) || !VAR_4[0])
    {
        char *VAR_11 = FUNC_11( VAR_6 );
        if( VAR_11 != ((void*)0) )
        {
            VAR_4 = FUNC_2( VAR_11 );
            FUNC_3( VAR_11 );
        }
    }

    VAR_10->p_input_item = VAR_3 ? FUNC_5(VAR_3) : ((void*)0);
    VAR_10->psz_name = FUNC_9( VAR_4 );
    if (FUNC_14(VAR_10->psz_name == ((void*)0)))
        goto error;

    VAR_10->psz_url = FUNC_9(VAR_5);
    if (FUNC_14(VAR_10->psz_url == ((void*)0)))
        goto error;

    const char *VAR_12 = FUNC_13(VAR_10->psz_url, "://");
    VAR_10->psz_location = (VAR_12 != ((void*)0)) ? (VAR_12 + 3) : "";
    VAR_10->psz_filepath = FUNC_4(VAR_10->psz_location);

    if( !VAR_8 )
        FUNC_6( VAR_2, "creating demux \"%s\", URL: %s, path: %s",
                 VAR_4, VAR_5, VAR_10->psz_filepath );

    VAR_10->s = VAR_6;
    VAR_10->out = VAR_7;
    VAR_10->b_preparsing = VAR_8;

    VAR_10->pf_demux = ((void*)0);
    VAR_10->pf_control = ((void*)0);
    VAR_10->p_sys = ((void*)0);

    const char *VAR_13 = ((void*)0);

    if( !FUNC_8( VAR_10->psz_name, "any" ) && VAR_10->psz_filepath )
    {
        char const* VAR_14 = FUNC_12( VAR_10->psz_filepath, '.' );

        if( VAR_14 )
            VAR_13 = FUNC_0( VAR_14 + 1, VAR_8 );
    }

    if( VAR_13 == ((void*)0) )
        VAR_13 = VAR_10->psz_name;

    VAR_9->module = FUNC_15(VAR_10, "demux", VAR_13,
        !FUNC_8(VAR_13, VAR_10->psz_name), VAR_1, VAR_10);

    if (VAR_9->module == ((void*)0))
    {
        FUNC_3( VAR_10->psz_filepath );
        goto error;
    }

    return VAR_10;
error:
    FUNC_3( VAR_10->psz_name );
    FUNC_10( VAR_10 );
    return ((void*)0);
}
