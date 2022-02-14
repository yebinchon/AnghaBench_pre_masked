
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,char*,int*) ;
 int FUNC_2 (char*,...) ;

int FUNC_3( FILE *VAR_0, FILE *VAR_1 ) {
    int VAR_2;

    FUNC_2( "Getting an overlay..." );
    FUNC_0( VAR_0, VAR_1, "GenImage\n" );
    FUNC_1( VAR_1, "%d", &VAR_2 );
    FUNC_2( " done. Overlay is %d\n", VAR_2 );

    return VAR_2;
}
