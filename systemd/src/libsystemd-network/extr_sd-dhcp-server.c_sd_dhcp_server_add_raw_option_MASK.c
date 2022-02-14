
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int raw_option; } ;
typedef TYPE_1__ sd_dhcp_server ;
typedef TYPE_1__ sd_dhcp_raw_option ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(sd_dhcp_server *VAR_3, sd_dhcp_raw_option *VAR_4) {
        int VAR_5;

        FUNC_0(VAR_3, -VAR_0);
        FUNC_0(VAR_4, -VAR_0);

        VAR_5 = FUNC_1(&VAR_3->raw_option, &VAR_2);
        if (VAR_5 < 0)
                return -VAR_1;

        VAR_5 = FUNC_2(VAR_3->raw_option, VAR_4, VAR_4);
        if (VAR_5 < 0)
                return VAR_5;

        FUNC_3(VAR_4);

        return 1;
}
