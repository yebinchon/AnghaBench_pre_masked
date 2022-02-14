
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct TYPE_5__ {scalar_t__ family; int ip6; int ip4; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int *,int) ;

int FUNC_1(uint8_t *VAR_13, uint16_t VAR_14, const Node_format *VAR_15, uint16_t VAR_16)
{
    uint32_t VAR_17, VAR_18 = 0;

    for (VAR_17 = 0; VAR_17 < VAR_16; ++VAR_17) {
        int VAR_19 = -1;
        uint8_t VAR_20;


        if (VAR_15[VAR_17].ip_port.ip.family == VAR_0) {
            VAR_19 = 0;
            VAR_20 = VAR_8;
        } else if (VAR_15[VAR_17].ip_port.ip.family == VAR_6) {
            VAR_19 = 0;
            VAR_20 = VAR_10;
        } else if (VAR_15[VAR_17].ip_port.ip.family == VAR_1) {
            VAR_19 = 1;
            VAR_20 = VAR_9;
        } else if (VAR_15[VAR_17].ip_port.ip.family == VAR_7) {
            VAR_19 = 1;
            VAR_20 = VAR_11;
        } else {
            return -1;
        }

        if (VAR_19 == 0) {
            uint32_t VAR_21 = VAR_2;

            if (VAR_18 + VAR_21 > VAR_14)
                return -1;

            VAR_13[VAR_18] = VAR_20;
            FUNC_0(VAR_13 + VAR_18 + 1, &VAR_15[VAR_17].ip_port.ip.ip4, VAR_4);
            FUNC_0(VAR_13 + VAR_18 + 1 + VAR_4, &VAR_15[VAR_17].ip_port.port, sizeof(uint16_t));
            FUNC_0(VAR_13 + VAR_18 + 1 + VAR_4 + sizeof(uint16_t), VAR_15[VAR_17].public_key, VAR_12);
            VAR_18 += VAR_21;
        } else if (VAR_19 == 1) {
            uint32_t VAR_22 = VAR_3;

            if (VAR_18 + VAR_22 > VAR_14)
                return -1;

            VAR_13[VAR_18] = VAR_20;
            FUNC_0(VAR_13 + VAR_18 + 1, &VAR_15[VAR_17].ip_port.ip.ip6, VAR_5);
            FUNC_0(VAR_13 + VAR_18 + 1 + VAR_5, &VAR_15[VAR_17].ip_port.port, sizeof(uint16_t));
            FUNC_0(VAR_13 + VAR_18 + 1 + VAR_5 + sizeof(uint16_t), VAR_15[VAR_17].public_key, VAR_12);
            VAR_18 += VAR_22;
        } else {
            return -1;
        }
    }

    return VAR_18;
}
