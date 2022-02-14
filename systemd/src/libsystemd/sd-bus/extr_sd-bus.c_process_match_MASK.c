
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int match_callbacks_modified; int match_callbacks; } ;
typedef TYPE_1__ sd_bus_message ;
typedef TYPE_1__ sd_bus ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(sd_bus *VAR_0, sd_bus_message *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        do {
                VAR_0->match_callbacks_modified = 0;

                VAR_2 = FUNC_1(VAR_0, &VAR_0->match_callbacks, VAR_1);
                if (VAR_2 != 0)
                        return VAR_2;

        } while (VAR_0->match_callbacks_modified);

        return 0;
}
