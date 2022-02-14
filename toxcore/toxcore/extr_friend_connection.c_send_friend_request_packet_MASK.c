
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int const uint32_t ;
typedef int uint16_t ;
typedef int packet ;
typedef int nospam_num ;
struct TYPE_7__ {scalar_t__ status; int onion_friendnum; int crypt_connection_id; } ;
struct TYPE_6__ {int onion_c; int net_crypto; } ;
typedef TYPE_1__ Friend_Connections ;
typedef TYPE_2__ Friend_Conn ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ,int *,int,int ) ;

int FUNC_4(Friend_Connections *VAR_4, int VAR_5, uint32_t VAR_6, const uint8_t *VAR_7,
                               uint16_t VAR_8)
{
    if (1 + sizeof(VAR_6) + VAR_8 > VAR_2 || VAR_8 == 0)
        return -1;

    Friend_Conn *VAR_9 = FUNC_0(VAR_4, VAR_5);

    if (!VAR_9)
        return -1;

    uint8_t VAR_10[1 + sizeof(VAR_6) + VAR_8];
    FUNC_1(VAR_10 + 1, &VAR_6, sizeof(VAR_6));
    FUNC_1(VAR_10 + 1 + sizeof(VAR_6), VAR_7, VAR_8);

    if (VAR_9->status == VAR_1) {
        VAR_10[0] = VAR_3;
        return FUNC_3(VAR_4->net_crypto, VAR_9->crypt_connection_id, VAR_10, sizeof(VAR_10), 0) != -1;
    } else {
        VAR_10[0] = VAR_0;
        int VAR_11 = FUNC_2(VAR_4->onion_c, VAR_9->onion_friendnum, VAR_10, sizeof(VAR_10));

        if (VAR_11 <= 0)
            return -1;

        return VAR_11;
    }
}
