
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int data32 ;
typedef int Messenger ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int const*) ;
 int FUNC_1 (int ,int *,int const*,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__*,int const*,int) ;
 int VAR_2 ;

int FUNC_3(Messenger *VAR_3, const uint8_t *VAR_4, uint32_t VAR_5)
{
    uint32_t VAR_6[2];
    uint32_t VAR_7 = sizeof(VAR_6);

    if (VAR_5 < VAR_7)
        return -1;

    FUNC_2(VAR_6, VAR_4, sizeof(uint32_t));
    FUNC_0(VAR_6 + 1, VAR_4 + sizeof(uint32_t));

    if (!VAR_6[0] && (VAR_6[1] == VAR_0))
        return FUNC_1(VAR_2, VAR_3, VAR_4 + VAR_7,
                          VAR_5 - VAR_7, VAR_1);
    else
        return -1;
}
