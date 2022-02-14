
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* state_file; scalar_t__ unit; } ;
typedef TYPE_1__ Machine ;


 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(Machine *VAR_0) {
        FUNC_0(VAR_0);

        if (VAR_0->unit) {
                char *VAR_1;

                VAR_1 = FUNC_1("/run/systemd/machines/unit:", VAR_0->unit);
                (void) FUNC_2(VAR_1);
        }

        if (VAR_0->state_file)
                (void) FUNC_2(VAR_0->state_file);
}
