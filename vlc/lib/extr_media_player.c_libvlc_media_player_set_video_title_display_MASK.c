
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t libvlc_position_t ;
typedef int libvlc_media_player_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int* VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,unsigned int) ;

void FUNC_3( libvlc_media_player_t *VAR_3, libvlc_position_t VAR_4, unsigned VAR_5 )
{
    FUNC_0( VAR_4 >= VAR_1 && VAR_4 <= VAR_0 );

    if ( VAR_4 != VAR_1 )
    {
        FUNC_1( VAR_3, "video-title-show", 1 );
        FUNC_2( VAR_3, "video-title-position", VAR_2[VAR_4] );
        FUNC_2( VAR_3, "video-title-timeout", VAR_5 );
    }
    else
    {
        FUNC_1( VAR_3, "video-title-show", 0 );
    }
}
