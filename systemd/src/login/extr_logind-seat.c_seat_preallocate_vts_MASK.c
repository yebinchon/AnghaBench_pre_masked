
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int n_autovts; struct TYPE_5__* manager; } ;
typedef TYPE_1__ Seat ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,unsigned int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (unsigned int) ;

int FUNC_5(Seat *VAR_0) {
        int VAR_1 = 0;
        unsigned VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_0->manager);

        if (VAR_0->manager->n_autovts <= 0)
                return 0;

        if (!FUNC_3(VAR_0))
                return 0;

        FUNC_1("Preallocating VTs...");

        for (VAR_2 = 1; VAR_2 <= VAR_0->manager->n_autovts; VAR_2++) {
                int VAR_3;

                VAR_3 = FUNC_4(VAR_2);
                if (VAR_3 < 0)
                        VAR_1 = FUNC_2(VAR_3, "Failed to preallocate VT %u: %m", VAR_2);
        }

        return VAR_1;
}
