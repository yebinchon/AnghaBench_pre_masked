
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_array_t ;
typedef char sout_stream_t ;
typedef int sout_instance_t ;
typedef char config_chain_t ;


 char* FUNC_0 (char**,char**,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int *,char*,char*,char*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (int *,size_t) ;

sout_stream_t *FUNC_11(sout_instance_t *VAR_0, const char *VAR_1,
                                sout_stream_t *VAR_2, sout_stream_t **VAR_3)
{
    if(!VAR_1 || !*VAR_1)
    {
        if(VAR_3) *VAR_3 = ((void*)0);
        return VAR_2;
    }

    char *VAR_4 = FUNC_5(VAR_1);
    if(!VAR_4)
        return ((void*)0);

    vlc_array_t VAR_5, VAR_6;
    FUNC_9(&VAR_5);
    FUNC_9(&VAR_6);


    while(VAR_4)
    {
        config_chain_t *VAR_7;
        char *VAR_8;
        char *VAR_9 = FUNC_0( &VAR_8, &VAR_7, VAR_4 );
        FUNC_2( VAR_4 );
        VAR_4 = VAR_9;

        FUNC_6(&VAR_5, VAR_7);
        FUNC_6(&VAR_6, VAR_8);
    }

    size_t VAR_10 = FUNC_8(&VAR_6);
    vlc_array_t VAR_11;
    FUNC_9(&VAR_11);
    while(VAR_10--)
    {
        VAR_2 = FUNC_4( VAR_0, FUNC_10(&VAR_6, VAR_10),
            FUNC_10(&VAR_5, VAR_10), VAR_2);

        if(!VAR_2)
            goto error;

        if(VAR_10 == FUNC_8(&VAR_6) - 1 && VAR_3)
            *VAR_3 = VAR_2;

        FUNC_6(&VAR_11, VAR_2);
    }

    FUNC_7(&VAR_6);
    FUNC_7(&VAR_5);
    FUNC_7(&VAR_11);

    return VAR_2;

error:

    VAR_10++;


    int VAR_12 = FUNC_8(&VAR_11);
    while(VAR_12--)
        FUNC_3(FUNC_10(&VAR_11, VAR_12));
    FUNC_7(&VAR_11);



    while(VAR_10--)
    {
        FUNC_2(FUNC_10(&VAR_6, VAR_10));
        FUNC_1(FUNC_10(&VAR_5, VAR_10));
    }
    FUNC_7(&VAR_6);
    FUNC_7(&VAR_5);

    return ((void*)0);
}
