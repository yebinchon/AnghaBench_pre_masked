
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Tox ;
typedef int TOX_ERR_FRIEND_QUERY ;
typedef int Messenger ;


 int FUNC_0 (int *,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const*,int ) ;

size_t FUNC_2(const Tox *VAR_3, uint32_t VAR_4, TOX_ERR_FRIEND_QUERY *VAR_5)
{
    const Messenger *VAR_6 = VAR_3;
    int VAR_7 = FUNC_1(VAR_6, VAR_4);

    if (VAR_7 == -1) {
        FUNC_0(VAR_5, VAR_1);
        return VAR_0;
    }

    FUNC_0(VAR_5, VAR_2);
    return VAR_7;
}
