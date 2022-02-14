
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int time; int data_public_key; int ret; int ret_ip_port; int public_key; } ;
struct TYPE_7__ {TYPE_3__* entries; TYPE_1__* dht; } ;
struct TYPE_6__ {int const* self_public_key; } ;
typedef int Onion_Announce_Entry ;
typedef TYPE_2__ Onion_Announce ;
typedef int IP_Port ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*,int const*,int ) ;
 int FUNC_1 (TYPE_2__*,int const*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int const*,int ) ;
 int FUNC_4 (TYPE_3__*,unsigned int,int,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(Onion_Announce *VAR_6, IP_Port VAR_7, const uint8_t *VAR_8,
                          const uint8_t *VAR_9, const uint8_t *VAR_10)
{

    int VAR_11 = FUNC_1(VAR_6, VAR_8);

    unsigned int VAR_12;

    if (VAR_11 == -1) {
        for (VAR_12 = 0; VAR_12 < VAR_0; ++VAR_12) {
            if (FUNC_2(VAR_6->entries[VAR_12].time, VAR_1))
                VAR_11 = VAR_12;
        }
    }

    if (VAR_11 == -1) {
        if (FUNC_0(VAR_6->dht->self_public_key, VAR_8, VAR_6->entries[0].public_key) == 1)
            VAR_11 = 0;
    }

    if (VAR_11 == -1)
        return -1;

    FUNC_3(VAR_6->entries[VAR_11].public_key, VAR_8, VAR_5);
    VAR_6->entries[VAR_11].ret_ip_port = VAR_7;
    FUNC_3(VAR_6->entries[VAR_11].ret, VAR_10, VAR_2);
    FUNC_3(VAR_6->entries[VAR_11].data_public_key, VAR_9, VAR_5);
    VAR_6->entries[VAR_11].time = FUNC_5();

    FUNC_3(VAR_4, VAR_6->dht->self_public_key, VAR_5);
    FUNC_4(VAR_6->entries, VAR_0, sizeof(Onion_Announce_Entry), VAR_3);
    return FUNC_1(VAR_6, VAR_8);
}
