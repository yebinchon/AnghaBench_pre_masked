
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {int assoc6; int assoc4; int public_key; } ;
struct TYPE_4__ {TYPE_2__* close_clientlist; } ;
typedef TYPE_1__ DHT ;
typedef TYPE_2__ Client_data ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_1 ;

void FUNC_4(DHT *VAR_2)
{
    uint32_t VAR_3;
    FUNC_2("___________________CLOSE________________________________\n");

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        Client_data *VAR_4 = &VAR_2->close_clientlist[VAR_3];

        if (FUNC_3(VAR_4->public_key, VAR_1) == 0)
            continue;

        FUNC_2("ClientID: ");
        FUNC_1(VAR_4->public_key);

        FUNC_0(&VAR_4->assoc4, 1);
        FUNC_0(&VAR_4->assoc6, 1);
    }
}
