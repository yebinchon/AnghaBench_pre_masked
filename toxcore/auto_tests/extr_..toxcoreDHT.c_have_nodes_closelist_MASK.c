
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct TYPE_14__ {int self_public_key; } ;
struct TYPE_13__ {int timestamp; } ;
struct TYPE_11__ {int family; } ;
struct TYPE_10__ {TYPE_2__ ip; } ;
struct TYPE_12__ {TYPE_1__ ip_port; int public_key; } ;
typedef TYPE_3__ Node_format ;
typedef TYPE_4__ IPPTsPng ;
typedef TYPE_5__ DHT ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_5__*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static uint32_t FUNC_3(DHT *VAR_1, Node_format *VAR_2, uint16_t VAR_3)
{
    uint32_t VAR_4 = 0;
    uint32_t VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
        if (FUNC_1(VAR_2[VAR_5].public_key, VAR_1->self_public_key)) {
            ++VAR_4;
            continue;
        }

        IPPTsPng *VAR_6 = FUNC_0(VAR_1, VAR_2[VAR_5].public_key, VAR_2[VAR_5].ip_port.ip.family);

        if (VAR_6) {
            if (!FUNC_2(VAR_6->timestamp, VAR_0)) {
                ++VAR_4;
            }
        }
    }

    return VAR_4;
}
