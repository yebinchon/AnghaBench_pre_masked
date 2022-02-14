
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union in_addr_union {int dummy; } in_addr_union ;
struct TYPE_2__ {scalar_t__ family; scalar_t__ local_address_type; int local; int remote; } ;
typedef TYPE_1__ L2tpTunnel ;
typedef scalar_t__ L2tpLocalAddressType ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__,char const*,union in_addr_union*) ;
 int FUNC_2 (char const*,scalar_t__*,union in_addr_union*) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char const*,int ,char const*,unsigned int,int,char*,char const*,char const*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

int FUNC_8(
                const char *VAR_4,
                const char *VAR_5,
                unsigned VAR_6,
                const char *VAR_7,
                unsigned VAR_8,
                const char *VAR_9,
                int VAR_10,
                const char *VAR_11,
                void *VAR_12,
                void *VAR_13) {

        L2tpTunnel *VAR_14 = VAR_13;
        union in_addr_union *VAR_15 = VAR_12;
        int VAR_16;

        FUNC_0(VAR_5);
        FUNC_0(VAR_9);
        FUNC_0(VAR_11);
        FUNC_0(VAR_12);

        if (FUNC_7(VAR_9, "Local")) {
                L2tpLocalAddressType VAR_17;

                if (FUNC_4(VAR_11))
                        VAR_17 = VAR_3;
                else
                        VAR_17 = FUNC_5(VAR_11);

                if (VAR_17 >= 0) {
                        if (FUNC_3(VAR_14->family, &VAR_14->remote) != 0)

                                VAR_14->family = VAR_0;

                        VAR_14->local = VAR_1;
                        VAR_14->local_address_type = VAR_17;

                        return 0;
                }
        }

        if (VAR_14->family == VAR_0)
                VAR_16 = FUNC_2(VAR_11, &VAR_14->family, VAR_15);
        else
                VAR_16 = FUNC_1(VAR_14->family, VAR_11, VAR_15);
        if (VAR_16 < 0) {
                FUNC_6(VAR_4, VAR_2, VAR_5, VAR_6, VAR_16,
                           "Invalid L2TP Tunnel address specified in %s='%s', ignoring assignment: %m", VAR_9, VAR_11);
                return 0;
        }

        return 0;
}
