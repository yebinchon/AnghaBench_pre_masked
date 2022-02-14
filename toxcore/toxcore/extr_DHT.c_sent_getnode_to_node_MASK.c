
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int data ;
struct TYPE_8__ {int dht_harden_ping_array; int dht_ping_array; } ;
struct TYPE_7__ {int public_key; int ip_port; } ;
typedef TYPE_1__ Node_format ;
typedef int IP_Port ;
typedef TYPE_2__ DHT ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*,int*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int*,int,int *,int ) ;
 scalar_t__ FUNC_4 (int ,int const*) ;

__attribute__((used)) static uint8_t FUNC_5(DHT *VAR_0, const uint8_t *VAR_1, IP_Port VAR_2, uint64_t VAR_3,
                                    Node_format *VAR_4)
{
    uint8_t VAR_5[sizeof(Node_format) * 2];

    if (FUNC_3(VAR_5, sizeof(VAR_5), &VAR_0->dht_ping_array, VAR_3) == sizeof(Node_format)) {
        FUNC_2(VAR_4, 0, sizeof(Node_format));
    } else if (FUNC_3(VAR_5, sizeof(VAR_5), &VAR_0->dht_harden_ping_array, VAR_3) == sizeof(VAR_5)) {
        FUNC_1(VAR_4, VAR_5 + sizeof(Node_format), sizeof(Node_format));
    } else {
        return 0;
    }

    Node_format VAR_6;
    FUNC_1(&VAR_6, VAR_5, sizeof(Node_format));

    if (!FUNC_0(&VAR_6.ip_port, &VAR_2) || FUNC_4(VAR_6.public_key, VAR_1) != 0)
        return 0;

    return 1;
}
