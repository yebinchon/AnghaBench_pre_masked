
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int sd_lldp_neighbor ;
typedef int sd_lldp ;
typedef int sd_event ;
typedef int frame ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int **) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (void const*,char*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ***) ;
 scalar_t__ FUNC_5 (int *,int*,void const**,size_t*) ;
 scalar_t__ FUNC_6 (int *,char const**) ;
 scalar_t__ FUNC_7 (int *,int*,void const**,size_t*) ;
 scalar_t__ FUNC_8 (int *,char const**) ;
 scalar_t__ FUNC_9 (int *,char const**) ;
 scalar_t__ FUNC_10 (int *,int*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int **,int *,int ,int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (char const*,char*) ;
 int * VAR_5 ;
 int FUNC_15 (int ,int const*,int) ;

__attribute__((used)) static void FUNC_16(sd_event *VAR_6) {

        static const uint8_t VAR_7[] = {

                0x01, 0x80, 0xc2, 0x00, 0x00, 0x03,
                0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
                0x88, 0xcc,

                0x02, 0x07, 0x04, 0x00, 0x01, 0x02,
                0x03, 0x04, 0x05,
                0x04, 0x04, 0x05, 0x31, 0x2f, 0x33,
                0x06, 0x02, 0x00, 0x78,

                0x08, 0x04, 0x50, 0x6f, 0x72, 0x74,
                0x0a, 0x03, 0x53, 0x59, 0x53,
                0x0c, 0x04, 0x66, 0x6f, 0x6f, 0x00,
                0x00, 0x00
        };

        sd_lldp *VAR_8;
        sd_lldp_neighbor **VAR_9;
        uint8_t VAR_10;
        const void *VAR_11;
        uint16_t VAR_12;
        size_t VAR_13;
        const char *VAR_14;

        VAR_4 = 0;
        FUNC_0(FUNC_12(&VAR_8, VAR_6, VAR_3, ((void*)0)) == 0);

        FUNC_0(FUNC_15(VAR_5[1], VAR_7, sizeof(VAR_7)) == sizeof(VAR_7));
        FUNC_3(VAR_6, 0);
        FUNC_0(VAR_4 == 1);
        FUNC_0(FUNC_4(VAR_8, &VAR_9) == 1);

        FUNC_0(FUNC_5(VAR_9[0], &VAR_10, &VAR_11, &VAR_13) == 0);
        FUNC_0(VAR_10 == VAR_1);
        FUNC_0(VAR_13 == VAR_0);
        FUNC_0(!FUNC_2(VAR_11, "\x00\x01\x02\x03\x04\x05", VAR_0));

        FUNC_0(FUNC_7(VAR_9[0], &VAR_10, &VAR_11, &VAR_13) == 0);
        FUNC_0(VAR_10 == VAR_2);
        FUNC_0(VAR_13 == 3);
        FUNC_0(!FUNC_2(VAR_11, "1/3", 3));

        FUNC_0(FUNC_6(VAR_9[0], &VAR_14) == 0);
        FUNC_0(FUNC_14(VAR_14, "Port"));

        FUNC_0(FUNC_9(VAR_9[0], &VAR_14) == 0);
        FUNC_0(FUNC_14(VAR_14, "SYS"));

        FUNC_0(FUNC_8(VAR_9[0], &VAR_14) == 0);
        FUNC_0(FUNC_14(VAR_14, "foo"));

        FUNC_0(FUNC_10(VAR_9[0], &VAR_12) == 0);
        FUNC_0(VAR_12 == 120);

        FUNC_11(VAR_9[0]);
        FUNC_1(VAR_9);

        FUNC_0(FUNC_13(VAR_8) == 0);
}
