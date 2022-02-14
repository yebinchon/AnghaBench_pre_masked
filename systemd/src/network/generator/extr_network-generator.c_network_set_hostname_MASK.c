
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hostname; } ;
typedef TYPE_1__ Network ;
typedef int Context ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 TYPE_1__* FUNC_1 (int *,char const*) ;

__attribute__((used)) static int FUNC_2(Context *VAR_1, const char *VAR_2, const char *VAR_3) {
        Network *VAR_4;

        VAR_4 = FUNC_1(VAR_1, VAR_2);
        if (!VAR_4)
                return -VAR_0;

        return FUNC_0(&VAR_4->hostname, VAR_3);
}
