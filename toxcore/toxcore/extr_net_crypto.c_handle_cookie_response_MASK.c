
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint16_t ;
typedef int plain ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,int const*,int const*,scalar_t__,int *) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(uint8_t *VAR_3, uint64_t *VAR_4, const uint8_t *VAR_5, uint16_t VAR_6,
                                  const uint8_t *VAR_7)
{
    if (VAR_6 != VAR_1)
        return -1;

    uint8_t VAR_8[VAR_0 + sizeof(uint64_t)];
    int VAR_9 = FUNC_0(VAR_7, VAR_5 + 1, VAR_5 + 1 + VAR_2,
                                     VAR_6 - (1 + VAR_2), VAR_8);

    if (VAR_9 != sizeof(VAR_8))
        return -1;

    FUNC_1(VAR_3, VAR_8, VAR_0);
    FUNC_1(VAR_4, VAR_8 + VAR_0, sizeof(uint64_t));
    return VAR_0;
}
