
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bond; } ;
typedef TYPE_1__ Network ;
typedef int Context ;


 int FUNC_0 (int *,char const*) ;
 TYPE_1__* FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char const*,TYPE_1__**) ;

__attribute__((used)) static int FUNC_3(Context *VAR_0, const char *VAR_1, const char *VAR_2) {
        Network *VAR_3;
        int VAR_4;

        VAR_3 = FUNC_1(VAR_0, VAR_1);
        if (!VAR_3) {
                VAR_4 = FUNC_2(VAR_0, VAR_1, &VAR_3);
                if (VAR_4 < 0)
                        return VAR_4;
        }

        return FUNC_0(&VAR_3->bond, VAR_2);
}
