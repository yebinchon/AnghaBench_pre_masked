
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {scalar_t__ family; } ;
struct TYPE_10__ {TYPE_9__ ip; } ;
struct TYPE_12__ {scalar_t__ heard_family; int heard_at; TYPE_1__ assoc_heard6; TYPE_1__ assoc_heard4; } ;
struct TYPE_11__ {int timestamp; TYPE_1__ ip_port; } ;
typedef TYPE_1__ IP_Port ;
typedef TYPE_2__ IPPTs ;
typedef TYPE_3__ Client_entry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_9__) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(Client_entry *VAR_3, const IPPTs *VAR_4)
{
    if (!VAR_3 || !VAR_4)
        return 0;

    if (!FUNC_2(&VAR_4->ip_port))
        return 0;

    IP_Port *VAR_5;
    const IP_Port *VAR_6 = &VAR_4->ip_port;

    if (VAR_6->ip.family == VAR_0)
        VAR_5 = &VAR_3->assoc_heard4;
    else if (VAR_6->ip.family == VAR_1)
        VAR_5 = &VAR_3->assoc_heard6;
    else
        return 0;

    if (FUNC_1(VAR_6, VAR_5))
        return 0;

    if (!FUNC_2(VAR_5)) {
        *VAR_5 = *VAR_6;
        VAR_3->heard_at = VAR_4->timestamp;
        VAR_3->heard_family = VAR_6->ip.family;
        return 1;
    }



    uint8_t VAR_7 = FUNC_0(VAR_6->ip) == 0;
    uint8_t VAR_8 = FUNC_0(VAR_5->ip) == 0;

    if (VAR_7 && !VAR_8 && !FUNC_3(VAR_3->heard_at, VAR_2))
        return 0;

    *VAR_5 = *VAR_6;
    VAR_3->heard_at = VAR_4->timestamp;
    VAR_3->heard_family = VAR_6->ip.family;

    return 1;
}
