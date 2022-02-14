
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_id128_t ;
struct TYPE_4__ {int boot_id_field; } ;
typedef TYPE_1__ Server ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(Server *VAR_0) {
        sd_id128_t VAR_1;
        int VAR_2;

        FUNC_0(VAR_0);

        VAR_2 = FUNC_1(&VAR_1);
        if (VAR_2 < 0)
                return;

        FUNC_2(VAR_1, FUNC_3(VAR_0->boot_id_field, "_BOOT_ID="));
}
