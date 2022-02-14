
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bind_to_device; } ;
typedef TYPE_1__ Socket ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (char const*,int ,char const*,unsigned int,int ,char*,char const*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

int FUNC_8(
                const char* VAR_1,
                const char *VAR_2,
                unsigned VAR_3,
                const char *VAR_4,
                unsigned VAR_5,
                const char *VAR_6,
                int VAR_7,
                const char *VAR_8,
                void *VAR_9,
                void *VAR_10) {

        Socket *VAR_11 = VAR_9;

        FUNC_0(VAR_2);
        FUNC_0(VAR_6);
        FUNC_0(VAR_8);
        FUNC_0(VAR_9);

        if (FUNC_3(VAR_8) || FUNC_7(VAR_8, "*")) {
                VAR_11->bind_to_device = FUNC_6(VAR_11->bind_to_device);
                return 0;
        }

        if (!FUNC_2(VAR_8)) {
                FUNC_5(VAR_1, VAR_0, VAR_2, VAR_3, 0, "Invalid interface name, ignoring: %s", VAR_8);
                return 0;
        }

        if (FUNC_1(&VAR_11->bind_to_device, VAR_8) < 0)
                return FUNC_4();

        return 0;
}
