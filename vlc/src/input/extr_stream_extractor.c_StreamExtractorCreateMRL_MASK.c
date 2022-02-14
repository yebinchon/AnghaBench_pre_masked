
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_memstream {char* ptr; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char**,char const*) ;
 int FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (struct vlc_memstream*) ;
 scalar_t__ FUNC_4 (struct vlc_memstream*) ;
 int FUNC_5 (struct vlc_memstream*,char*,char*) ;
 int FUNC_6 (struct vlc_memstream*,char) ;
 int FUNC_7 (struct vlc_memstream*,char const*) ;

__attribute__((used)) static char*
FUNC_8( char const* VAR_0, char const* VAR_1 )
{
    struct vlc_memstream VAR_2;
    char* VAR_3;

    if( FUNC_1( &VAR_3, VAR_1 ) )
        return ((void*)0);

    if( FUNC_4( &VAR_2 ) )
    {
        FUNC_0( VAR_3 );
        return ((void*)0);
    }

    FUNC_7( &VAR_2, VAR_0 );

    if( !FUNC_2( VAR_0, "#" ) )
        FUNC_6( &VAR_2, '#' );

    FUNC_5( &VAR_2, "!/%s", VAR_3 );

    FUNC_0( VAR_3 );
    return FUNC_3( &VAR_2 ) ? ((void*)0) : VAR_2.ptr;
}
