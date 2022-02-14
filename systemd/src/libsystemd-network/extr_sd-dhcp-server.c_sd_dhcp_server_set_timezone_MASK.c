
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int timezone; } ;
typedef TYPE_1__ sd_dhcp_server ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 TYPE_1__* FUNC_3 (char const*,int ) ;

int FUNC_4(sd_dhcp_server *VAR_2, const char *VAR_3) {
        int VAR_4;

        FUNC_0(VAR_2, -VAR_0);
        FUNC_0(FUNC_3(VAR_3, VAR_1), -VAR_0);

        if (FUNC_2(VAR_3, VAR_2->timezone))
                return 0;

        VAR_4 = FUNC_1(&VAR_2->timezone, VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        return 1;
}
