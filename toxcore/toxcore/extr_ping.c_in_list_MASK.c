
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint16_t ;
struct TYPE_10__ {int ip_port; int timestamp; } ;
struct TYPE_11__ {TYPE_3__ assoc6; TYPE_3__ assoc4; int public_key; } ;
struct TYPE_8__ {scalar_t__ family; } ;
struct TYPE_9__ {TYPE_1__ ip; } ;
typedef TYPE_2__ IP_Port ;
typedef TYPE_3__ IPPTsPng ;
typedef TYPE_4__ Client_data ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int const*) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(const Client_data *VAR_2, uint16_t VAR_3, const uint8_t *VAR_4, IP_Port VAR_5)
{
    unsigned int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
        if (FUNC_0(VAR_2[VAR_6].public_key, VAR_4)) {
            const IPPTsPng *VAR_7;

            if (VAR_5.ip.family == VAR_0) {
                VAR_7 = &VAR_2[VAR_6].assoc4;
            } else {
                VAR_7 = &VAR_2[VAR_6].assoc6;
            }

            if (!FUNC_2(VAR_7->timestamp, VAR_1) && FUNC_1(&VAR_7->ip_port, &VAR_5))
                return 1;
        }
    }

    return 0;
}
