
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union in_addr_union {int in6; } ;
typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ sixrd_prefixlen; int sixrd_prefix; } ;
typedef TYPE_1__ Tunnel ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int ,union in_addr_union*,scalar_t__*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;

int FUNC_3(const char* VAR_2,
                            const char *VAR_3,
                            unsigned VAR_4,
                            const char *VAR_5,
                            unsigned VAR_6,
                            const char *VAR_7,
                            int VAR_8,
                            const char *VAR_9,
                            void *VAR_10,
                            void *VAR_11) {
        Tunnel *VAR_12 = VAR_11;

        FUNC_0(VAR_3);
        FUNC_0(VAR_7);
        FUNC_0(VAR_9);

        union in_addr_union VAR_13;
        uint8_t VAR_14;
        int VAR_15;

        VAR_15 = FUNC_1(VAR_9, VAR_0, &VAR_13, &VAR_14);
        if (VAR_15 < 0) {
                FUNC_2(VAR_2, VAR_1, VAR_3, VAR_4, VAR_15, "Failed to parse 6rd prefix \"%s\", ignoring: %m", VAR_9);
                return 0;
        }
        if (VAR_14 == 0) {
                FUNC_2(VAR_2, VAR_1, VAR_3, VAR_4, 0, "6rd prefix length of \"%s\" must be greater than zero, ignoring", VAR_9);
                return 0;
        }

        VAR_12->sixrd_prefix = VAR_13.in6;
        VAR_12->sixrd_prefixlen = VAR_14;

        return 0;
}
