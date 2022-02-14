
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint8_t ;
typedef int hash_t ;
struct TYPE_23__ {TYPE_7__* list; } ;
typedef TYPE_3__ candidates_bucket ;
typedef size_t bucket_t ;
struct TYPE_28__ {TYPE_3__* candidates; } ;
struct TYPE_21__ {int public_key; } ;
struct TYPE_27__ {int heard_family; int heard_at; int seen_family; int seen_at; void* used_at; TYPE_1__ client; int hash; } ;
struct TYPE_22__ {int family; } ;
struct TYPE_24__ {TYPE_2__ ip; } ;
struct TYPE_26__ {TYPE_4__ ip_port; int timestamp; } ;
struct TYPE_25__ {void* ret_timestamp; TYPE_4__ ret_ip_port; int timestamp; TYPE_4__ ip_port; } ;
typedef TYPE_4__ IP_Port ;
typedef TYPE_5__ IPPTsPng ;
typedef TYPE_6__ IPPTs ;
typedef TYPE_7__ Client_entry ;
typedef TYPE_8__ Assoc ;


 int FUNC_0 (TYPE_8__ const*,int ,int const*,int ,int,size_t*,size_t*) ;
 TYPE_5__* FUNC_1 (TYPE_7__*,TYPE_4__*) ;
 TYPE_4__* FUNC_2 (TYPE_7__*,TYPE_4__*) ;
 int FUNC_3 (int ,int const*) ;
 int FUNC_4 (TYPE_4__ const*) ;
 int FUNC_5 (TYPE_7__*,int ,int) ;
 void* FUNC_6 () ;

__attribute__((used)) static uint8_t FUNC_7(const Assoc *VAR_0, hash_t VAR_1, const uint8_t *VAR_2, uint8_t VAR_3,
                                     const IPPTs *VAR_4, const IP_Port *VAR_5)
{
    if (!VAR_0 || !VAR_2 || !VAR_4)
        return 0;

    bucket_t VAR_6;
    size_t VAR_7;

    if (!FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5 != ((void*)0), VAR_3, &VAR_6, &VAR_7))
        return 0;

    candidates_bucket *VAR_8 = &VAR_0->candidates[VAR_6];
    Client_entry *VAR_9 = &VAR_8->list[VAR_7];
    FUNC_5(VAR_9, 0, sizeof(*VAR_9));
    IPPTsPng *VAR_10 = FUNC_1(VAR_9, &VAR_4->ip_port);

    if (!VAR_10)
        return 0;

    VAR_9->hash = VAR_1;
    FUNC_3(VAR_9->client.public_key, VAR_2);

    if (VAR_3)
        VAR_9->used_at = FUNC_6();

    if (VAR_5 && !FUNC_4(VAR_5))
        VAR_5 = ((void*)0);

    if (VAR_5) {
        VAR_9->seen_at = VAR_4->timestamp;
        VAR_9->seen_family = VAR_4->ip_port.ip.family;

        VAR_10->ip_port = VAR_4->ip_port;
        VAR_10->timestamp = VAR_4->timestamp;
        VAR_10->ret_ip_port = *VAR_5;
        VAR_10->ret_timestamp = FUNC_6();
    } else {
        IP_Port *VAR_11 = FUNC_2(VAR_9, &VAR_4->ip_port);

        if (VAR_11) {
            VAR_9->heard_at = VAR_4->timestamp;
            VAR_9->heard_family = VAR_4->ip_port.ip.family;

            *VAR_11 = VAR_4->ip_port;
        }
    }

    return 1;
}
