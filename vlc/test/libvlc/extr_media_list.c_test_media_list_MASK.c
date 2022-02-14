
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_t ;
typedef int libvlc_media_list_t ;
typedef int libvlc_instance_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int) ;
 int * FUNC_5 (int *,int) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int * FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int,char const**) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14 (const char ** VAR_0, int VAR_1)
{
    libvlc_instance_t *VAR_2;
    libvlc_media_t *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7;
    libvlc_media_list_t *VAR_8;
    int VAR_9;

    FUNC_13 ("Testing media_list\n");

    VAR_2 = FUNC_11 (VAR_1, VAR_0);
    FUNC_0 (VAR_2 != ((void*)0));

    VAR_8 = FUNC_6 (VAR_2);
    FUNC_0 (VAR_8 != ((void*)0));

    VAR_4 = FUNC_9 (VAR_2, "/dev/null");
    FUNC_0 (VAR_4 != ((void*)0));
    VAR_5 = FUNC_9 (VAR_2, "/dev/null");
    FUNC_0 (VAR_5 != ((void*)0));
    VAR_6 = FUNC_9 (VAR_2, "/dev/null");
    FUNC_0 (VAR_6 != ((void*)0));

    VAR_9 = FUNC_1 (VAR_8, VAR_4);
    FUNC_0 (!VAR_9);
    VAR_9 = FUNC_1 (VAR_8, VAR_5);
    FUNC_0 (!VAR_9);

    FUNC_0( FUNC_2 (VAR_8) == 2 );
    FUNC_0( FUNC_3 (VAR_8, VAR_4) == 0 );
    FUNC_0( FUNC_3 (VAR_8, VAR_5) == 1 );

    VAR_9 = FUNC_8 (VAR_8, 0);
    FUNC_0 (!VAR_9);


    FUNC_0( FUNC_3 (VAR_8, VAR_5) == 0 );
    VAR_9 = FUNC_1 (VAR_8, VAR_4);
    FUNC_0 (!VAR_9);
    VAR_9 = FUNC_1 (VAR_8, VAR_4);
    FUNC_0 (!VAR_9);


    FUNC_0( FUNC_2 (VAR_8) == 3 );

    VAR_9 = FUNC_4 (VAR_8, VAR_6, 2);
    FUNC_0 (!VAR_9);


    FUNC_0( FUNC_2 (VAR_8) == 4 );


    FUNC_0( FUNC_3 (VAR_8, VAR_6) == 2 );


    VAR_3 = FUNC_5 (VAR_8, 0);
    FUNC_0(VAR_3 == VAR_5);
    FUNC_10(VAR_3);

    VAR_3 = FUNC_5 (VAR_8, 2);
    FUNC_0(VAR_3 == VAR_6);
    FUNC_10(VAR_3);



    VAR_9 = FUNC_8 (VAR_8, 4);
    FUNC_0 (VAR_9 == -1);

    VAR_9 = FUNC_8 (VAR_8, 100);
    FUNC_0 (VAR_9 == -1);

    VAR_9 = FUNC_8 (VAR_8, -1);
    FUNC_0 (VAR_9 == -1);


    libvlc_media_t * VAR_10 =
        FUNC_5 (VAR_8, 4);
    FUNC_0 (VAR_10 == ((void*)0));

    VAR_10 = FUNC_5 (VAR_8, 100);
    FUNC_0 (VAR_10 == ((void*)0));

    VAR_10 = FUNC_5 (VAR_8, -1);
    FUNC_0 (VAR_10 == ((void*)0));

    VAR_7 = FUNC_9 (VAR_2, "/dev/null");
    FUNC_0 (VAR_7 != ((void*)0));


    int VAR_11 = 0;
    VAR_11 = FUNC_3 (VAR_8, VAR_7);
    FUNC_0 ( VAR_11 == -1 );

    FUNC_10 (VAR_4);
    FUNC_10 (VAR_5);
    FUNC_10 (VAR_6);
    FUNC_10 (VAR_7);

    FUNC_7 (VAR_8);

    FUNC_12 (VAR_2);
}
