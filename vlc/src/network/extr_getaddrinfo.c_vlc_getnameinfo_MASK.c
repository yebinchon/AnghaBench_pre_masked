
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int psz_servbuf ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct sockaddr const*,int,char*,int,char*,int,int) ;

int FUNC_2( const struct sockaddr *VAR_1, int VAR_2,
                     char *VAR_3, int VAR_4, int *VAR_5, int VAR_6 )
{
    char VAR_7[6], *VAR_8;
    int VAR_9, VAR_10;

    VAR_6 |= VAR_0;
    if( VAR_5 != ((void*)0) )
    {
        VAR_8 = VAR_7;
        VAR_9 = sizeof( VAR_7 );
    }
    else
    {
        VAR_8 = ((void*)0);
        VAR_9 = 0;
    }

    VAR_10 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_8, VAR_9, VAR_6);

    if( VAR_5 != ((void*)0) )
        *VAR_5 = FUNC_0( VAR_8 );

    return VAR_10;
}
