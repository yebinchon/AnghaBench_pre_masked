
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int psz_file ;
typedef int FILE ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,unsigned int*) ;
 int FUNC_2 (char*,int,char const*,unsigned int) ;
 int * FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4( const char *VAR_2, unsigned int VAR_3 )
{
    char VAR_4[VAR_1];
    unsigned int VAR_5;

    FUNC_2( VAR_4, sizeof(VAR_4), VAR_2, VAR_3 );

    FILE *VAR_6 = FUNC_3( VAR_4, "rt" );
    if( VAR_6 == ((void*)0) )
        return -1;

    int VAR_7 = FUNC_1( VAR_6, "%u", &VAR_5 );
    FUNC_0( VAR_6 );

    return (VAR_7 == 1 && VAR_5 <= VAR_0) ? (int)VAR_5 : -1;
}
