
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_10__ {scalar_t__ timestamp; } ;
struct TYPE_12__ {TYPE_2__ assoc6; TYPE_2__ assoc4; } ;
struct TYPE_11__ {unsigned int num_to_bootstrap; TYPE_4__* close_clientlist; int close_bootstrap_times; int self_public_key; int close_lastgetnodes; TYPE_1__* to_bootstrap; } ;
struct TYPE_9__ {int public_key; int ip_port; } ;
typedef TYPE_2__ IPPTsPng ;
typedef TYPE_3__ DHT ;
typedef TYPE_4__ Client_data ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *,int ,TYPE_4__*,size_t,int *,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3(DHT *VAR_2)
{
    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2->num_to_bootstrap; ++VAR_3) {
        FUNC_1(VAR_2, VAR_2->to_bootstrap[VAR_3].ip_port, VAR_2->to_bootstrap[VAR_3].public_key, VAR_2->self_public_key, ((void*)0));
    }

    VAR_2->num_to_bootstrap = 0;

    uint8_t VAR_4 = FUNC_0(VAR_2, &VAR_2->close_lastgetnodes, VAR_2->self_public_key,
                         VAR_2->close_clientlist, VAR_1, &VAR_2->close_bootstrap_times, 0);

    if (!VAR_4) {






        uint64_t VAR_5 = FUNC_2() - VAR_0;
        size_t VAR_6, VAR_7;

        for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
            Client_data *VAR_8 = &VAR_2->close_clientlist[VAR_6];
            IPPTsPng *VAR_9;

            for (VAR_7 = 0, VAR_9 = &VAR_8->assoc4; VAR_7 < 2; VAR_7++, VAR_9 = &VAR_8->assoc6)
                if (VAR_9->timestamp)
                    VAR_9->timestamp = VAR_5;
        }
    }
}
