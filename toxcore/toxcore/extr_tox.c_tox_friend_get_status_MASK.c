
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Tox ;
typedef int TOX_USER_STATUS ;
typedef int TOX_ERR_FRIEND_QUERY ;
typedef int Messenger ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*,int ) ;

TOX_USER_STATUS FUNC_2(const Tox *VAR_4, uint32_t VAR_5, TOX_ERR_FRIEND_QUERY *VAR_6)
{
    const Messenger *VAR_7 = VAR_4;

    int VAR_8 = FUNC_1(VAR_7, VAR_5);

    if (VAR_8 == VAR_3) {
        FUNC_0(VAR_6, VAR_0);
        return VAR_2 + 1;
    }

    FUNC_0(VAR_6, VAR_1);
    return VAR_8;
}
