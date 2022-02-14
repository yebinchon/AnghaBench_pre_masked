
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
typedef int Tox ;
typedef int TOX_ERR_FRIEND_ADD ;
typedef int Messenger ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,int const*,int const*,size_t) ;
 int FUNC_2 (scalar_t__,int *) ;

uint32_t FUNC_3(Tox *VAR_3, const uint8_t *VAR_4, const uint8_t *VAR_5, size_t VAR_6,
                        TOX_ERR_FRIEND_ADD *VAR_7)
{
    if (!VAR_4 || !VAR_5) {
        FUNC_0(VAR_7, VAR_0);
        return VAR_2;
    }

    Messenger *VAR_8 = VAR_3;
    int32_t VAR_9 = FUNC_1(VAR_8, VAR_4, VAR_5, VAR_6);

    if (VAR_9 >= 0) {
        FUNC_0(VAR_7, VAR_1);
        return VAR_9;
    }

    FUNC_2(VAR_9, VAR_7);
    return VAR_2;
}
