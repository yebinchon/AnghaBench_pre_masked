
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_10__ {scalar_t__ status; } ;
struct TYPE_9__ {int unconfirmed_connection_queue_index; TYPE_2__* unconfirmed_connection_queue; TYPE_2__* incomming_connection_queue; int secret_key; } ;
typedef TYPE_1__ TCP_Server ;
typedef TYPE_2__ TCP_Secure_Connection ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_4(TCP_Server *VAR_3, uint32_t VAR_4)
{
    if (VAR_3->incomming_connection_queue[VAR_4].status != VAR_1)
        return -1;

    int VAR_5 = FUNC_2(&VAR_3->incomming_connection_queue[VAR_4], VAR_3->secret_key);

    if (VAR_5 == -1) {
        FUNC_0(&VAR_3->incomming_connection_queue[VAR_4]);
    } else if (VAR_5 == 1) {
        int VAR_6 = VAR_3->unconfirmed_connection_queue_index % VAR_0;
        TCP_Secure_Connection *VAR_7 = &VAR_3->incomming_connection_queue[VAR_4];
        TCP_Secure_Connection *VAR_8 = &VAR_3->unconfirmed_connection_queue[VAR_6];

        if (VAR_8->status != VAR_2)
            FUNC_0(VAR_8);

        FUNC_1(VAR_8, VAR_7, sizeof(TCP_Secure_Connection));
        FUNC_3(VAR_7, sizeof(TCP_Secure_Connection));
        ++VAR_3->unconfirmed_connection_queue_index;

        return VAR_6;
    }

    return -1;
}
