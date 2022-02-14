
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct TYPE_5__ {int ip6; scalar_t__ family; int ip4; } ;
struct TYPE_6__ {int port; TYPE_1__ ip; } ;
struct TYPE_7__ {int * public_key; TYPE_2__ ip_port; } ;
typedef TYPE_3__ Node_format ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ const VAR_8 ;
 scalar_t__ const VAR_9 ;
 scalar_t__ const VAR_10 ;
 scalar_t__ const VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,scalar_t__ const*,int) ;

int FUNC_1(Node_format *VAR_13, uint16_t VAR_14, uint16_t *VAR_15, const uint8_t *VAR_16,
                 uint16_t VAR_17, uint8_t VAR_18)
{
    uint32_t VAR_19 = 0, VAR_20 = 0;

    while (VAR_19 < VAR_14 && VAR_20 < VAR_17) {
        int VAR_21 = -1;
        uint8_t VAR_22;

        if (VAR_16[VAR_20] == VAR_8) {
            VAR_21 = 0;
            VAR_22 = VAR_0;
        } else if (VAR_16[VAR_20] == VAR_10) {
            if (!VAR_18)
                return -1;

            VAR_21 = 0;
            VAR_22 = VAR_6;
        } else if (VAR_16[VAR_20] == VAR_9) {
            VAR_21 = 1;
            VAR_22 = VAR_1;
        } else if (VAR_16[VAR_20] == VAR_11) {
            if (!VAR_18)
                return -1;

            VAR_21 = 1;
            VAR_22 = VAR_7;
        } else {
            return -1;
        }

        if (VAR_21 == 0) {
            uint32_t VAR_23 = VAR_2;

            if (VAR_20 + VAR_23 > VAR_17)
                return -1;

            VAR_13[VAR_19].ip_port.ip.family = VAR_22;
            FUNC_0(&VAR_13[VAR_19].ip_port.ip.ip4, VAR_16 + VAR_20 + 1, VAR_4);
            FUNC_0(&VAR_13[VAR_19].ip_port.port, VAR_16 + VAR_20 + 1 + VAR_4, sizeof(uint16_t));
            FUNC_0(VAR_13[VAR_19].public_key, VAR_16 + VAR_20 + 1 + VAR_4 + sizeof(uint16_t), VAR_12);
            VAR_20 += VAR_23;
            ++VAR_19;
        } else if (VAR_21 == 1) {
            uint32_t VAR_24 = VAR_3;

            if (VAR_20 + VAR_24 > VAR_17)
                return -1;

            VAR_13[VAR_19].ip_port.ip.family = VAR_22;
            FUNC_0(&VAR_13[VAR_19].ip_port.ip.ip6, VAR_16 + VAR_20 + 1, VAR_5);
            FUNC_0(&VAR_13[VAR_19].ip_port.port, VAR_16 + VAR_20 + 1 + VAR_5, sizeof(uint16_t));
            FUNC_0(VAR_13[VAR_19].public_key, VAR_16 + VAR_20 + 1 + VAR_5 + sizeof(uint16_t), VAR_12);
            VAR_20 += VAR_24;
            ++VAR_19;
        } else {
            return -1;
        }
    }

    if (VAR_15)
        *VAR_15 = VAR_20;

    return VAR_19;
}
