
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sd_lldp_neighbor ;
typedef int sd_lldp ;
typedef int sd_event ;
typedef int frame ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ***) ;
 scalar_t__ FUNC_3 (int **,int *,int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * VAR_2 ;
 int FUNC_5 (int ,int*,int) ;

__attribute__((used)) static void FUNC_6(sd_event *VAR_3) {
        sd_lldp *VAR_4;
        sd_lldp_neighbor **VAR_5;
        uint8_t VAR_6[] = {

                0x01, 0x80, 0xc2, 0x00, 0x00, 0x03,
                0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
                0x88, 0xcc,

                0x02, 0x07, 0x04, 0x00, 0x01, 0x02,
                0x03, 0x04, 0x05,
                0x04, 0x04, 0x05, 0x31, 0x2f, 0x33,

                0x00, 0x00
        };

        VAR_1 = 0;
        FUNC_0(FUNC_3(&VAR_4, VAR_3, VAR_0, ((void*)0)) == 0);

        FUNC_0(FUNC_5(VAR_2[1], VAR_6, sizeof(VAR_6)) == sizeof(VAR_6));
        FUNC_1(VAR_3, 0);
        FUNC_0(VAR_1 == 0);
        FUNC_0(FUNC_2(VAR_4, &VAR_5) == 0);

        FUNC_0(FUNC_4(VAR_4) == 0);
}
