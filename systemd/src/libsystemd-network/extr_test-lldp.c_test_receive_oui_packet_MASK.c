
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sd_lldp_neighbor ;
typedef int sd_lldp ;
typedef int sd_event ;
typedef int frame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int **) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ***) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int **,int *,int ,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int * VAR_14 ;
 int FUNC_11 (int ,int*,int) ;

__attribute__((used)) static void FUNC_12(sd_event *VAR_15) {
        sd_lldp *VAR_16;
        sd_lldp_neighbor **VAR_17;
        uint8_t VAR_18[] = {

                0x01, 0x80, 0xc2, 0x00, 0x00, 0x03,
                0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
                0x88, 0xcc,

                0x02, 0x07, 0x04, 0x00, 0x01, 0x02,
                0x03, 0x04, 0x05,
                0x04, 0x04, 0x05, 0x31, 0x2f, 0x33,
                0x06, 0x02, 0x00, 0x78,

                0xfe, 0x06, 0x00, 0x80, 0xc2, 0x01,
                0x12, 0x34,
                0xfe, 0x07, 0x00, 0x80, 0xc2, 0x02,
                0x01, 0x77, 0x88,
                0xfe, 0x0d, 0x00, 0x80, 0xc2, 0x03,
                0x12, 0x34, 0x06, 0x56, 0x6c, 0x61,
                0x6e, 0x35, 0x31,
                0xfe, 0x06, 0x00, 0x80, 0xc2, 0x06,
                0x01, 0x02,
                0xfe, 0x09, 0x00, 0x80, 0xc2, 0x07,
                0x01, 0x00, 0x14, 0x00, 0x12,
                0xfe, 0x07, 0x00, 0x12, 0x0f, 0x02,
                0x07, 0x01, 0x00,
                0x00, 0x00
        };

        VAR_13 = 0;
        FUNC_0(FUNC_9(&VAR_16, VAR_15, VAR_12, ((void*)0)) == 0);

        FUNC_0(FUNC_11(VAR_14[1], VAR_18, sizeof(VAR_18)) == sizeof(VAR_18));
        FUNC_2(VAR_15, 0);
        FUNC_0(VAR_13 == 1);
        FUNC_0(FUNC_3(VAR_16, &VAR_17) == 1);

        FUNC_0(FUNC_7(VAR_17[0]) >= 0);
        FUNC_0(FUNC_5(VAR_17[0], VAR_8) > 0);
        FUNC_0(FUNC_6(VAR_17[0]) > 0);
        FUNC_0(FUNC_5(VAR_17[0], VAR_10) > 0);
        FUNC_0(FUNC_6(VAR_17[0]) > 0);
        FUNC_0(FUNC_5(VAR_17[0], VAR_11) > 0);
        FUNC_0(FUNC_6(VAR_17[0]) > 0);
        FUNC_0(FUNC_4(VAR_17[0], VAR_0, VAR_4) > 0);
        FUNC_0(FUNC_6(VAR_17[0]) > 0);
        FUNC_0(FUNC_4(VAR_17[0], VAR_0, VAR_3) > 0);
        FUNC_0(FUNC_6(VAR_17[0]) > 0);
        FUNC_0(FUNC_4(VAR_17[0], VAR_0, VAR_5) > 0);
        FUNC_0(FUNC_6(VAR_17[0]) > 0);
        FUNC_0(FUNC_4(VAR_17[0], VAR_0, VAR_2) > 0);
        FUNC_0(FUNC_6(VAR_17[0]) > 0);
        FUNC_0(FUNC_4(VAR_17[0], VAR_0, VAR_1) > 0);
        FUNC_0(FUNC_6(VAR_17[0]) > 0);
        FUNC_0(FUNC_4(VAR_17[0], VAR_6, VAR_7) > 0);
        FUNC_0(FUNC_6(VAR_17[0]) > 0);
        FUNC_0(FUNC_5(VAR_17[0], VAR_9) > 0);
        FUNC_0(FUNC_6(VAR_17[0]) == 0);

        FUNC_8(VAR_17[0]);
        FUNC_1(VAR_17);

        FUNC_0(FUNC_10(VAR_16) == 0);
}
