
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int raw_data_len; int * raw_data; int type; int llt_time; } ;
struct TYPE_13__ {int dhcp_client_identifier; int mac; struct TYPE_13__* dhcp_client; int iaid; struct TYPE_13__* network; int iaid_set; } ;
typedef TYPE_1__ Link ;
typedef TYPE_2__ DUID ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,char*) ;
 int FUNC_4 (TYPE_1__*,int ,int const*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int *,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ,int *,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ) ;

int FUNC_9(Link *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);
        FUNC_0(VAR_2->network);
        FUNC_0(VAR_2->dhcp_client);

        switch (VAR_2->network->dhcp_client_identifier) {
        case 130: {

                const DUID *VAR_4 = FUNC_2(VAR_2);

                if (VAR_4->type == VAR_1 && VAR_4->raw_data_len == 0)
                        VAR_3 = FUNC_8(VAR_2->dhcp_client,
                                                             VAR_2->network->iaid_set,
                                                             VAR_2->network->iaid,
                                                             VAR_4->llt_time);
                else
                        VAR_3 = FUNC_7(VAR_2->dhcp_client,
                                                         VAR_2->network->iaid_set,
                                                         VAR_2->network->iaid,
                                                         VAR_4->type,
                                                         VAR_4->raw_data_len > 0 ? VAR_4->raw_data : ((void*)0),
                                                         VAR_4->raw_data_len);
                if (VAR_3 < 0)
                        return FUNC_3(VAR_2, VAR_3, "DHCP4 CLIENT: Failed to set IAID+DUID: %m");
                break;
        }
        case 129: {

                const DUID *VAR_5 = FUNC_2(VAR_2);

                if (VAR_5->type == VAR_1 && VAR_5->raw_data_len == 0)
                        VAR_3 = FUNC_6(VAR_2->dhcp_client,
                                                        VAR_5->llt_time);
                else
                        VAR_3 = FUNC_5(VAR_2->dhcp_client,
                                                    VAR_5->type,
                                                    VAR_5->raw_data_len > 0 ? VAR_5->raw_data : ((void*)0),
                                                    VAR_5->raw_data_len);
                if (VAR_3 < 0)
                        return FUNC_3(VAR_2, VAR_3, "DHCP4 CLIENT: Failed to set DUID: %m");
                break;
        }
        case 128:
                VAR_3 = FUNC_4(VAR_2->dhcp_client,
                                                 VAR_0,
                                                 (const uint8_t *) &VAR_2->mac,
                                                 sizeof(VAR_2->mac));
                if (VAR_3 < 0)
                        return FUNC_3(VAR_2, VAR_3, "DHCP4 CLIENT: Failed to set client ID: %m");
                break;
        default:
                FUNC_1("Unknown client identifier type.");
        }

        return 0;
}
