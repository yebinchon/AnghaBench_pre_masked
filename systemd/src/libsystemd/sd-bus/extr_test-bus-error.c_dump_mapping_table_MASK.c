
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ code; int name; } ;
typedef TYPE_1__ sd_bus_error_map ;


 TYPE_1__* FUNC_0 (TYPE_1__ const*,int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ const* VAR_1 ;
 TYPE_1__ const* VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void) {
        const sd_bus_error_map *VAR_3;

        FUNC_2("----- errno mappings ------\n");
        VAR_3 = FUNC_0(VAR_1, sizeof(void*));
        while (VAR_3 < VAR_2) {

                if (VAR_3->code == VAR_0) {
                        VAR_3 = FUNC_0(VAR_3 + 1, sizeof(void*));
                        continue;
                }

                FUNC_2("%s -> %i/%s\n", FUNC_3(VAR_3->name), VAR_3->code, FUNC_3(FUNC_1(VAR_3->code)));
                VAR_3++;
        }
        FUNC_2("---------------------------\n");
}
