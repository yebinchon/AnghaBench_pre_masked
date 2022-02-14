
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_12__ {scalar_t__ port; int ip; } ;
struct TYPE_11__ {scalar_t__ family; } ;
struct TYPE_13__ {TYPE_1__ ip; } ;
struct TYPE_14__ {scalar_t__ ret_timestamp; TYPE_2__ ret_ip_port; int timestamp; TYPE_3__ ip_port; } ;
struct TYPE_15__ {int public_key; TYPE_4__ assoc4; TYPE_4__ assoc6; } ;
typedef TYPE_3__ IP_Port ;
typedef TYPE_4__ IPPTsPng ;
typedef TYPE_5__ Client_data ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (TYPE_5__*,int ,int const*) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int const*,int const*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6( Client_data *VAR_2,
                          uint16_t VAR_3,
                          const uint8_t *VAR_4,
                          IP_Port VAR_5,
                          const uint8_t *VAR_6 )
{
    if ((VAR_5.ip.family != VAR_0) && (VAR_5.ip.family != VAR_1))
        return 0;

    if (FUNC_4(&VAR_2[1], VAR_4, VAR_6) || FUNC_4(&VAR_2[0], VAR_4, VAR_6)) {
        FUNC_3(VAR_2, VAR_3, VAR_6);

        IPPTsPng *VAR_7 = ((void*)0);
        IPPTsPng *VAR_8 = ((void*)0);

        Client_data *VAR_9 = &VAR_2[0];

        if (VAR_5.ip.family == VAR_0) {
            VAR_7 = &VAR_9->assoc4;
            VAR_8 = &VAR_9->assoc6;
        } else {
            VAR_7 = &VAR_9->assoc6;
            VAR_8 = &VAR_9->assoc4;
        }

        FUNC_0(VAR_9->public_key, VAR_4);
        VAR_7->ip_port = VAR_5;
        VAR_7->timestamp = FUNC_5();

        FUNC_1(&VAR_7->ret_ip_port.ip);
        VAR_7->ret_ip_port.port = 0;
        VAR_7->ret_timestamp = 0;


        FUNC_2(VAR_8, 0, sizeof(*VAR_8));

        return 1;
    }

    return 0;
}
