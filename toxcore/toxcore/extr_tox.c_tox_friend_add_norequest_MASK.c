
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
 scalar_t__ FUNC_1 (int *,int const*) ;
 int FUNC_2 (scalar_t__,int *) ;

uint32_t FUNC_3(Tox *VAR_3, const uint8_t *VAR_4, TOX_ERR_FRIEND_ADD *VAR_5)
{
    if (!VAR_4) {
        FUNC_0(VAR_5, VAR_0);
        return VAR_2;
    }

    Messenger *VAR_6 = VAR_3;
    int32_t VAR_7 = FUNC_1(VAR_6, VAR_4);

    if (VAR_7 >= 0) {
        FUNC_0(VAR_5, VAR_1);
        return VAR_7;
    }

    FUNC_2(VAR_7, VAR_5);
    return VAR_2;
}
