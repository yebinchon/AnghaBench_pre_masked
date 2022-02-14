
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int config_t ;
typedef int config_setting_t ;
typedef int DHT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char const*,int,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,char const*) ;
 scalar_t__ FUNC_7 (int *,char const*) ;
 int * FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,char const*,int*) ;
 scalar_t__ FUNC_11 (int *,char const*,char const**) ;
 int FUNC_12 (int *,int ) ;
 int VAR_6 ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (char*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 (int ,char*,...) ;

int FUNC_18(const char *VAR_7, DHT *VAR_8, int VAR_9)
{
    const char *VAR_10 = "bootstrap_nodes";

    const char *VAR_11 = "public_key";
    const char *VAR_12 = "port";
    const char *VAR_13 = "address";

    config_t VAR_14;

    FUNC_5(&VAR_14);

    if (FUNC_7(&VAR_14, VAR_7) == VAR_0) {
        FUNC_17(VAR_1, "%s:%d - %s\n", FUNC_2(&VAR_14), FUNC_3(&VAR_14), FUNC_4(&VAR_14));
        FUNC_1(&VAR_14);
        return 0;
    }

    config_setting_t *VAR_15 = FUNC_6(&VAR_14, VAR_10);

    if (VAR_15 == ((void*)0)) {
        FUNC_17(VAR_3, "No '%s' setting in the configuration file. Skipping bootstrapping.\n",
                  VAR_10);
        FUNC_1(&VAR_14);
        return 1;
    }

    if (FUNC_9(VAR_15) == 0) {
        FUNC_17(VAR_3, "No bootstrap nodes found. Skipping bootstrapping.\n");
        FUNC_1(&VAR_14);
        return 1;
    }

    int VAR_16;
    const char *VAR_17;
    const char *VAR_18;

    config_setting_t *VAR_19;

    int VAR_20 = 0;

    while (FUNC_9(VAR_15)) {

        VAR_19 = FUNC_8(VAR_15, 0);

        if (VAR_19 == ((void*)0)) {
            FUNC_1(&VAR_14);
            return 0;
        }


        if (FUNC_11(VAR_19, VAR_11, &VAR_18) == VAR_0) {
            FUNC_17(VAR_3, "Bootstrap node #%d: Couldn't find '%s' setting. Skipping the node.\n", VAR_20,
                      VAR_11);
            goto next;
        }

        if (FUNC_10(VAR_19, VAR_12, &VAR_16) == VAR_0) {
            FUNC_17(VAR_3, "Bootstrap node #%d: Couldn't find '%s' setting. Skipping the node.\n", VAR_20, VAR_12);
            goto next;
        }

        if (FUNC_11(VAR_19, VAR_13, &VAR_17) == VAR_0) {
            FUNC_17(VAR_3, "Bootstrap node #%d: Couldn't find '%s' setting. Skipping the node.\n", VAR_20, VAR_13);
            goto next;
        }


        if (FUNC_16(VAR_18) != VAR_6 * 2) {
            FUNC_17(VAR_3, "Bootstrap node #%d: Invalid '%s': %s. Skipping the node.\n", VAR_20, VAR_11,
                      VAR_18);
            goto next;
        }

        if (VAR_16 < VAR_5 || VAR_16 > VAR_4) {
            FUNC_17(VAR_3, "Bootstrap node #%d: Invalid '%s': %d, should be in [%d, %d]. Skipping the node.\n", VAR_20,
                      VAR_12,
                      VAR_16, VAR_5, VAR_4);
            goto next;
        }

        uint8_t *VAR_21 = FUNC_14((char *)VAR_18);
        const int VAR_22 = FUNC_0(VAR_8, VAR_17, VAR_9, FUNC_15(VAR_16),
                                     VAR_21);
        FUNC_13(VAR_21);

        if (!VAR_22) {
            FUNC_17(VAR_3, "Bootstrap node #%d: Invalid '%s': %s. Skipping the node.\n", VAR_20, VAR_13, VAR_17);
            goto next;
        }

        FUNC_17(VAR_2, "Successfully added bootstrap node #%d: %s:%d %s\n", VAR_20, VAR_17, VAR_16, VAR_18);

next:



        FUNC_12(VAR_15, 0);
        VAR_20++;
    }

    FUNC_1(&VAR_14);

    return 1;
}
