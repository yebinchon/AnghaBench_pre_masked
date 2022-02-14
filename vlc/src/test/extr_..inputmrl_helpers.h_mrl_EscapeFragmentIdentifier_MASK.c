
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_memstream {char* ptr; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char*,char const) ;
 scalar_t__ FUNC_1 (struct vlc_memstream*) ;
 scalar_t__ FUNC_2 (struct vlc_memstream*) ;
 int FUNC_3 (struct vlc_memstream*,char*,char const) ;

__attribute__((used)) static inline int
FUNC_4( char** VAR_3, char const* VAR_4 )
{
    struct vlc_memstream VAR_5;
    if( FUNC_2( &VAR_5 ) )
        return VAR_1;

    for( char const* VAR_6 = VAR_4; *VAR_6; ++VAR_6 )
    {
        FUNC_3( &VAR_5,
            ( FUNC_0( "!?", *VAR_6 ) == ((void*)0) &&
              FUNC_0( "abcdefghijklmnopqrstuvwxyz" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "0123456789" "-" "." "_" "~" "!" "$" "&" "'" "(" ")" "*" "+" "," ";" "=" ":" "@" "/" "?", *VAR_6 ) ? "%c" : "%%%02hhx"), *VAR_6 );
    }
    if( FUNC_1( &VAR_5 ) )
        return VAR_1;

    *VAR_3 = VAR_5.ptr;
    return VAR_2;
}
