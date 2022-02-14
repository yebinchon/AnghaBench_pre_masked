
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int chaddr; int gateway; int address; } ;
struct TYPE_8__ {unsigned int pool_size; TYPE_2__ invalid_lease; TYPE_2__** bound_leases; } ;
typedef TYPE_1__ sd_dhcp_server ;
typedef TYPE_2__ DHCPLease ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;

int FUNC_4(sd_dhcp_server *VAR_1) {
        unsigned VAR_2;
        int VAR_3 = 0;

        FUNC_1(VAR_1, -VAR_0);
        FUNC_0(VAR_1->bound_leases);

        for (VAR_2 = 0; VAR_2 < VAR_1->pool_size; VAR_2++) {
                DHCPLease *VAR_4 = VAR_1->bound_leases[VAR_2];

                if (!VAR_4 || VAR_4 == &VAR_1->invalid_lease)
                        continue;

                VAR_3 = FUNC_3(VAR_1, VAR_4->address,
                                           VAR_4->gateway,
                                           VAR_4->chaddr);
                if (VAR_3 < 0)
                        return VAR_3;

                FUNC_2(VAR_1, "FORCERENEW");
        }

        return VAR_3;
}
