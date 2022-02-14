
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union in_addr_union {int dummy; } in_addr_union ;
struct TYPE_2__ {int family; int remote; int local; } ;
typedef TYPE_1__ Tunnel ;


 int VAR_0 ;
 union in_addr_union VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,int*,union in_addr_union*) ;
 scalar_t__ FUNC_2 (int,int *) ;
 int FUNC_3 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

int FUNC_5(const char *VAR_3,
                                const char *VAR_4,
                                unsigned VAR_5,
                                const char *VAR_6,
                                unsigned VAR_7,
                                const char *VAR_8,
                                int VAR_9,
                                const char *VAR_10,
                                void *VAR_11,
                                void *VAR_12) {
        Tunnel *VAR_13 = VAR_12;
        union in_addr_union *VAR_14 = VAR_11, VAR_15;
        int VAR_16, VAR_17;

        FUNC_0(VAR_4);
        FUNC_0(VAR_8);
        FUNC_0(VAR_10);
        FUNC_0(VAR_11);







        if (FUNC_4(VAR_10, "any")) {
                *VAR_14 = VAR_1;




                if (VAR_13->family != VAR_0 &&
                    FUNC_2(VAR_13->family, &VAR_13->local) != 0 &&
                    FUNC_2(VAR_13->family, &VAR_13->remote) != 0)
                        VAR_13->family = VAR_0;
                return 0;
        }

        VAR_16 = FUNC_1(VAR_10, &VAR_17, &VAR_15);
        if (VAR_16 < 0) {
                FUNC_3(VAR_3, VAR_2, VAR_4, VAR_5, VAR_16,
                           "Tunnel address \"%s\" invalid, ignoring assignment: %m", VAR_10);
                return 0;
        }

        if (VAR_13->family != VAR_0 && VAR_13->family != VAR_17) {
                FUNC_3(VAR_3, VAR_2, VAR_4, VAR_5, 0,
                           "Tunnel addresses incompatible, ignoring assignment: %s", VAR_10);
                return 0;
        }

        VAR_13->family = VAR_17;
        *VAR_14 = VAR_15;
        return 0;
}
