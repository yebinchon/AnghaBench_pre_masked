
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union in_addr_union {int dummy; } in_addr_union ;
struct TYPE_2__ {int remote_family; } ;
typedef TYPE_1__ Geneve ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,int*,union in_addr_union*) ;
 int FUNC_2 (int,union in_addr_union*) ;
 int FUNC_3 (char const*,int ,char const*,unsigned int,int,char*,char const*,char const*) ;

int FUNC_4(const char *VAR_1,
                                const char *VAR_2,
                                unsigned VAR_3,
                                const char *VAR_4,
                                unsigned VAR_5,
                                const char *VAR_6,
                                int VAR_7,
                                const char *VAR_8,
                                void *VAR_9,
                                void *VAR_10) {
        Geneve *VAR_11 = VAR_10;
        union in_addr_union *VAR_12 = VAR_9, VAR_13;
        int VAR_14, VAR_15;

        FUNC_0(VAR_2);
        FUNC_0(VAR_6);
        FUNC_0(VAR_8);
        FUNC_0(VAR_9);

        VAR_14 = FUNC_1(VAR_8, &VAR_15, &VAR_13);
        if (VAR_14 < 0) {
                FUNC_3(VAR_1, VAR_0, VAR_2, VAR_3, VAR_14, "geneve '%s' address is invalid, ignoring assignment: %s", VAR_6, VAR_8);
                return 0;
        }

        VAR_14 = FUNC_2(VAR_15, &VAR_13);
        if (VAR_14 > 0) {
                FUNC_3(VAR_1, VAR_0, VAR_2, VAR_3, 0, "geneve invalid multicast '%s' address, ignoring assignment: %s", VAR_6, VAR_8);
                return 0;
        }

        VAR_11->remote_family = VAR_15;
        *VAR_12 = VAR_13;

        return 0;
}
