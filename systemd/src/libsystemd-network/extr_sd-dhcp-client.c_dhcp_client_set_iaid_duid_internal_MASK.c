
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int usec_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_15__ {int data; } ;
struct TYPE_19__ {TYPE_1__ raw; int type; } ;
struct TYPE_16__ {TYPE_7__ duid; int iaid; } ;
struct TYPE_18__ {int type; TYPE_2__ ns; } ;
struct TYPE_17__ {int client_id_len; int state; TYPE_4__ client_id; int arp_type; int mac_addr_len; int mac_addr; int ifindex; } ;
typedef TYPE_3__ sd_dhcp_client ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_7__*,size_t*) ;
 int FUNC_5 (TYPE_7__*,int ,int ,int ,size_t*) ;
 int FUNC_6 (TYPE_7__*,int ,int ,int ,int ,size_t*) ;
 int FUNC_7 (TYPE_7__*,size_t*) ;
 int FUNC_8 (int ,int ,int ,int,int *) ;
 int FUNC_9 (int,size_t,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*,char*,char*) ;
 int FUNC_13 (int *,void const*,size_t) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_4__) ;

__attribute__((used)) static int FUNC_16(
                sd_dhcp_client *VAR_5,
                bool VAR_6,
                bool VAR_7,
                uint32_t VAR_8,
                uint16_t VAR_9,
                const void *VAR_10,
                size_t VAR_11,
                usec_t VAR_12) {

        FUNC_0(VAR_5);
        int VAR_13;
        size_t VAR_14;

        FUNC_2(VAR_5, -VAR_2);
        FUNC_2(VAR_11 == 0 || VAR_10, -VAR_2);

        if (VAR_10) {
                VAR_13 = FUNC_9(VAR_9, VAR_11, 1);
                if (VAR_13 < 0)
                        return VAR_13;
        }

        FUNC_15(VAR_5->client_id);
        VAR_5->client_id.type = 255;

        if (VAR_6) {
                if (VAR_7)
                        VAR_5->client_id.ns.iaid = FUNC_11(VAR_8);
                else {
                        VAR_13 = FUNC_8(VAR_5->ifindex, VAR_5->mac_addr,
                                                     VAR_5->mac_addr_len,
                                                     1,
                                                     &VAR_5->client_id.ns.iaid);
                        if (VAR_13 < 0)
                                return VAR_13;
                }
        }

        if (VAR_10) {
                VAR_5->client_id.ns.duid.type = FUNC_10(VAR_9);
                FUNC_13(&VAR_5->client_id.ns.duid.raw.data, VAR_10, VAR_11);
                VAR_14 = sizeof(VAR_5->client_id.ns.duid.type) + VAR_11;
        } else
                switch (VAR_9) {
                case 129:
                        if (VAR_5->mac_addr_len == 0)
                                return -VAR_3;

                        VAR_13 = FUNC_6(&VAR_5->client_id.ns.duid, VAR_12, VAR_5->mac_addr, VAR_5->mac_addr_len, VAR_5->arp_type, &VAR_14);
                        if (VAR_13 < 0)
                                return VAR_13;
                        break;
                case 131:
                        VAR_13 = FUNC_4(&VAR_5->client_id.ns.duid, &VAR_14);
                        if (VAR_13 < 0)
                                return VAR_13;
                        break;
                case 130:
                        if (VAR_5->mac_addr_len == 0)
                                return -VAR_3;

                        VAR_13 = FUNC_5(&VAR_5->client_id.ns.duid, VAR_5->mac_addr, VAR_5->mac_addr_len, VAR_5->arp_type, &VAR_14);
                        if (VAR_13 < 0)
                                return VAR_13;
                        break;
                case 128:
                        VAR_13 = FUNC_7(&VAR_5->client_id.ns.duid, &VAR_14);
                        if (VAR_13 < 0)
                                return VAR_13;
                        break;
                default:
                        return -VAR_2;
                }

        VAR_5->client_id_len = sizeof(VAR_5->client_id.type) + VAR_14 +
                                (VAR_6 ? sizeof(VAR_5->client_id.ns.iaid) : 0);

        if (!FUNC_1(VAR_5->state, VAR_0, VAR_1)) {
                FUNC_12(VAR_5, "Configured %sDUID, restarting.", VAR_6 ? "IAID+" : "");
                FUNC_3(VAR_5, VAR_4);
                FUNC_14(VAR_5);
        }

        return 0;
}
