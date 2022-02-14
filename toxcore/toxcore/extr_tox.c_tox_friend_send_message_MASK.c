
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int Tox ;
typedef int TOX_MESSAGE_TYPE ;
typedef int TOX_ERR_FRIEND_SEND_MESSAGE ;
typedef int Messenger ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int const*,size_t,int *) ;
 int FUNC_2 (int ,int *) ;

uint32_t FUNC_3(Tox *VAR_2, uint32_t VAR_3, TOX_MESSAGE_TYPE VAR_4, const uint8_t *VAR_5,
                                 size_t VAR_6, TOX_ERR_FRIEND_SEND_MESSAGE *VAR_7)
{
    if (!VAR_5) {
        FUNC_0(VAR_7, VAR_1);
        return 0;
    }

    if (!VAR_6) {
        FUNC_0(VAR_7, VAR_0);
        return 0;
    }

    Messenger *VAR_8 = VAR_2;
    uint32_t VAR_9 = 0;
    FUNC_2(FUNC_1(VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, &VAR_9), VAR_7);
    return VAR_9;
}
