
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int option; int options; } ;
typedef TYPE_1__ sd_dhcp_option ;
typedef TYPE_1__ sd_dhcp_client ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(sd_dhcp_client *VAR_2, sd_dhcp_option *VAR_3) {
        int VAR_4;

        FUNC_1(VAR_2, -VAR_0);
        FUNC_1(VAR_3, -VAR_0);

        VAR_4 = FUNC_2(&VAR_2->options, &VAR_1);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_3(VAR_2->options, FUNC_0(VAR_3->option), VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        FUNC_4(VAR_3);
        return 0;
}
