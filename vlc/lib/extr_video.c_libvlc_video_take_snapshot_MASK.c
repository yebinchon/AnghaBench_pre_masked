
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int libvlc_media_player_t ;


 int * FUNC_0 (int *,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,unsigned int) ;
 int FUNC_4 (int *,char*,char const*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;

int
FUNC_7( libvlc_media_player_t *VAR_2, unsigned VAR_3,
                            const char *VAR_4,
                            unsigned int VAR_5, unsigned int VAR_6 )
{
    FUNC_1( VAR_4 );

    vout_thread_t *VAR_7 = FUNC_0 (VAR_2, VAR_3);
    if (VAR_7 == ((void*)0))
        return -1;





    FUNC_2( VAR_7, "snapshot-width", VAR_0 );
    FUNC_3( VAR_7, "snapshot-width", VAR_5);
    FUNC_2( VAR_7, "snapshot-height", VAR_0 );
    FUNC_3( VAR_7, "snapshot-height", VAR_6 );
    FUNC_2( VAR_7, "snapshot-path", VAR_1 );
    FUNC_4( VAR_7, "snapshot-path", VAR_4 );
    FUNC_2( VAR_7, "snapshot-format", VAR_1 );
    FUNC_4( VAR_7, "snapshot-format", "png" );
    FUNC_5( VAR_7, "video-snapshot" );
    FUNC_6(VAR_7);
    return 0;
}
