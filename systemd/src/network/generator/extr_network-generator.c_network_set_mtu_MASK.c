
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mtu; } ;
typedef TYPE_1__ Network ;
typedef int Context ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,char const*) ;
 int FUNC_1 (int,char const*,int *) ;

__attribute__((used)) static int FUNC_2(Context *VAR_1, const char *VAR_2, int VAR_3, const char *VAR_4) {
        Network *VAR_5;

        VAR_5 = FUNC_0(VAR_1, VAR_2);
        if (!VAR_5)
                return -VAR_0;

        return FUNC_1(VAR_3, VAR_4, &VAR_5->mtu);
}
