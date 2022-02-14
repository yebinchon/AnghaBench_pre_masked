
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_12__ {int family; } ;
struct TYPE_16__ {TYPE_1__ ip; } ;
struct TYPE_15__ {int seen_family; void* seen_at; void* used_at; } ;
struct TYPE_14__ {TYPE_9__ ip_port; int timestamp; } ;
struct TYPE_13__ {void* ret_timestamp; int ret_ip_port; int timestamp; TYPE_9__ ip_port; } ;
typedef int IP_Port ;
typedef TYPE_2__ IPPTsPng ;
typedef TYPE_3__ IPPTs ;
typedef TYPE_4__ Client_entry ;
typedef int Assoc ;


 TYPE_2__* FUNC_0 (TYPE_4__*,TYPE_9__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__ const*) ;
 void* FUNC_2 () ;

__attribute__((used)) static void FUNC_3(const Assoc *VAR_0, Client_entry *VAR_1, uint8_t VAR_2, const IPPTs *VAR_3,
                                    const IP_Port *VAR_4)
{
    if (!VAR_0 || !VAR_1 || !VAR_3)
        return;

    IPPTsPng *VAR_5 = FUNC_0(VAR_1, &VAR_3->ip_port);

    if (!VAR_5)
        return;

    if (VAR_2)
        VAR_1->used_at = FUNC_2();




    if (VAR_4) {
        VAR_5->ip_port = VAR_3->ip_port;
        VAR_5->timestamp = VAR_3->timestamp;
        VAR_5->ret_ip_port = *VAR_4;
        VAR_5->ret_timestamp = FUNC_2();

        VAR_1->seen_at = FUNC_2();
        VAR_1->seen_family = VAR_3->ip_port.ip.family;

        return;
    }

    FUNC_1(VAR_1, VAR_3);
}
