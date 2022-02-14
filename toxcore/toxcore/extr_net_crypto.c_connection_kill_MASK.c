
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connection_status_callback_id; int connection_status_callback_object; int (* connection_status_callback ) (int ,int ,int ) ;} ;
typedef int Net_Crypto ;
typedef TYPE_1__ Crypto_Connection ;


 int FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(Net_Crypto *VAR_0, int VAR_1)
{
    Crypto_Connection *VAR_2 = FUNC_1(VAR_0, VAR_1);

    if (VAR_2 == 0)
        return;

    if (VAR_2->connection_status_callback) {
        VAR_2->connection_status_callback(VAR_2->connection_status_callback_object, VAR_2->connection_status_callback_id, 0);
    }

    FUNC_0(VAR_0, VAR_1);
}
