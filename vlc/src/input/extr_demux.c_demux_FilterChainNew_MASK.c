
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int demux_t ;
typedef int config_chain_t ;


 char* FUNC_0 (char**,int **,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;

demux_t *FUNC_5( demux_t *VAR_0, const char *VAR_1 )
{
    if( !VAR_1 || !*VAR_1 )
        return ((void*)0);

    char *VAR_2 = FUNC_4(VAR_1);
    if(!VAR_2)
        return ((void*)0);


    while(VAR_2)
    {
        config_chain_t *VAR_3;
        char *VAR_4;
        char *VAR_5 = FUNC_0( &VAR_4, &VAR_3, VAR_2 );
        FUNC_3( VAR_2 );
        VAR_2 = VAR_5;

        demux_t *VAR_6 = FUNC_2(VAR_0, VAR_4);
        if (VAR_6 != ((void*)0))
            VAR_0 = VAR_6;

        FUNC_3(VAR_4);
        FUNC_1(VAR_3);
    }

    return VAR_0;
}
