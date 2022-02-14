
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_8__ {void* id; } ;
struct TYPE_9__ {TYPE_1__ ia_pd; } ;
struct TYPE_11__ {void* id; } ;
struct TYPE_10__ {TYPE_4__ ia_na; } ;
struct TYPE_12__ {int iaid_set; TYPE_2__ ia_pd; TYPE_3__ ia_na; int mac_addr_len; int mac_addr; int ifindex; } ;
typedef TYPE_5__ sd_dhcp6_client ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,int ,int ,int,void**) ;

__attribute__((used)) static int FUNC_2(sd_dhcp6_client *VAR_0) {
        int VAR_1;
        uint32_t VAR_2;

        FUNC_0(VAR_0);

        if (VAR_0->iaid_set)
                return 0;

        VAR_1 = FUNC_1(VAR_0->ifindex, VAR_0->mac_addr, VAR_0->mac_addr_len, 1, &VAR_2);
        if (VAR_1 < 0)
                return VAR_1;

        VAR_0->ia_na.ia_na.id = VAR_2;
        VAR_0->ia_pd.ia_pd.id = VAR_2;
        VAR_0->iaid_set = 1;

        return 0;
}
