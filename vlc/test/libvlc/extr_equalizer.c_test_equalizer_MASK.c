
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_player_t ;
typedef int libvlc_instance_t ;
typedef int libvlc_equalizer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (float) ;
 float FUNC_2 (int *,unsigned int) ;
 unsigned int FUNC_3 () ;
 float FUNC_4 (unsigned int) ;
 float FUNC_5 (int *) ;
 unsigned int FUNC_6 () ;
 int * FUNC_7 (unsigned int) ;
 int * FUNC_8 () ;
 int * FUNC_9 (unsigned int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,float,unsigned int) ;
 scalar_t__ FUNC_12 (int *,float) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int *) ;
 int * FUNC_16 (int,char const**) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static void FUNC_19 (const char ** VAR_0, int VAR_1)
{
    libvlc_instance_t *VAR_2;
    libvlc_media_player_t *VAR_3;
    libvlc_equalizer_t *VAR_4;
    unsigned VAR_5, VAR_6;

    FUNC_18 ("Testing equalizer\n");

    VAR_2 = FUNC_16 (VAR_1, VAR_0);
    FUNC_0 (((void*)0) != VAR_2);

    VAR_3 = FUNC_13 (VAR_2);
    FUNC_0 (((void*)0) != VAR_3);



    FUNC_18 ("Testing equalizer presets\n");

    VAR_5 = FUNC_6();
    FUNC_0 (VAR_5 > 0);

    for (unsigned VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {
        FUNC_0 (((void*)0) != FUNC_7(VAR_7));

        VAR_4 = FUNC_9(VAR_7);
        FUNC_0 (*VAR_4);

        FUNC_10(VAR_4);
    }



    FUNC_0 (((void*)0) == FUNC_7(VAR_5));
    FUNC_0 (((void*)0) == FUNC_9(VAR_5));



    FUNC_18 ("Testing equalizer bands\n");

    VAR_6 = FUNC_3();
    FUNC_0 (VAR_6 > 0);

    for (unsigned VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
        FUNC_0 (-1.0f != FUNC_4(VAR_8));



    FUNC_0 (-1.0f == FUNC_4(VAR_6));



    FUNC_18 ("Testing equalizer initialisation\n");

    VAR_4 = FUNC_8();
    FUNC_0 (*VAR_4);

    FUNC_0 (FUNC_5(VAR_4) == 0.0f);

    for (unsigned VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
        FUNC_0 (FUNC_2(VAR_4, VAR_9) == 0.0f);



    FUNC_18 ("Testing equalizer preamp\n");

    FUNC_0 (0 == FUNC_12 (VAR_4, 19.9f));
    FUNC_0 (FUNC_5(VAR_4) == 19.9f);

    FUNC_0 (0 == FUNC_12 (VAR_4, 20.0f));
    FUNC_0 (FUNC_5(VAR_4) == 20.0f);

    FUNC_0 (0 == FUNC_12 (VAR_4, 20.1f));
    FUNC_0 (FUNC_5(VAR_4) == 20.0f);

    FUNC_0 (0 == FUNC_12 (VAR_4, -19.9f));
    FUNC_0 (FUNC_5(VAR_4) == -19.9f);

    FUNC_0 (0 == FUNC_12 (VAR_4, -20.0f));
    FUNC_0 (FUNC_5(VAR_4) == -20.0f);

    FUNC_0 (0 == FUNC_12 (VAR_4, -20.1f));
    FUNC_0 (FUNC_5(VAR_4) == -20.0f);



    FUNC_18 ("Testing equalizer amp at index\n");

    for (unsigned VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
    {
        FUNC_0 (0 == FUNC_11 (VAR_4, 19.9f, VAR_10));
        FUNC_0 (FUNC_2 (VAR_4, VAR_10) == 19.9f);

        FUNC_0 (0 == FUNC_11 (VAR_4, 20.0f, VAR_10));
        FUNC_0 (FUNC_2 (VAR_4, VAR_10) == 20.0f);

        FUNC_0 (0 == FUNC_11 (VAR_4, 20.1f, VAR_10));
        FUNC_0 (FUNC_2 (VAR_4, VAR_10) == 20.0f);

        FUNC_0 (0 == FUNC_11 (VAR_4, -19.9f, VAR_10));
        FUNC_0 (FUNC_2 (VAR_4, VAR_10) == -19.9f);

        FUNC_0 (0 == FUNC_11 (VAR_4, -20.0f, VAR_10));
        FUNC_0 (FUNC_2 (VAR_4, VAR_10) == -20.0f);

        FUNC_0 (0 == FUNC_11 (VAR_4, -20.1f, VAR_10));
        FUNC_0 (FUNC_2 (VAR_4, VAR_10) == -20.0f);
    }



    FUNC_0 (FUNC_1(FUNC_2 (VAR_4, VAR_6)));
    FUNC_0 (-1 == FUNC_11 (VAR_4, 19.9f, VAR_6));



    FUNC_18 ("Testing release NULL\n");

    FUNC_10 (((void*)0));



    FUNC_18 ("Testing set equalizer\n");

    FUNC_0 (0 == FUNC_15(VAR_3, ((void*)0)));
    FUNC_0 (0 == FUNC_15(VAR_3, VAR_4));



    FUNC_18 ("Testing equalizer-bands string limit\n");

    for (unsigned VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
        FUNC_0 (0 == FUNC_11 (VAR_4, -19.1234567f, VAR_11));

    FUNC_0 (0 == FUNC_15(VAR_3, VAR_4));



    FUNC_18 ("Testing equalizer cleanup\n");

    FUNC_10 (VAR_4);

    FUNC_18 ("Finished testing equalizer\n");

    FUNC_14 (VAR_3);

    FUNC_17 (VAR_2);
}
