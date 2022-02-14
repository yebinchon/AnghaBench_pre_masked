
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int be32_t ;
struct TYPE_4__ {int* data; int length; } ;
struct TYPE_5__ {int max_optlen; TYPE_1__ client_id; int server_id; int requested_ip; int lifetime; } ;
typedef TYPE_2__ DHCPRequest ;
typedef int DHCPPacket ;


 int VAR_0 ;





 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *,void const*,int) ;
 int* FUNC_3 (void const*,int) ;
 int FUNC_4 (void const*) ;
 int FUNC_5 (void const*) ;

__attribute__((used)) static int FUNC_6(uint8_t VAR_1, uint8_t VAR_2, const void *VAR_3, void *VAR_4) {
        DHCPRequest *VAR_5 = VAR_4;

        FUNC_0(VAR_5);

        switch(VAR_1) {
        case 131:
                if (VAR_2 == 4)
                        VAR_5->lifetime = FUNC_5(VAR_3);

                break;
        case 129:
                if (VAR_2 == 4)
                        FUNC_2(&VAR_5->requested_ip, VAR_3, sizeof(be32_t));

                break;
        case 128:
                if (VAR_2 == 4)
                        FUNC_2(&VAR_5->server_id, VAR_3, sizeof(be32_t));

                break;
        case 132:
                if (VAR_2 >= 2) {
                        uint8_t *VAR_6;

                        VAR_6 = FUNC_3(VAR_3, VAR_2);
                        if (!VAR_6)
                                return -VAR_0;

                        FUNC_1(VAR_5->client_id.data);
                        VAR_5->client_id.data = VAR_6;
                        VAR_5->client_id.length = VAR_2;
                }

                break;
        case 130:

                if (VAR_2 == 2 && FUNC_4(VAR_3) >= sizeof(DHCPPacket))
                        VAR_5->max_optlen = FUNC_4(VAR_3) - sizeof(DHCPPacket);

                break;
        }

        return 0;
}
