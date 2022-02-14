
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,char**) ;
 int FUNC_3 (char*) ;

void FUNC_4( FILE *VAR_0 ) {
    char VAR_1[9];

    FUNC_2( VAR_0, "%8s", &VAR_1 );
    if( FUNC_0( VAR_1 ) ) {
        FUNC_3( " failed\n" );
        FUNC_1( -1 );
    }
}
