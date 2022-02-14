
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_9__ {int crypt_connection_id; int onion_friendnum; int real_public_key; int status; int lock_count; } ;
struct TYPE_8__ {int onion_c; TYPE_2__* conns; } ;
typedef TYPE_1__ Friend_Connections ;
typedef TYPE_2__ Friend_Conn ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int const*) ;
 int FUNC_2 (int ,int const*,int ) ;
 int FUNC_3 (int ,int const*) ;
 int FUNC_4 (int ,int,int *,TYPE_1__*,int) ;
 int FUNC_5 (int ,int,int *,TYPE_1__*,int) ;
 int VAR_3 ;

int FUNC_6(Friend_Connections *VAR_4, const uint8_t *VAR_5)
{
    int VAR_6 = FUNC_1(VAR_4, VAR_5);

    if (VAR_6 != -1) {
        ++VAR_4->conns[VAR_6].lock_count;
        return VAR_6;
    }

    VAR_6 = FUNC_0(VAR_4);

    if (VAR_6 == -1)
        return -1;

    int32_t VAR_7 = FUNC_3(VAR_4->onion_c, VAR_5);

    if (VAR_7 == -1)
        return -1;

    Friend_Conn *VAR_8 = &VAR_4->conns[VAR_6];

    VAR_8->crypt_connection_id = -1;
    VAR_8->status = VAR_0;
    FUNC_2(VAR_8->real_public_key, VAR_5, VAR_1);
    VAR_8->onion_friendnum = VAR_7;

    FUNC_5(VAR_4->onion_c, VAR_7, &VAR_3, VAR_4, VAR_6);
    FUNC_4(VAR_4->onion_c, VAR_7, &VAR_2, VAR_4, VAR_6);

    return VAR_6;
}
