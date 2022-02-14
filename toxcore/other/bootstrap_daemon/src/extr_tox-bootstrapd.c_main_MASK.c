
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef char uint16_t ;
struct TYPE_11__ {int net; int self_public_key; int self_secret_key; } ;
typedef int TCP_Server ;
typedef int Onion_Announce ;
typedef int Onion ;
typedef int Networking_Core ;
typedef int LOG_BACKEND ;
typedef int IP ;
typedef TYPE_1__ DHT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (char*,TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (int ,int ,int *,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char**,char**,int*,int*,int*,int*,int*,char**,int*,int*,char**) ;
 int FUNC_11 (int,char**,char**,int *,int*) ;
 char FUNC_12 (int) ;
 int FUNC_13 (int *,int) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (TYPE_1__*,char*) ;
 int FUNC_17 (int ) ;
 TYPE_1__* FUNC_18 (int *) ;
 int * FUNC_19 (int,int,char*,int ,int *) ;
 int * FUNC_20 (int ,int) ;
 int * FUNC_21 (TYPE_1__*) ;
 int * FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (char const,TYPE_1__*) ;
 scalar_t__ FUNC_26 (char*) ;
 int FUNC_27 (int) ;
 int FUNC_28 () ;
 int FUNC_29 (int ,char*,...) ;

int FUNC_30(int VAR_11, char *VAR_12[])
{
    FUNC_27(077);
    char *VAR_13;
    LOG_BACKEND VAR_14;
    bool VAR_15;


    VAR_14 = FUNC_15(VAR_10) ? VAR_3 : VAR_4;

    FUNC_23(VAR_14);
    FUNC_11(VAR_11, VAR_12, &VAR_13, &VAR_14, &VAR_15);
    FUNC_5();

    FUNC_23(VAR_14);

    FUNC_29(VAR_6, "Running \"%s\" version %lu.\n", VAR_0, VAR_1);

    char *VAR_16, *VAR_17;
    int VAR_18;
    int VAR_19;
    int VAR_20;
    int VAR_21;
    int VAR_22;
    uint16_t *VAR_23;
    int VAR_24;
    int VAR_25;
    char *VAR_26;

    if (FUNC_10(VAR_13, &VAR_16, &VAR_17, &VAR_18, &VAR_19, &VAR_20,
                           &VAR_21, &VAR_22, &VAR_23, &VAR_24, &VAR_25, &VAR_26)) {
        FUNC_29(VAR_6, "General config read successfully\n");
    } else {
        FUNC_29(VAR_5, "Couldn't read config file: %s. Exiting.\n", VAR_13);
        return 1;
    }

    if (VAR_18 < VAR_9 || VAR_18 > VAR_8) {
        FUNC_29(VAR_5, "Invalid port: %d, should be in [%d, %d]. Exiting.\n", VAR_18, VAR_9,
                  VAR_8);
        return 1;
    }

    if (!VAR_15) {
        FUNC_6(VAR_14, VAR_16);
    }

    FUNC_9(VAR_16);

    IP VAR_27;
    FUNC_13(&VAR_27, VAR_19);

    Networking_Core *VAR_28 = FUNC_20(VAR_27, VAR_18);

    if (VAR_28 == ((void*)0)) {
        if (VAR_19 && VAR_20) {
            FUNC_29(VAR_7, "Couldn't initialize IPv6 networking. Falling back to using IPv4.\n");
            VAR_19 = 0;
            FUNC_13(&VAR_27, VAR_19);
            VAR_28 = FUNC_20(VAR_27, VAR_18);

            if (VAR_28 == ((void*)0)) {
                FUNC_29(VAR_5, "Couldn't fallback to IPv4. Exiting.\n");
                return 1;
            }
        } else {
            FUNC_29(VAR_5, "Couldn't initialize networking. Exiting.\n");
            return 1;
        }
    }

    DHT *VAR_29 = FUNC_18(VAR_28);

    if (VAR_29 == ((void*)0)) {
        FUNC_29(VAR_5, "Couldn't initialize Tox DHT instance. Exiting.\n");
        return 1;
    }

    Onion *VAR_30 = FUNC_21(VAR_29);
    Onion_Announce *VAR_31 = FUNC_22(VAR_29);

    if (!(VAR_30 && VAR_31)) {
        FUNC_29(VAR_5, "Couldn't initialize Tox Onion. Exiting.\n");
        return 1;
    }

    if (VAR_25) {
        if (FUNC_4(VAR_29->net, VAR_1, (uint8_t *)VAR_26, FUNC_26(VAR_26) + 1) == 0) {
            FUNC_29(VAR_6, "Set MOTD successfully.\n");
        } else {
            FUNC_29(VAR_5, "Couldn't set MOTD: %s. Exiting.\n", VAR_26);
            return 1;
        }

        FUNC_9(VAR_26);
    }

    if (FUNC_16(VAR_29, VAR_17)) {
        FUNC_29(VAR_6, "Keys are managed successfully.\n");
    } else {
        FUNC_29(VAR_5, "Couldn't read/write: %s. Exiting.\n", VAR_17);
        return 1;
    }

    FUNC_9(VAR_17);

    TCP_Server *VAR_32 = ((void*)0);

    if (VAR_22) {
        if (VAR_24 == 0) {
            FUNC_29(VAR_5, "No TCP relay ports read. Exiting.\n");
            return 1;
        }

        VAR_32 = FUNC_19(VAR_19, VAR_24, VAR_23, VAR_29->self_secret_key, VAR_30);


        FUNC_9(VAR_23);

        if (VAR_32 != ((void*)0)) {
            FUNC_29(VAR_6, "Initialized Tox TCP server successfully.\n");
        } else {
            FUNC_29(VAR_5, "Couldn't initialize Tox TCP server. Exiting.\n");
            return 1;
        }
    }

    if (FUNC_3(VAR_13, VAR_29, VAR_19)) {
        FUNC_29(VAR_6, "List of bootstrap nodes read successfully.\n");
    } else {
        FUNC_29(VAR_5, "Couldn't read list of bootstrap nodes in %s. Exiting.\n", VAR_13);
        return 1;
    }

    FUNC_24(VAR_29->self_public_key);

    uint64_t VAR_33 = 0;
    const uint16_t VAR_34 = FUNC_12(VAR_18);

    int VAR_35 = 1;

    if (VAR_21) {
        FUNC_1(VAR_29);
        FUNC_29(VAR_6, "Initialized LAN discovery successfully.\n");
    }

    while (1) {
        FUNC_7(VAR_29);

        if (VAR_21 && FUNC_14(VAR_33, VAR_2)) {
            FUNC_25(VAR_34, VAR_29);
            VAR_33 = FUNC_28();
        }

        if (VAR_22) {
            FUNC_8(VAR_32);
        }

        FUNC_17(VAR_29->net);

        if (VAR_35 && FUNC_0(VAR_29)) {
            FUNC_29(VAR_6, "Connected to another bootstrap node successfully.\n");
            VAR_35 = 0;
        }

        FUNC_2(30);
    }

    return 1;
}
