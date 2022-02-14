
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int sd_lldp_neighbor ;
typedef int sd_lldp ;
typedef int sd_event ;
typedef int frame6 ;
typedef int frame5 ;
typedef int frame4 ;
typedef int frame3 ;
typedef int frame2 ;
typedef int frame1 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int **) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (void const*,char const*,size_t) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ***) ;
 scalar_t__ FUNC_5 (int *,int*,void const**,size_t*) ;
 scalar_t__ FUNC_6 (int *,int*,void const**,size_t*) ;
 scalar_t__ FUNC_7 (int *,int*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int **,int *,int ,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 size_t FUNC_11 (char const*) ;
 int * VAR_4 ;
 int FUNC_12 (int ,int const*,int) ;

__attribute__((used)) static void FUNC_13(sd_event *VAR_5) {

        static const uint8_t VAR_6[] = {

                0x01, 0x80, 0xc2, 0x00, 0x00, 0x03,
                0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
                0x88, 0xcc,

                0x02, 0x04, 0x01, '1', '/', '2',
                0x04, 0x04, 0x02, '2', '/', '3',
                0x06, 0x02, 0x00, 0x78,
                0x00, 0x00
        };
        static const uint8_t VAR_7[] = {

                0x01, 0x80, 0xc2, 0x00, 0x00, 0x03,
                0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
                0x88, 0xcc,

                0x02, 0x04, 0x01, '2', '/', '1',
                0x04, 0x04, 0x02, '1', '/', '3',
                0x06, 0x02, 0x00, 0x78,
                0x00, 0x00
        };
        static const uint8_t VAR_8[] = {

                0x01, 0x80, 0xc2, 0x00, 0x00, 0x03,
                0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
                0x88, 0xcc,

                0x02, 0x05, 0x01, '2', '/', '1', '0',
                0x04, 0x04, 0x02, '1', '/', '0',
                0x06, 0x02, 0x00, 0x78,
                0x00, 0x00
        };
        static const uint8_t VAR_9[] = {

                0x01, 0x80, 0xc2, 0x00, 0x00, 0x03,
                0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
                0x88, 0xcc,

                0x02, 0x05, 0x01, '2', '/', '1', '9',
                0x04, 0x04, 0x02, '1', '/', '0',
                0x06, 0x02, 0x00, 0x78,
                0x00, 0x00
        };
        static const uint8_t VAR_10[] = {

                0x01, 0x80, 0xc2, 0x00, 0x00, 0x03,
                0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
                0x88, 0xcc,

                0x02, 0x04, 0x01, '1', '/', '2',
                0x04, 0x05, 0x02, '2', '/', '1', '0',
                0x06, 0x02, 0x00, 0x78,
                0x00, 0x00
        };
        static const uint8_t VAR_11[] = {

                0x01, 0x80, 0xc2, 0x00, 0x00, 0x03,
                0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
                0x88, 0xcc,

                0x02, 0x04, 0x01, '1', '/', '2',
                0x04, 0x05, 0x02, '2', '/', '3', '9',
                0x06, 0x02, 0x00, 0x78,
                0x00, 0x00
        };
        static const char* VAR_12[] = {

                "1/2", "2/10",
                "1/2", "2/3",
                "1/2", "2/39",
                "2/1", "1/3",
                "2/10", "1/0",
                "2/19", "1/0",
        };

        sd_lldp *VAR_13;
        sd_lldp_neighbor **VAR_14;
        int VAR_15;
        uint8_t VAR_16;
        const void *VAR_17;
        size_t VAR_18, VAR_19;
        uint16_t VAR_20;

        VAR_3 = 0;
        FUNC_0(FUNC_9(&VAR_13, VAR_5, VAR_2, ((void*)0)) == 0);

        FUNC_0(FUNC_12(VAR_4[1], VAR_6, sizeof(VAR_6)) == sizeof(VAR_6));
        FUNC_3(VAR_5, 0);
        FUNC_0(FUNC_12(VAR_4[1], VAR_7, sizeof(VAR_7)) == sizeof(VAR_7));
        FUNC_3(VAR_5, 0);
        FUNC_0(FUNC_12(VAR_4[1], VAR_8, sizeof(VAR_8)) == sizeof(VAR_8));
        FUNC_3(VAR_5, 0);
        FUNC_0(FUNC_12(VAR_4[1], VAR_9, sizeof(VAR_9)) == sizeof(VAR_9));
        FUNC_3(VAR_5, 0);
        FUNC_0(FUNC_12(VAR_4[1], VAR_10, sizeof(VAR_10)) == sizeof(VAR_10));
        FUNC_3(VAR_5, 0);
        FUNC_0(FUNC_12(VAR_4[1], VAR_11, sizeof(VAR_11)) == sizeof(VAR_11));
        FUNC_3(VAR_5, 0);
        FUNC_0(VAR_3 == 6);

        FUNC_0(FUNC_4(VAR_13, &VAR_14) == 6);

        for (VAR_15 = 0; VAR_15 < 6; VAR_15++) {
                FUNC_0(FUNC_5(VAR_14[VAR_15], &VAR_16, &VAR_17, &VAR_18) == 0);
                FUNC_0(VAR_16 == VAR_0);
                VAR_19 = FUNC_11(VAR_12[2 * VAR_15]);
                FUNC_0(VAR_18 == VAR_19);
                FUNC_0(FUNC_2(VAR_17, VAR_12[2 * VAR_15], VAR_19) == 0);

                FUNC_0(FUNC_6(VAR_14[VAR_15], &VAR_16, &VAR_17, &VAR_18) == 0);
                FUNC_0(VAR_16 == VAR_1);
                VAR_19 = FUNC_11(VAR_12[2 * VAR_15 + 1]);
                FUNC_0(VAR_18 == VAR_19);
                FUNC_0(FUNC_2(VAR_17, VAR_12[2 * VAR_15 + 1], VAR_19) == 0);

                FUNC_0(FUNC_7(VAR_14[VAR_15], &VAR_20) == 0);
                FUNC_0(VAR_20 == 120);
        }

        for (VAR_15 = 0; VAR_15 < 6; VAR_15++)
                FUNC_8(VAR_14[VAR_15]);
        FUNC_1(VAR_14);

        FUNC_0(FUNC_10(VAR_13) == 0);
}
