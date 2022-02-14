
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_t ;
typedef int libvlc_media_list_t ;
typedef int libvlc_media_list_player_t ;
typedef int libvlc_instance_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int,char const**) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 char* VAR_0 ;
 int FUNC_12 (char*,char const*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(const char** VAR_1, int VAR_2)
{
    libvlc_instance_t *VAR_3;
    libvlc_media_t *VAR_4;
    libvlc_media_list_t *VAR_5;
    libvlc_media_list_player_t *VAR_6;

    const char * VAR_7 = VAR_0;

    FUNC_12 ("Testing play_item_at_index of %s using the media list.\n", VAR_7);

    VAR_3 = FUNC_9 (VAR_2, VAR_1);
    FUNC_0 (VAR_3 != ((void*)0));

    VAR_4 = FUNC_7 (VAR_3, VAR_7);
    FUNC_0(VAR_4);

    VAR_5 = FUNC_2 (VAR_3);
    FUNC_0 (VAR_5 != ((void*)0));

    VAR_6 = FUNC_3 (VAR_3);
    FUNC_0(VAR_6);

    for (unsigned VAR_8 = 0; VAR_8 < 5; VAR_8++)
        FUNC_1( VAR_5, VAR_4 );

    FUNC_6( VAR_6, VAR_5 );
    FUNC_4( VAR_6, 0 );

    FUNC_13 (VAR_6);

    FUNC_11 (VAR_6);

    FUNC_8 (VAR_4);
    FUNC_5 (VAR_6);
    FUNC_10 (VAR_3);
}
