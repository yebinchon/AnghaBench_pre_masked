
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int gcry_md_hd_t ;
typedef int buffer ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,int,int,int *) ;
 int FUNC_2 (int ,int *,size_t) ;
 int * FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4( const char *VAR_0, gcry_md_hd_t VAR_1 )
{
    uint8_t VAR_2[4096];
    size_t VAR_3;

    FILE *VAR_4 = FUNC_3( VAR_0, "r" );
    if( !VAR_4 )
        return -1;

    while( ( VAR_3 = FUNC_1( VAR_2, 1, sizeof(VAR_2), VAR_4 ) ) > 0 )
        FUNC_2( VAR_1, VAR_2, VAR_3 );

    FUNC_0( VAR_4 );

    return 0;
}
