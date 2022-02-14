
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {TYPE_3__* m; TYPE_4__* chats; } ;
struct TYPE_13__ {int number_joined; int real_pk; scalar_t__ peer_number; int * identifier; int status; } ;
struct TYPE_12__ {int name_length; int name; TYPE_2__* dht; TYPE_1__* net_crypto; } ;
struct TYPE_11__ {int self_public_key; } ;
struct TYPE_10__ {int self_public_key; } ;
typedef TYPE_4__ Group_c ;
typedef TYPE_5__ Group_Chats ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int,int ,int ,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*,int,int,int ,int ) ;

int FUNC_5(Group_Chats *VAR_2, uint8_t VAR_3)
{
    int VAR_4 = FUNC_1(VAR_2);

    if (VAR_4 == -1)
        return -1;

    Group_c *VAR_5 = &VAR_2->chats[VAR_4];

    VAR_5->status = VAR_0;
    VAR_5->number_joined = -1;
    FUNC_3(VAR_5->identifier + 1);
    VAR_5->identifier[0] = VAR_3;
    VAR_5->peer_number = 0;
    FUNC_2(VAR_5->real_pk, VAR_2->m->net_crypto->self_public_key, VAR_1);
    int VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_5->real_pk, VAR_2->m->dht->self_public_key, 0);

    if (VAR_6 == -1) {
        return -1;
    }

    FUNC_4(VAR_2, VAR_4, VAR_6, VAR_2->m->name, VAR_2->m->name_length);

    return VAR_4;
}
