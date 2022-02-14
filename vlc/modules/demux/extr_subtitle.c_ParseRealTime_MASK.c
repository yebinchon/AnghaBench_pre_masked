
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int*,...) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int64_t FUNC_3( char *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int *VAR_5 )
{
    if( *VAR_1 == '\0' ) return 0;
    if( FUNC_1( VAR_1, "%d:%d:%d.%d", VAR_2, VAR_3, VAR_4, VAR_5 ) == 4 ||
            FUNC_1( VAR_1, "%d:%d.%d", VAR_3, VAR_4, VAR_5 ) == 3 ||
            FUNC_1( VAR_1, "%d.%d", VAR_4, VAR_5 ) == 2 ||
            FUNC_1( VAR_1, "%d:%d", VAR_3, VAR_4 ) == 2 ||
            FUNC_1( VAR_1, "%d", VAR_4 ) == 1 )
    {
        return FUNC_2((( *VAR_2 * 60 + *VAR_3 ) * 60 ) + *VAR_4 )
               + FUNC_0(*VAR_5 * 10);
    }
    else return VAR_0;
}
