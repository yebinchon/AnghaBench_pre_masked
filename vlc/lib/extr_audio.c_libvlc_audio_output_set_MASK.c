
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_player_t ;


 int FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,char*,char*) ;

int FUNC_4( libvlc_media_player_t *VAR_0, const char *VAR_1 )
{
    char *VAR_2;

    if( !FUNC_2( VAR_1 )
     || FUNC_0( &VAR_2, "%s,none", VAR_1 ) == -1 )
        return -1;
    FUNC_3( VAR_0, "aout", VAR_2 );
    FUNC_1( VAR_2 );

    return 0;
}
