
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int public_key; int ip_port; } ;
typedef TYPE_1__ Node_format ;
typedef int IP_Port ;
typedef int DHT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,int ,int const*,int ,TYPE_1__*,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int const*) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, IP_Port VAR_2, const uint8_t *VAR_3, uint16_t VAR_4)
{
    DHT *VAR_5 = VAR_1;
    Node_format VAR_6[VAR_0];
    uint32_t VAR_7;

    if (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6, VAR_0, &VAR_7))
        return 1;

    if (VAR_7 == 0)
        return 0;

    uint32_t VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {

        if (FUNC_1(&VAR_6[VAR_8].ip_port)) {
            FUNC_2(VAR_5, VAR_6[VAR_8].public_key, VAR_6[VAR_8].ip_port);
            FUNC_3(VAR_5, VAR_6[VAR_8].ip_port, VAR_6[VAR_8].public_key, VAR_3 + 1);
        }
    }

    return 0;
}
