
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_t ;
typedef int libvlc_media_player_t ;
typedef int libvlc_instance_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,char const*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int,char const**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 char* VAR_0 ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(const char** VAR_1, int VAR_2)
{
    const char * VAR_3 = VAR_0;

    FUNC_10 ("Testing set_media\n");

    libvlc_instance_t *VAR_4 = FUNC_7 (VAR_2, VAR_1);
    FUNC_0 (VAR_4 != ((void*)0));

    libvlc_media_t *VAR_5 = FUNC_1 (VAR_4, VAR_3);
    FUNC_0 (VAR_5 != ((void*)0));

    libvlc_media_player_t *VAR_6 = FUNC_2 (VAR_4);
    FUNC_0 (VAR_6 != ((void*)0));

    FUNC_4 (VAR_6, VAR_5);

    FUNC_6 (VAR_5);

    FUNC_9(VAR_6);

    FUNC_5 (VAR_6);
    FUNC_3 (VAR_6);
    FUNC_8 (VAR_4);
}
