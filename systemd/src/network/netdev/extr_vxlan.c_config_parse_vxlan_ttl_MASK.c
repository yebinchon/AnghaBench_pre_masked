
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inherit; unsigned int ttl; } ;
typedef TYPE_1__ VxLan ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_2 (char const*,unsigned int*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

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
        VxLan *VAR_11 = VAR_10;
        unsigned VAR_12;
        int VAR_13;

        FUNC_0(VAR_2);
        FUNC_0(VAR_6);
        FUNC_0(VAR_8);
        FUNC_0(VAR_9);

        if (FUNC_3(VAR_8, "inherit"))
                VAR_11->inherit = 1;
        else {
                VAR_13 = FUNC_2(VAR_8, &VAR_12);
                if (VAR_13 < 0) {
                        FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3, VAR_13,
                                   "Failed to parse VXLAN TTL '%s', ignoring assignment: %m", VAR_8);
                        return 0;
                }

                if (VAR_12 > 255) {
                        FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3, 0,
                                   "Invalid VXLAN TTL '%s'. TTL must be <= 255. Ignoring assignment.", VAR_8);
                        return 0;
                }

                VAR_11->ttl = VAR_12;
        }

        return 0;
}
