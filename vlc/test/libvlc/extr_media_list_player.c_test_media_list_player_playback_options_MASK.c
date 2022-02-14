
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int * p_subitems; } ;
typedef TYPE_1__ libvlc_media_t ;
typedef int libvlc_media_list_t ;
typedef TYPE_1__ libvlc_media_list_player_t ;
typedef int libvlc_instance_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_1__* FUNC_10 (int *,char const*) ;
 int FUNC_11 (TYPE_1__*) ;
 int * FUNC_12 (int,char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *,char const*) ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_1__*) ;
 char* VAR_3 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_19 (const char** VAR_4, int VAR_5)
{
    libvlc_instance_t *VAR_6;
    libvlc_media_t *VAR_7;
    libvlc_media_t *VAR_8;
    libvlc_media_t *VAR_9;
    libvlc_media_t *VAR_10;
    libvlc_media_t *VAR_11;
    libvlc_media_list_t *VAR_12;
    libvlc_media_list_t *VAR_13;
    libvlc_media_list_t *VAR_14;
    libvlc_media_list_t *VAR_15;
    libvlc_media_list_t *VAR_16;
    libvlc_media_list_t *VAR_17;
    libvlc_media_list_player_t *VAR_18;

    const char * VAR_19 = VAR_3;

    FUNC_17 ("Testing media player playback options()\n");

    VAR_6 = FUNC_12 (VAR_5, VAR_4);
    FUNC_0 (VAR_6 != ((void*)0));
    VAR_7 = FUNC_10 (VAR_6, VAR_19);
    FUNC_0(VAR_7);

    VAR_8 = FUNC_10 (VAR_6, VAR_19);
    FUNC_0(VAR_8);

    VAR_9 = FUNC_10 (VAR_6, VAR_19);
    FUNC_0(VAR_9);

    VAR_10 = FUNC_10 (VAR_6, VAR_19);
    FUNC_0(VAR_10);

    VAR_11 = FUNC_10 (VAR_6, VAR_19);
    FUNC_0(VAR_11);

    VAR_12 = FUNC_2 (VAR_6);
    FUNC_0 (VAR_12 != ((void*)0));

    VAR_13 = FUNC_2 (VAR_6);
    FUNC_0 (VAR_13 != ((void*)0));

    VAR_14 = FUNC_2 (VAR_6);
    FUNC_0 (VAR_14 != ((void*)0));

    VAR_15 = FUNC_2 (VAR_6);
    FUNC_0 (VAR_15 != ((void*)0));

    VAR_16 = FUNC_2 (VAR_6);
    FUNC_0 (VAR_16 != ((void*)0));

    VAR_17 = FUNC_2 (VAR_6);
    FUNC_0 (VAR_17 != ((void*)0));

    FUNC_14 (VAR_6, VAR_13, VAR_19);
    FUNC_14 (VAR_6, VAR_13, VAR_19);

    FUNC_14 (VAR_6, VAR_14, VAR_19);
    FUNC_14 (VAR_6, VAR_14, VAR_19);
    FUNC_1 (VAR_14, VAR_10);
    FUNC_14 (VAR_6, VAR_14, VAR_19);
    FUNC_14 (VAR_6, VAR_14, VAR_19);
    FUNC_14 (VAR_6, VAR_14, VAR_19);
    FUNC_1 (VAR_14, VAR_11);

    FUNC_14 (VAR_6, VAR_15, VAR_19);
    FUNC_14 (VAR_6, VAR_15, VAR_19);
    FUNC_14 (VAR_6, VAR_15, VAR_19);

    FUNC_14 (VAR_6, VAR_16, VAR_19);

    FUNC_14 (VAR_6, VAR_17, VAR_19);
    FUNC_14 (VAR_6, VAR_17, VAR_19);

    VAR_7->p_subitems = VAR_13;
    VAR_8->p_subitems = VAR_14;
    VAR_9->p_subitems = VAR_15;
    VAR_10->p_subitems = VAR_16;
    VAR_11->p_subitems = VAR_17;

    FUNC_1 (VAR_12, VAR_7);
    FUNC_1 (VAR_12, VAR_8);
    FUNC_1 (VAR_12, VAR_9);

    VAR_18 = FUNC_4 (VAR_6);
    FUNC_0(VAR_18);

    FUNC_7 (VAR_18, VAR_12);


    FUNC_8(VAR_18, VAR_0);

    FUNC_5 (VAR_18, VAR_7);

    FUNC_18 (VAR_18);

    FUNC_11 (VAR_7);
    FUNC_11 (VAR_8);
    FUNC_11 (VAR_9);
    FUNC_11 (VAR_10);
    FUNC_11 (VAR_11);

    FUNC_9 (VAR_18);

    while (FUNC_3 (VAR_18))
        FUNC_15();


    FUNC_17 ("Testing media player playback option - Loop\n");
    FUNC_8(VAR_18, VAR_1);

    FUNC_5 (VAR_18, VAR_7);

    FUNC_18 (VAR_18);

    FUNC_16 (VAR_18);


    FUNC_17 ("Testing media player playback option - Repeat\n");
    FUNC_8(VAR_18, VAR_2);

    FUNC_5 (VAR_18, VAR_7);

    FUNC_18 (VAR_18);

    FUNC_16 (VAR_18);

    FUNC_6 (VAR_18);
    FUNC_13 (VAR_6);
}
