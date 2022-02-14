
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n_devices; int ** devices; } ;
typedef TYPE_1__ sd_device_enumerator ;
typedef int sd_device ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (int *,char const**) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(sd_device_enumerator *VAR_0) {
        sd_device **VAR_1, **VAR_2, **VAR_3;

        FUNC_0(VAR_0);

        if (VAR_0->n_devices <= 1)
                return;

        VAR_1 = VAR_0->devices + 1;
        VAR_2 = VAR_0->devices;
        VAR_3 = VAR_0->devices + VAR_0->n_devices;

        for (; VAR_1 < VAR_3; VAR_1++) {
                const char *VAR_4, *VAR_5;

                FUNC_1(FUNC_3(*VAR_1, &VAR_4) >= 0);
                FUNC_1(FUNC_3(*VAR_2, &VAR_5) >= 0);

                if (FUNC_2(VAR_4, VAR_5))
                        FUNC_4(*VAR_1);
                else
                        *(++VAR_2) = *VAR_1;
        }

        VAR_0->n_devices = VAR_2 - VAR_0->devices + 1;
}
