
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int sd_netlink_message ;
struct TYPE_7__ {scalar_t__ kernel_operstate; unsigned int flags; } ;
typedef TYPE_1__ Link ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,char*,unsigned int,...) ;
 int FUNC_4 (TYPE_1__*,int,char*) ;
 int FUNC_5 (int *,int ,scalar_t__*) ;
 int FUNC_6 (int *,unsigned int*) ;

__attribute__((used)) static int FUNC_7(Link *VAR_20, sd_netlink_message *VAR_21, bool VAR_22) {
        unsigned VAR_23, VAR_24, VAR_25, VAR_26;
        uint8_t VAR_27;
        int VAR_28;

        FUNC_1(VAR_20);

        VAR_28 = FUNC_6(VAR_21, &VAR_23);
        if (VAR_28 < 0)
                return FUNC_4(VAR_20, VAR_28, "Could not get link flags: %m");

        VAR_28 = FUNC_5(VAR_21, VAR_19, &VAR_27);
        if (VAR_28 < 0)


                VAR_27 = VAR_20->kernel_operstate;

        if (!VAR_22 && (VAR_20->flags == VAR_23) && (VAR_20->kernel_operstate == VAR_27))
                return 0;

        if (VAR_20->flags != VAR_23) {
                FUNC_3(VAR_20, "Flags change:%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",
                               FUNC_0("LOOPBACK", VAR_7, VAR_20->flags, VAR_23),
                               FUNC_0("MASTER", VAR_9, VAR_20->flags, VAR_23),
                               FUNC_0("SLAVE", VAR_17, VAR_20->flags, VAR_23),
                               FUNC_0("UP", VAR_18, VAR_20->flags, VAR_23),
                               FUNC_0("DORMANT", VAR_4, VAR_20->flags, VAR_23),
                               FUNC_0("LOWER_UP", VAR_8, VAR_20->flags, VAR_23),
                               FUNC_0("RUNNING", VAR_16, VAR_20->flags, VAR_23),
                               FUNC_0("MULTICAST", VAR_10, VAR_20->flags, VAR_23),
                               FUNC_0("BROADCAST", VAR_2, VAR_20->flags, VAR_23),
                               FUNC_0("POINTOPOINT", VAR_13, VAR_20->flags, VAR_23),
                               FUNC_0("PROMISC", VAR_15, VAR_20->flags, VAR_23),
                               FUNC_0("ALLMULTI", VAR_0, VAR_20->flags, VAR_23),
                               FUNC_0("PORTSEL", VAR_14, VAR_20->flags, VAR_23),
                               FUNC_0("AUTOMEDIA", VAR_1, VAR_20->flags, VAR_23),
                               FUNC_0("DYNAMIC", VAR_5, VAR_20->flags, VAR_23),
                               FUNC_0("NOARP", VAR_11, VAR_20->flags, VAR_23),
                               FUNC_0("NOTRAILERS", VAR_12, VAR_20->flags, VAR_23),
                               FUNC_0("DEBUG", VAR_3, VAR_20->flags, VAR_23),
                               FUNC_0("ECHO", VAR_6, VAR_20->flags, VAR_23));

                VAR_26 = ~(VAR_7 | VAR_9 | VAR_17 | VAR_18 |
                                  VAR_4 | VAR_8 | VAR_16 |
                                  VAR_10 | VAR_2 | VAR_13 |
                                  VAR_15 | VAR_0 | VAR_14 |
                                  VAR_1 | VAR_5 | VAR_11 |
                                  VAR_12 | VAR_3 | VAR_6);
                VAR_24 = ((VAR_20->flags ^ VAR_23) & VAR_23 & VAR_26);
                VAR_25 = ((VAR_20->flags ^ VAR_23) & VAR_20->flags & VAR_26);



                if (VAR_24)
                        FUNC_3(VAR_20,
                                       "Unknown link flags gained: %#.5x (ignoring)",
                                       VAR_24);

                if (VAR_25)
                        FUNC_3(VAR_20,
                                       "Unknown link flags lost: %#.5x (ignoring)",
                                       VAR_25);
        }

        VAR_20->flags = VAR_23;
        VAR_20->kernel_operstate = VAR_27;

        FUNC_2(VAR_20, 1);

        return 0;
}
