
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ igmp_version; } ;
typedef TYPE_1__ Bridge ;


 int FUNC_0 (scalar_t__,int,int) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_4 (char const*,scalar_t__*) ;

int FUNC_5(
                const char *VAR_1,
                const char *VAR_2,
                unsigned VAR_3,
                const char *VAR_4,
                unsigned VAR_5,
                const char *VAR_6,
                int VAR_7,
                const char *VAR_8,
                void *VAR_9,
                void *VAR_10) {

        Bridge *VAR_11 = VAR_10;
        uint8_t VAR_12;
        int VAR_13;

        FUNC_1(VAR_2);
        FUNC_1(VAR_6);
        FUNC_1(VAR_8);
        FUNC_1(VAR_9);

        if (FUNC_2(VAR_8)) {
                VAR_11->igmp_version = 0;
                return 0;
        }

        VAR_13 = FUNC_4(VAR_8, &VAR_12);
        if (VAR_13 < 0) {
                FUNC_3(VAR_1, VAR_0, VAR_2, VAR_3, VAR_13,
                           "Failed to parse bridge's multicast IGMP version number '%s', ignoring assignment: %m",
                           VAR_8);
                return 0;
        }
        if (!FUNC_0(VAR_12, 2, 3)) {
                FUNC_3(VAR_1, VAR_0, VAR_2, VAR_3, 0,
                           "Invalid bridge's multicast IGMP version number '%s', ignoring assignment.", VAR_8);
                return 0;
        }

        VAR_11->igmp_version = VAR_12;

        return 0;
}
