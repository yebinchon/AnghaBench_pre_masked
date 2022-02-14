
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_object_t ;
struct vlc_access_private {int * module; } ;
struct TYPE_10__ {char* psz_name; char* psz_url; char* psz_filepath; int b_preparsing; char const* psz_location; int * pf_control; int * out; int * p_input_item; } ;
typedef TYPE_1__ stream_t ;
typedef int input_thread_t ;
typedef int es_out_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int *,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*,char*,char*,int) ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (char const*,char*,int) ;
 char* FUNC_12 (char*,int) ;
 char* FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_15 (int *,int ,int,char*) ;
 struct vlc_access_private* FUNC_16 (TYPE_1__*) ;

__attribute__((used)) static stream_t *FUNC_17(vlc_object_t *VAR_2, input_thread_t *VAR_3,
                            es_out_t *VAR_4, bool VAR_5, const char *VAR_6)
{
    struct vlc_access_private *VAR_7;
    char *VAR_8[VAR_0];
    unsigned VAR_9 = 0;

    if (FUNC_11(VAR_6, "attachment://", 13) == 0)
        return FUNC_0(VAR_2, VAR_3, VAR_6);

    stream_t *VAR_10 = FUNC_15(VAR_2, VAR_1,
                                            sizeof (*VAR_7), "access");
    if (FUNC_14(VAR_10 == ((void*)0)))
        return ((void*)0);

    VAR_10->p_input_item = VAR_3 ? FUNC_4(VAR_3) : ((void*)0);
    VAR_10->out = VAR_4;
    VAR_10->psz_name = ((void*)0);
    VAR_10->psz_url = FUNC_9(VAR_6);
    VAR_10->psz_filepath = ((void*)0);
    VAR_10->b_preparsing = VAR_5;
    VAR_7 = FUNC_16(VAR_10);

    if (FUNC_14(VAR_10->psz_url == ((void*)0)))
        goto error;

    while (VAR_9 < VAR_0)
    {
        char *VAR_11 = VAR_10->psz_url;
        FUNC_6(VAR_10, "creating access: %s", VAR_11);

        const char *VAR_12 = FUNC_13(VAR_11, "://");
        if (VAR_12 == ((void*)0))
            goto error;

        VAR_10->psz_name = FUNC_12(VAR_11, VAR_12 - VAR_11);
        if (FUNC_14(VAR_10->psz_name == ((void*)0)))
            goto error;

        VAR_10->psz_location = VAR_12 + 3;
        VAR_10->psz_filepath = FUNC_3(VAR_10->psz_location);
        if (VAR_10->psz_filepath != ((void*)0))
            FUNC_6(VAR_10, " (path: %s)", VAR_10->psz_filepath);

        VAR_7->module = FUNC_5(VAR_10, "access", VAR_10->psz_name, 1);
        if (VAR_7->module != ((void*)0))
        {
            while (VAR_9 > 0)
                FUNC_2(VAR_8[--VAR_9]);

            FUNC_1(VAR_10->pf_control != ((void*)0));
            return VAR_10;
        }

        if (VAR_10->psz_url == VAR_11)
            goto error;


        FUNC_6(VAR_10, "redirecting to: %s", VAR_10->psz_url);
        VAR_8[VAR_9++] = VAR_11;

        for (unsigned VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
            if (!FUNC_8(VAR_8[VAR_13], VAR_10->psz_url))
            {
                FUNC_7(VAR_10, "redirection loop");
                goto error;
            }

        FUNC_2(VAR_10->psz_filepath);
        FUNC_2(VAR_10->psz_name);
        VAR_10->psz_filepath = VAR_10->psz_name = ((void*)0);
    }

    FUNC_7(VAR_10, "too many redirections");
error:
    while (VAR_9 > 0)
        FUNC_2(VAR_8[--VAR_9]);
    FUNC_2(VAR_10->psz_filepath);
    FUNC_2(VAR_10->psz_name);
    FUNC_10(VAR_10);
    return ((void*)0);
}
