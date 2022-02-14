
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dhcp_use_dns; } ;
typedef TYPE_1__ Network ;
typedef int Context ;


 TYPE_1__* FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char const*,TYPE_1__**) ;

__attribute__((used)) static int FUNC_2(Context *VAR_0, const char *VAR_1, bool VAR_2) {
        Network *VAR_3;
        int VAR_4;

        VAR_3 = FUNC_0(VAR_0, VAR_1);
        if (!VAR_3) {
                VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
                if (VAR_4 < 0)
                        return VAR_4;
        }

        VAR_3->dhcp_use_dns = VAR_2;

        return 0;
}
