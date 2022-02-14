
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int libvlc_media_player_t ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char*,char const*) ;
 char* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6( libvlc_media_player_t *VAR_0, const char *restrict VAR_1 )
{
    vout_thread_t *VAR_2 = FUNC_0( VAR_0, 0 );
    if (!VAR_2)
        return 0;

    char *VAR_3 = FUNC_4( VAR_2, "sub-source" );
    if( !VAR_3 )
    {
        FUNC_2( "%s not enabled", VAR_1 );
        FUNC_5(VAR_2);
        return 0;
    }


    char *VAR_4 = FUNC_3( VAR_3, VAR_1 );
    FUNC_1( VAR_3 );
    FUNC_5(VAR_2);
    return (VAR_4 != ((void*)0));
}
