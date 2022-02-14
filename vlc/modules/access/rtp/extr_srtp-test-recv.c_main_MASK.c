
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef int srtp_session_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int*,char*,int) ;
 int FUNC_2 (unsigned int*,unsigned int*,size_t) ;
 int FUNC_3 (unsigned int*,int ,size_t) ;
 int * FUNC_4 (int ,int ,int,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned int*,size_t*) ;
 int FUNC_7 (int *,unsigned int*,size_t*,int) ;
 int FUNC_8 (int *,char const*,char const*) ;
 int FUNC_9 (int *,int) ;

int FUNC_10 (void)
{
    static const char VAR_7[] =
        "123456789ABCDEF0" "123456789ABCDEF0";
    static const char VAR_8[] =
        "1234567890" "1234567890" "12345678";
    int VAR_9;
    srtp_session_t *VAR_10, *VAR_11;


    VAR_11 = FUNC_4 (VAR_4, VAR_3, 21,
                      VAR_5, 0);
    FUNC_0 (VAR_11 == ((void*)0));


    VAR_11 = FUNC_4 (VAR_4, VAR_3, 3,
                      VAR_5, VAR_6);
    FUNC_0 (VAR_11 == ((void*)0));


    VAR_11 = FUNC_4 (VAR_4, VAR_3, 20,
                      VAR_5, VAR_6);
    FUNC_0 (VAR_11 != ((void*)0));

    VAR_10 = FUNC_4 (VAR_4, VAR_3, 20,
                      VAR_5, VAR_6);
    FUNC_0 (VAR_10 != ((void*)0));

    FUNC_9 (VAR_11, 1);
    FUNC_9 (VAR_10, 1);

    VAR_9 = FUNC_8 (VAR_11, VAR_7, VAR_8);
    FUNC_0 (VAR_9 == 0);
    VAR_9 = FUNC_8 (VAR_10, VAR_7, VAR_8);
    FUNC_0 (VAR_9 == 0);

    uint8_t VAR_12[1500], VAR_13[1500];
    size_t VAR_14;


    VAR_14 = 12;
    FUNC_3 (VAR_12, 0, VAR_14);
    VAR_9 = FUNC_7 (VAR_11, VAR_12, &VAR_14, sizeof (VAR_12));
    FUNC_0 (VAR_9 == VAR_1);

    VAR_14 = 32;
    FUNC_3 (VAR_12, 0, VAR_14);
    FUNC_6 (VAR_10, VAR_12, &VAR_14);
    FUNC_0 (VAR_9 == VAR_1);


    VAR_14 = 11;
    VAR_12[0] = 0x80;
    VAR_9 = FUNC_7 (VAR_11, VAR_12, &VAR_14, sizeof (VAR_12));
    FUNC_0 (VAR_9 == VAR_1);

    VAR_14 = 11;
    VAR_9 = FUNC_6 (VAR_10, VAR_12, &VAR_14);
    FUNC_0 (VAR_9 == VAR_1);


    VAR_14 = 31;
    VAR_9 = FUNC_6 (VAR_10, VAR_12, &VAR_14);
    FUNC_0 (VAR_9 == VAR_1);


    VAR_14 = 15;
    VAR_12[0] = 0x90;
    VAR_9 = FUNC_7 (VAR_11, VAR_12, &VAR_14, sizeof (VAR_12));
    FUNC_0 (VAR_9 == VAR_1);

    VAR_14 = 16;
    VAR_12[0] = 0x90;
    VAR_12[15] = 1;
    VAR_9 = FUNC_7 (VAR_11, VAR_12, &VAR_14, sizeof (VAR_12));
    FUNC_0 (VAR_9 == VAR_1);


    VAR_14 = 20;
    FUNC_3 (VAR_12, 0, VAR_14);
    VAR_12[0] = 0x80;
    VAR_12[3] = 1;
    VAR_9 = FUNC_7 (VAR_11, VAR_12, &VAR_14, 39);
    FUNC_0 (VAR_9 == VAR_2);
    FUNC_0 (VAR_14 == 40);

    VAR_14 = 31;
    VAR_9 = FUNC_6 (VAR_10, VAR_12, &VAR_14);
    FUNC_0 (VAR_9 == VAR_1);


    VAR_12[0] = 0x80;
    VAR_12[3] = 3;
    for (unsigned VAR_15 = 0; VAR_15 < 256; VAR_15++)
        VAR_12[VAR_15 + 12] = VAR_15;
    VAR_14 = 0x10c;
    VAR_9 = FUNC_7 (VAR_11, VAR_12, &VAR_14, 0x120);
    FUNC_0 (VAR_9 == 0);
    FUNC_0 (VAR_14 == 0x120);

    FUNC_2 (VAR_13, VAR_12, VAR_14);
    VAR_9 = FUNC_6 (VAR_10, VAR_13, &VAR_14);
    FUNC_0 (VAR_9 == 0);
    FUNC_0 (VAR_14 == 0x10c);
    FUNC_0 (!FUNC_1 (VAR_13, "\x80\x00\x00\x03" "\x00\x00\x00\x00"
                           "\x00\x00\x00\x00", 12));
    for (unsigned VAR_16 = 0; VAR_16 < 256; VAR_16++)
        FUNC_0 (VAR_13[VAR_16 + 12] == VAR_16);


    VAR_14 = 0x120;
    VAR_9 = FUNC_6 (VAR_10, VAR_12, &VAR_14);
    FUNC_0 (VAR_9 == VAR_0);
    FUNC_0 (VAR_14 == 0x10c);


    VAR_12[0] = 0x80;
    VAR_12[3] = 2;
    VAR_9 = FUNC_7 (VAR_11, VAR_12, &VAR_14, 0x120);
    FUNC_0 (VAR_9 == 0);
    FUNC_0 (VAR_14 == 0x120);

    FUNC_2 (VAR_13, VAR_12, VAR_14);
    VAR_9 = FUNC_6 (VAR_10, VAR_13, &VAR_14);
    FUNC_0 (VAR_9 == 0);
    FUNC_0 (VAR_14 == 0x10c);


    VAR_14 = 0x120;
    VAR_9 = FUNC_6 (VAR_10, VAR_12, &VAR_14);
    FUNC_0 (VAR_9 == VAR_0);
    FUNC_0 (VAR_14 == 0x10c);

    FUNC_5 (VAR_11);
    FUNC_5 (VAR_10);
    return 0;
}
