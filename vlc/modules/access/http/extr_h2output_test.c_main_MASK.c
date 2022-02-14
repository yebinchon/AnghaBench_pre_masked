
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_h2_output {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (unsigned char) ;
 int * FUNC_3 (int *,int *,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 struct vlc_h2_output* FUNC_4 (int *,int) ;
 int FUNC_5 (struct vlc_h2_output*) ;
 int FUNC_6 (struct vlc_h2_output*,int *) ;
 int FUNC_7 (struct vlc_h2_output*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

int FUNC_12(void)
{
    struct vlc_h2_output *VAR_5;


    VAR_5 = FUNC_4(&VAR_2, 0);
    FUNC_1(VAR_5 != ((void*)0));
    FUNC_5(VAR_5);

    FUNC_9(&VAR_3, 0);
    VAR_5 = FUNC_4(&VAR_2, VAR_1 = 1);
    FUNC_1(VAR_5 != ((void*)0));
    FUNC_5(VAR_5);
    FUNC_8(&VAR_3);


    FUNC_9(&VAR_3, 0);
    VAR_5 = FUNC_4(&VAR_2, 0);
    FUNC_1(VAR_5 != ((void*)0));
    FUNC_1(FUNC_7(VAR_5, ((void*)0)) == -1);
    FUNC_1(FUNC_7(VAR_5, FUNC_2(0)) == 0);
    FUNC_1(FUNC_7(VAR_5, FUNC_2(1)) == 0);
    FUNC_1(FUNC_6(VAR_5, ((void*)0)) == -1);
    FUNC_1(FUNC_6(VAR_5, FUNC_2(2)) == 0);
    FUNC_1(FUNC_6(VAR_5, FUNC_2(3)) == 0);
    FUNC_1(FUNC_6(VAR_5, FUNC_3(FUNC_2(4), FUNC_2(5),
                                              FUNC_2(6), ((void*)0))) == 0);
    FUNC_1(FUNC_6(VAR_5, FUNC_2(7)) == 0);
    for (unsigned VAR_6 = 0; VAR_6 < 8; VAR_6++)
        FUNC_10(&VAR_3);

    FUNC_1(FUNC_7(VAR_5, FUNC_2(8)) == 0);
    FUNC_1(FUNC_6(VAR_5, FUNC_2(9)) == 0);

    FUNC_5(VAR_5);
    FUNC_8(&VAR_3);


    VAR_4 = 1;

    FUNC_9(&VAR_3, 0);
    VAR_0 = 10;
    VAR_5 = FUNC_4(&VAR_2, 0);
    FUNC_1(VAR_5 != ((void*)0));

    FUNC_1(FUNC_6(VAR_5, FUNC_2(10)) == 0);
    for (unsigned char VAR_7 = 11; FUNC_6(VAR_5, FUNC_2(VAR_7)) == 0; VAR_7++)
        FUNC_11(FUNC_0(100));
    FUNC_1(FUNC_6(VAR_5, FUNC_2(0)) == -1);
    FUNC_1(FUNC_7(VAR_5, FUNC_2(0)) == -1);
    FUNC_5(VAR_5);
    FUNC_8(&VAR_3);


    FUNC_9(&VAR_3, 0);
    VAR_0 = 0;
    VAR_5 = FUNC_4(&VAR_2, VAR_1 = 1);
    FUNC_1(VAR_5 != ((void*)0));
    FUNC_10(&VAR_3);

    for (unsigned char VAR_8 = 1; FUNC_7(VAR_5, FUNC_2(VAR_8)) == 0; VAR_8++)
        FUNC_11(FUNC_0(100));
    FUNC_1(FUNC_6(VAR_5, FUNC_2(0)) == -1);
    FUNC_1(FUNC_7(VAR_5, FUNC_2(0)) == -1);
    FUNC_5(VAR_5);
    FUNC_8(&VAR_3);

    return 0;
}
