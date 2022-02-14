
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ sa_family_t ;
struct TYPE_12__ {int ip; } ;
struct TYPE_10__ {scalar_t__ timestamp; TYPE_8__ ip_port; int hardening; } ;
struct TYPE_11__ {int public_key; TYPE_2__ assoc6; TYPE_2__ assoc4; } ;
struct TYPE_9__ {TYPE_8__ ip_port; int public_key; } ;
typedef TYPE_1__ Node_format ;
typedef TYPE_2__ IPPTsPng ;
typedef TYPE_3__ Client_data ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_4 ;
 int FUNC_1 (TYPE_1__*,size_t,int ,TYPE_8__,scalar_t__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,size_t,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__ const*,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(const uint8_t *VAR_6, Node_format *VAR_7,
                                  sa_family_t VAR_8, const Client_data *VAR_9, uint32_t VAR_10,
                                  uint32_t *VAR_11, uint8_t VAR_12, uint8_t VAR_13)
{
    if ((VAR_8 != VAR_0) && (VAR_8 != VAR_1) && (VAR_8 != 0))
        return;

    uint32_t VAR_14 = *VAR_11;
    uint32_t VAR_15;

    for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
        const Client_data *VAR_16 = &VAR_9[VAR_15];


        if (FUNC_2(VAR_7, VAR_4, VAR_16->public_key))
            continue;

        const IPPTsPng *VAR_17 = ((void*)0);

        if (VAR_8 == VAR_0) {
            VAR_17 = &VAR_16->assoc4;
        } else if (VAR_8 == VAR_1) {
            VAR_17 = &VAR_16->assoc6;
        } else {
            if (VAR_16->assoc4.timestamp >= VAR_16->assoc6.timestamp) {
                VAR_17 = &VAR_16->assoc4;
            } else {
                VAR_17 = &VAR_16->assoc6;
            }
        }


        if (FUNC_5(VAR_17->timestamp, VAR_2))
            continue;


        if (FUNC_0(VAR_17->ip_port.ip) == 0 && !VAR_12)
            continue;

        if (FUNC_0(VAR_17->ip_port.ip) != 0 && VAR_13 && FUNC_3(&VAR_17->hardening) != VAR_3
                && !FUNC_4(VAR_6, VAR_16->public_key))
            continue;

        if (VAR_14 < VAR_4) {
            FUNC_6(VAR_7[VAR_14].public_key,
                   VAR_16->public_key,
                   VAR_5 );

            VAR_7[VAR_14].ip_port = VAR_17->ip_port;
            VAR_14++;
        } else {
            FUNC_1(VAR_7, VAR_4, VAR_16->public_key, VAR_17->ip_port, VAR_6);
        }
    }

    *VAR_11 = VAR_14;
}
