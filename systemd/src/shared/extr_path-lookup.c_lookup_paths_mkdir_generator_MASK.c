
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int generator_late; int generator_early; int generator; } ;
typedef TYPE_1__ LookupPaths ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(LookupPaths *VAR_1) {
        int VAR_2, VAR_3;

        FUNC_0(VAR_1);

        if (!VAR_1->generator || !VAR_1->generator_early || !VAR_1->generator_late)
                return -VAR_0;

        VAR_2 = FUNC_1(VAR_1->generator, 0755);

        VAR_3 = FUNC_1(VAR_1->generator_early, 0755);
        if (VAR_3 < 0 && VAR_2 >= 0)
                VAR_2 = VAR_3;

        VAR_3 = FUNC_1(VAR_1->generator_late, 0755);
        if (VAR_3 < 0 && VAR_2 >= 0)
                VAR_2 = VAR_3;

        return VAR_2;
}
