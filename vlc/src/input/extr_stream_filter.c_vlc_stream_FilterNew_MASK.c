
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct vlc_stream_filter_private {int * module; } ;
struct TYPE_9__ {int * psz_filepath; struct TYPE_9__* s; int * psz_url; int p_input_item; } ;
typedef TYPE_1__ stream_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,char*,char const*,int) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int ,int ,int,char*) ;
 struct vlc_stream_filter_private* FUNC_8 (TYPE_1__*) ;

stream_t *FUNC_9( stream_t *VAR_1,
                                const char *VAR_2 )
{
    FUNC_0(VAR_1 != ((void*)0));

    struct vlc_stream_filter_private *VAR_3;
    stream_t *VAR_4 = FUNC_7(FUNC_6(VAR_1),
                                       VAR_0, sizeof (*VAR_3),
                                       "stream filter");
    if( VAR_4 == ((void*)0) )
        return ((void*)0);

    VAR_3 = FUNC_8(VAR_4);
    VAR_4->p_input_item = VAR_1->p_input_item;

    if( VAR_1->psz_url != ((void*)0) )
    {
        VAR_4->psz_url = FUNC_3( VAR_1->psz_url );
        if( FUNC_5(VAR_4->psz_url == ((void*)0)) )
            goto error;

        if( VAR_1->psz_filepath != ((void*)0) )
            VAR_4->psz_filepath = FUNC_3( VAR_1->psz_filepath );
    }
    VAR_4->s = VAR_1;


    VAR_3->module = FUNC_2(VAR_4, "stream_filter", VAR_2, 1);
    if (VAR_3->module == ((void*)0))
        goto error;

    return VAR_4;
error:
    FUNC_1(VAR_4->psz_filepath);
    FUNC_4( VAR_4 );
    return ((void*)0);
}
