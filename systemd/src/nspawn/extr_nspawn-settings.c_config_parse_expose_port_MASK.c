
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int expose_ports; } ;
typedef TYPE_1__ Settings ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;

int FUNC_3(
                const char *VAR_2,
                const char *VAR_3,
                unsigned VAR_4,
                const char *VAR_5,
                unsigned VAR_6,
                const char *VAR_7,
                int VAR_8,
                const char *VAR_9,
                void *VAR_10,
                void *VAR_11) {

        Settings *VAR_12 = VAR_10;
        int VAR_13;

        FUNC_0(VAR_3);
        FUNC_0(VAR_7);
        FUNC_0(VAR_9);

        VAR_13 = FUNC_1(&VAR_12->expose_ports, VAR_9);
        if (VAR_13 == -VAR_0) {
                FUNC_2(VAR_2, VAR_1, VAR_3, VAR_4, VAR_13, "Duplicate port specification, ignoring: %s", VAR_9);
                return 0;
        }
        if (VAR_13 < 0) {
                FUNC_2(VAR_2, VAR_1, VAR_3, VAR_4, VAR_13, "Failed to parse host port %s: %m", VAR_9);
                return 0;
        }

        return 0;
}
