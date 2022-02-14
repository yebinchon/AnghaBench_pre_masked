
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char***,int (*) (char const*),int (*) (char const**,char const**)) ;
 int * FUNC_2 (char const*) ;

int FUNC_3( const char *VAR_0, char ***VAR_1,
                  int (*VAR_2)( const char * ),
                  int (*VAR_3)( const char **, const char ** ) )
{
    DIR *VAR_4 = FUNC_2 (VAR_0);
    int VAR_5 = -1;

    if (VAR_4 != ((void*)0))
    {
        VAR_5 = FUNC_1 (VAR_4, VAR_1, VAR_2, VAR_3);
        FUNC_0 (VAR_4);
    }
    return VAR_5;
}
