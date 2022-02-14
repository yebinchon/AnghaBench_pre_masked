
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
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,char const**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 char* VAR_0 ;
 int FUNC_9 (char*,char const*) ;

__attribute__((used)) static void FUNC_10(const char** VAR_1, int VAR_2)
{
    libvlc_instance_t *VAR_3;
    libvlc_media_t *VAR_4;
    libvlc_media_player_t *VAR_5;
    const char * VAR_6 = VAR_0;

    FUNC_9 ("Testing play and pause of %s\n", VAR_6);

    VAR_3 = FUNC_6 (VAR_2, VAR_1);
    FUNC_0 (VAR_3 != ((void*)0));

    VAR_4 = FUNC_1 (VAR_3, VAR_6);
    FUNC_0 (VAR_4 != ((void*)0));

    VAR_5 = FUNC_2 (VAR_4);
    FUNC_0 (VAR_5 != ((void*)0));

    FUNC_5 (VAR_4);

    FUNC_8(VAR_5);

    FUNC_4 (VAR_5);
    FUNC_3 (VAR_5);
    FUNC_7 (VAR_3);
}
