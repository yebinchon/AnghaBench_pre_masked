
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int sd_radv ;
typedef int sd_event_source ;
typedef int sd_event ;
typedef int buf ;


 int* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,unsigned char**,int) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(sd_event_source *VAR_3, int VAR_4, uint32_t VAR_5, void *VAR_6) {
        sd_radv *VAR_7 = VAR_6;
        unsigned char VAR_8[168];
        size_t VAR_9;

        FUNC_0(FUNC_2(VAR_1[0], &VAR_8, sizeof(VAR_8)) == sizeof(VAR_8));


        if (VAR_2) {
                VAR_0[6] = 0x00;
                VAR_0[7] = 0x00;
        }

        FUNC_1 ("Received Router Advertisement with lifetime %u\n",
                (VAR_0[6] << 8) + VAR_0[7]);


        for (VAR_9 = 0; VAR_9 < sizeof(VAR_8); VAR_9++) {
                if (!(VAR_9 % 8))
                        FUNC_1("%3zd: ", VAR_9);

                FUNC_1("0x%02x", VAR_8[VAR_9]);

                FUNC_0(VAR_8[VAR_9] == VAR_0[VAR_9]);

                if ((VAR_9 + 1) % 8)
                        FUNC_1(", ");
                else
                        FUNC_1("\n");
        }

        if (VAR_2) {
                sd_event *VAR_10;

                VAR_10 = FUNC_4(VAR_7);
                FUNC_3(VAR_10, 0);

                return 0;
        }

        FUNC_0(FUNC_5(VAR_7) >= 0);
        VAR_2 = 1;

        return 0;
}
