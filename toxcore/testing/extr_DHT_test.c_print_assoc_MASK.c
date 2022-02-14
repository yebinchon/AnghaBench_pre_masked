
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {int port; int ip; } ;
struct TYPE_5__ {int hardening; scalar_t__ ret_timestamp; TYPE_1__ ret_ip_port; scalar_t__ last_pinged; scalar_t__ timestamp; TYPE_1__ ip_port; } ;
typedef TYPE_1__ IP_Port ;
typedef TYPE_2__ IPPTsPng ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;

void FUNC_4(IPPTsPng *VAR_0, uint8_t VAR_1)
{
    IP_Port *VAR_2 = &VAR_0->ip_port;
    FUNC_3("\nIP: %s Port: %u", FUNC_0(&VAR_2->ip), FUNC_1(VAR_2->port));
    FUNC_3("\nTimestamp: %llu", (long long unsigned int) VAR_0->timestamp);
    FUNC_3("\nLast pinged: %llu\n", (long long unsigned int) VAR_0->last_pinged);

    VAR_2 = &VAR_0->ret_ip_port;

    if (VAR_1)
        FUNC_3("OUR IP: %s Port: %u\n", FUNC_0(&VAR_2->ip), FUNC_1(VAR_2->port));
    else
        FUNC_3("RET IP: %s Port: %u\n", FUNC_0(&VAR_2->ip), FUNC_1(VAR_2->port));

    FUNC_3("Timestamp: %llu\n", (long long unsigned int) VAR_0->ret_timestamp);
    FUNC_2(&VAR_0->hardening);

}
