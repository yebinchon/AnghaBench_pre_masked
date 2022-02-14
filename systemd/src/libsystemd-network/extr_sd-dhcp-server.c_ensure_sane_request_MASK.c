
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {scalar_t__ max_lease_time; int default_lease_time; } ;
typedef TYPE_2__ sd_dhcp_server ;
struct TYPE_9__ {void* data; scalar_t__ length; } ;
struct TYPE_11__ {scalar_t__ max_optlen; scalar_t__ lifetime; TYPE_1__ client_id; int chaddr; struct TYPE_11__* message; } ;
typedef TYPE_3__ DHCPRequest ;
typedef TYPE_3__ DHCPMessage ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long long,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int*,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_4(sd_dhcp_server *VAR_3, DHCPRequest *VAR_4, DHCPMessage *VAR_5) {
        FUNC_1(VAR_4);
        FUNC_1(VAR_5);

        VAR_4->message = VAR_5;



        if (!VAR_4->client_id.data) {
                void *VAR_6;

                VAR_6 = FUNC_2(VAR_2 + 1);
                if (!VAR_6)
                        return -VAR_1;

                ((uint8_t*) VAR_6)[0] = 0x01;
                FUNC_3((uint8_t*) VAR_6 + 1, &VAR_5->chaddr, VAR_2);

                VAR_4->client_id.length = VAR_2 + 1;
                VAR_4->client_id.data = VAR_6;
        }

        if (VAR_4->max_optlen < VAR_0)
                VAR_4->max_optlen = VAR_0;

        if (VAR_4->lifetime <= 0)
                VAR_4->lifetime = FUNC_0(1ULL, VAR_3->default_lease_time);

        if (VAR_3->max_lease_time > 0 && VAR_4->lifetime > VAR_3->max_lease_time)
                VAR_4->lifetime = VAR_3->max_lease_time;

        return 0;
}
