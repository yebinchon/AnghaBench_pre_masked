
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,int ,int,int,void*) ;
 int VAR_8 ;
 char* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_9, int VAR_10, int VAR_11, int VAR_12) {
    int VAR_13 = 0;
    int VAR_14, VAR_15;

    if (VAR_12 & VAR_0)
        VAR_13 |= VAR_3;
    if (VAR_12 & VAR_1)
        VAR_13 |= VAR_4;

    if (VAR_7)
        FUNC_0(VAR_8, "%s: port_associate(%d, 0x%x) = ", VAR_9, VAR_11, VAR_13);

    VAR_14 = FUNC_1(VAR_10, VAR_5, VAR_11, VAR_13,
        (void *)(uintptr_t)VAR_12);
    VAR_15 = VAR_6;

    if (VAR_7)
        FUNC_0(VAR_8, "%d (%s)\n", VAR_14, VAR_14 == 0 ? "no error" : FUNC_2(VAR_15));

    if (VAR_14 == -1) {
        FUNC_0(VAR_8, "%s: port_associate: %s\n", VAR_9, FUNC_2(VAR_15));

        if (VAR_15 == VAR_2)
            FUNC_0(VAR_8, "aeApiAssociate: event port limit exceeded.");
    }

    return VAR_14;
}
