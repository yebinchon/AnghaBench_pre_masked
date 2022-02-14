
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int dht_temp_pk; scalar_t__ dht_lock; int dht_pk_lastrecv; } ;
struct TYPE_7__ {int dht; } ;
typedef TYPE_1__ Friend_Connections ;
typedef TYPE_2__ Friend_Conn ;


 int FUNC_0 (int ,int const*,int ,TYPE_1__*,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int const*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(Friend_Connections *VAR_2, int VAR_3, const uint8_t *VAR_4)
{
    Friend_Conn *VAR_5 = FUNC_2(VAR_2, VAR_3);

    if (!VAR_5)
        return;

    VAR_5->dht_pk_lastrecv = FUNC_5();

    if (VAR_5->dht_lock) {
        if (FUNC_1(VAR_2->dht, VAR_5->dht_temp_pk, VAR_5->dht_lock) != 0) {
            FUNC_4("a. Could not delete dht peer. Please report this.\n");
            return;
        }

        VAR_5->dht_lock = 0;
    }

    FUNC_0(VAR_2->dht, VAR_4, VAR_1, VAR_2, VAR_3, &VAR_5->dht_lock);
    FUNC_3(VAR_5->dht_temp_pk, VAR_4, VAR_0);
}
