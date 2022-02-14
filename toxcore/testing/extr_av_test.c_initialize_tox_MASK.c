
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct Tox_Options {int ipv6_enabled; int start_port; scalar_t__ end_port; } ;
typedef int ToxAV ;
typedef int Tox ;
typedef scalar_t__ TOX_ERR_NEW ;
typedef scalar_t__ TOXAV_ERR_NEW ;
typedef int CallControl ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long long FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,int*,int*,int,int *) ;
 scalar_t__ FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (struct Tox_Options*,scalar_t__*) ;
 int FUNC_9 (struct Tox_Options*) ;
 int FUNC_10 (int *,int*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int *) ;
 int FUNC_13 (int *,int ,int *) ;
 int FUNC_14 (int *,int ,int *) ;
 int FUNC_15 (int *,int ,int *) ;
 int FUNC_16 (int *,int ,int *) ;
 int * FUNC_17 (int *,scalar_t__*) ;

void FUNC_18(Tox **VAR_10, ToxAV **VAR_11, CallControl *VAR_12, ToxAV **VAR_13, CallControl *VAR_14)
{
    Tox *VAR_15;
    Tox *VAR_16;

    struct Tox_Options VAR_17;
    FUNC_9(&VAR_17);

    VAR_17.end_port = 0;
    VAR_17.ipv6_enabled = 0;

    {
        TOX_ERR_NEW VAR_18;

        VAR_17.start_port = 33445;
        *VAR_10 = FUNC_8(&VAR_17, &VAR_18);
        FUNC_0(VAR_18 == VAR_3);

        VAR_17.start_port = 33455;
        VAR_15 = FUNC_8(&VAR_17, &VAR_18);
        FUNC_0(VAR_18 == VAR_3);

        VAR_17.start_port = 33465;
        VAR_16 = FUNC_8(&VAR_17, &VAR_18);
        FUNC_0(VAR_18 == VAR_3);
    }

    FUNC_2("Created 3 instances of Tox\n");
    FUNC_2("Preparing network...\n");
    long long unsigned int VAR_19 = FUNC_3(((void*)0));

    uint32_t VAR_20 = 974536;
    uint8_t VAR_21[VAR_1];

    FUNC_4(VAR_15, VAR_4, &VAR_20);
    FUNC_10(VAR_15, VAR_21);


    FUNC_0(FUNC_5(VAR_16, VAR_21, (uint8_t *)"gentoo", 7, ((void*)0)) != (uint32_t) ~0);

    uint8_t VAR_22 = 1;

    while (1) {
        FUNC_7(*VAR_10);
        FUNC_7(VAR_15);
        FUNC_7(VAR_16);

        if (FUNC_11(*VAR_10) &&
                FUNC_11(VAR_15) &&
                FUNC_11(VAR_16) && VAR_22) {
            FUNC_2("Toxes are online, took %llu seconds\n", FUNC_3(((void*)0)) - VAR_19);
            VAR_22 = 0;
        }

        if (FUNC_6(VAR_15, 0, ((void*)0)) == VAR_2 &&
                FUNC_6(VAR_16, 0, ((void*)0)) == VAR_2)
            break;

        FUNC_1(20);
    }


    TOXAV_ERR_NEW VAR_23;
    *VAR_11 = FUNC_17(VAR_15, &VAR_23);
    FUNC_0(VAR_23 == VAR_0);

    *VAR_13 = FUNC_17(VAR_16, &VAR_23);
    FUNC_0(VAR_23 == VAR_0);



    FUNC_14(*VAR_11, VAR_6, VAR_12);
    FUNC_15(*VAR_11, VAR_7, VAR_12);
    FUNC_13(*VAR_11, VAR_5, VAR_12);
    FUNC_16(*VAR_11, VAR_9, VAR_12);
    FUNC_12(*VAR_11, VAR_8, VAR_12);


    FUNC_14(*VAR_13, VAR_6, VAR_14);
    FUNC_15(*VAR_13, VAR_7, VAR_14);
    FUNC_13(*VAR_13, VAR_5, VAR_14);
    FUNC_16(*VAR_13, VAR_9, VAR_14);
    FUNC_12(*VAR_13, VAR_8, VAR_14);


    FUNC_2("Created 2 instances of ToxAV\n");
    FUNC_2("All set after %llu seconds!\n", FUNC_3(((void*)0)) - VAR_19);
}
