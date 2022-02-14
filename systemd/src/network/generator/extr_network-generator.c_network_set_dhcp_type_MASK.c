
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dhcp_type; } ;
typedef TYPE_1__ Network ;
typedef scalar_t__ DHCPType ;
typedef int Context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char const*,TYPE_1__**) ;

__attribute__((used)) static int FUNC_3(Context *VAR_1, const char *VAR_2, const char *VAR_3) {
        Network *VAR_4;
        DHCPType VAR_5;
        int VAR_6;

        VAR_5 = FUNC_0(VAR_3);
        if (VAR_5 < 0)
                return -VAR_0;

        VAR_4 = FUNC_1(VAR_1, VAR_2);
        if (!VAR_4) {
                VAR_6 = FUNC_2(VAR_1, VAR_2, &VAR_4);
                if (VAR_6 < 0)
                        return VAR_6;
        }

        VAR_4->dhcp_type = VAR_5;
        return 0;
}
