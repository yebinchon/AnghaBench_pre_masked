
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int whoami ;
typedef char uint8_t ;
typedef size_t uint16_t ;
typedef scalar_t__ time_t ;
typedef int Tox ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char) ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*) ;
 char* VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int ,int ,int ) ;
 unsigned char* FUNC_10 (char*) ;
 int FUNC_11 () ;
 char* VAR_7 ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *,char*) ;
 int * FUNC_15 () ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_19 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_20 (char*,char*,...) ;
 int FUNC_21 () ;
 int FUNC_22 (int *,char*) ;
 int FUNC_23 (int ,char*) ;
 int FUNC_24 (char*,int,char*,char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_25 (char*,char*) ;
 int FUNC_26 (char*,char*) ;
 int FUNC_27 (char*) ;
 scalar_t__ FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *,char*,size_t,unsigned char*,int *) ;
 int FUNC_31 (int *,int ,int *) ;
 int FUNC_32 (int *,int ,int *) ;
 int FUNC_33 (int *,int ,int *) ;
 int FUNC_34 (int *,int ,int *) ;
 int FUNC_35 (int *,int ,int *) ;
 int FUNC_36 (int *,int ,int *) ;
 int FUNC_37 (int *,int ,int *) ;
 int FUNC_38 (int *,int ,int *) ;
 int FUNC_39 (int *,int ,int *) ;
 int FUNC_40 (int *,int ,int *) ;
 int FUNC_41 (int *,int ,int *) ;
 int FUNC_42 (int *,int ,int *) ;
 int VAR_18 ;
 int FUNC_43 (int *) ;
 int FUNC_44 (int *) ;
 scalar_t__ FUNC_45 (int *) ;
 int FUNC_46 (int *,char*) ;
 size_t FUNC_47 (int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

int FUNC_48(int VAR_22, char *VAR_23[])
{

    FUNC_23(VAR_1, "");

    if (VAR_22 < 4) {
        if ((VAR_22 == 2) && !FUNC_25(VAR_23[1], "-h")) {
            FUNC_19(VAR_23[0]);
            FUNC_5(0);
        }

        FUNC_20("Usage: %s [--ipv4|--ipv6] IP PORT KEY [-f keyfile] (or %s -h for help)\n", VAR_23[0], VAR_23[0]);
        FUNC_5(0);
    }


    uint8_t VAR_24 = 1;
    int VAR_25 = FUNC_2(VAR_22, VAR_23, &VAR_24);

    if (VAR_25 < 0)
        FUNC_5(1);

    int VAR_26 = 0;
    char *VAR_27 = "data";
    char VAR_28[200] = {0};
    Tox *VAR_29;



    if (VAR_22 > VAR_25 + 3)
        if (!FUNC_25(VAR_23[VAR_22 - 2], "-f"))
            VAR_27 = VAR_23[VAR_22 - 1];

    VAR_4 = VAR_27;
    VAR_29 = FUNC_15();

    if ( !VAR_29 ) {
        FUNC_6("Failed to allocate Messenger datastructure", VAR_16);
        FUNC_5(0);
    }

    FUNC_22(VAR_29, VAR_27);

    FUNC_38(VAR_29, VAR_14, ((void*)0));
    FUNC_36(VAR_29, VAR_11, ((void*)0));
    FUNC_37(VAR_29, VAR_12, ((void*)0));
    FUNC_39(VAR_29, VAR_15, ((void*)0));
    FUNC_40(VAR_29, VAR_10, ((void*)0));
    FUNC_41(VAR_29, VAR_8, ((void*)0));
    FUNC_33(VAR_29, VAR_19, ((void*)0));
    FUNC_34(VAR_29, VAR_5, ((void*)0));
    FUNC_32(VAR_29, VAR_6, ((void*)0));
    FUNC_31(VAR_29, VAR_18, ((void*)0));
    FUNC_42(VAR_29, VAR_9, ((void*)0));
    FUNC_35(VAR_29, VAR_13, ((void*)0));

    FUNC_11();
    FUNC_18();
    FUNC_21();
    FUNC_9(VAR_17, VAR_21, VAR_20);

    FUNC_16("/h for list of commands");
    FUNC_8(VAR_29, VAR_28);
    FUNC_16(VAR_28);
    FUNC_26(VAR_7, "");

    uint16_t VAR_30 = FUNC_1(VAR_23[VAR_25 + 2]);
    unsigned char *VAR_31 = FUNC_10(VAR_23[VAR_25 + 3]);
    int VAR_32 = FUNC_30(VAR_29, VAR_23[VAR_25 + 1], VAR_30, VAR_31, ((void*)0));

    if (!VAR_32) {
        FUNC_20("Failed to convert \"%s\" into an IP address. Exiting...\n", VAR_23[VAR_25 + 1]);
        FUNC_4();
        FUNC_5(1);
    }

    FUNC_17(VAR_17, VAR_3);

    FUNC_16("[i] change username with /n");
    uint8_t VAR_33[VAR_2 + 1];
    FUNC_46(VAR_29, VAR_33);
    uint16_t VAR_34 = FUNC_47(VAR_29);
    VAR_33[VAR_34] = 0;

    if (VAR_34 > 0) {
        char VAR_35[128 + VAR_2];
        FUNC_24(VAR_35, sizeof(VAR_35), "[i] your current username is: %s", VAR_33);
        FUNC_16(VAR_35);
    }

    time_t VAR_36 = FUNC_28(((void*)0));

    while (1) {
        if (VAR_26 == 0) {
            if (FUNC_45(VAR_29)) {
                FUNC_16("[i] connected to DHT");
                VAR_26 = 1;
            } else {
                time_t VAR_37 = FUNC_28(((void*)0));

                if (VAR_36 + 10 < VAR_37) {
                    VAR_36 = VAR_37;
                    FUNC_30(VAR_29, VAR_23[VAR_25 + 1], VAR_30, VAR_31, ((void*)0));
                }
            }
        }

        FUNC_43(VAR_29);
        FUNC_3();

        int VAR_38 = FUNC_29(VAR_29);

        if (VAR_38 == VAR_0 || VAR_38 == 27)
            continue;

        FUNC_9(VAR_17, VAR_21, VAR_20);

        if ((VAR_38 == 0x0d) || (VAR_38 == 0x0a)) {
            FUNC_14(VAR_29, VAR_7);
            FUNC_26(VAR_7, "");
        } else if (VAR_38 == 8 || VAR_38 == 127) {
            VAR_7[FUNC_27(VAR_7) - 1] = '\0';
        } else if (FUNC_12(VAR_38) || FUNC_13(VAR_38) || VAR_38 == ' ') {
            FUNC_0(VAR_7, (char) VAR_38);
        }
    }

    FUNC_7(VAR_31);
    FUNC_22(VAR_29, VAR_27);
    FUNC_44(VAR_29);
    FUNC_4();
    return 0;
}
