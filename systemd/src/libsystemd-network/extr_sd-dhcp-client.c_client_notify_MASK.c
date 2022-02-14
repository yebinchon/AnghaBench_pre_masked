
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* callback ) (TYPE_1__*,int,int ) ;int userdata; } ;
typedef TYPE_1__ sd_dhcp_client ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_2(sd_dhcp_client *VAR_0, int VAR_1) {
        FUNC_0(VAR_0);

        if (VAR_0->callback)
                return VAR_0->callback(VAR_0, VAR_1, VAR_0->userdata);

        return 0;
}
