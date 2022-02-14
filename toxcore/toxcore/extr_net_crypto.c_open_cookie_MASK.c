
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int cookie_time ;
typedef int contents ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__ const*,scalar_t__ const*,scalar_t__ const*,int,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(uint8_t *VAR_5, const uint8_t *VAR_6, const uint8_t *VAR_7)
{
    uint8_t VAR_8[VAR_0];
    int VAR_9 = FUNC_0(VAR_7, VAR_6, VAR_6 + VAR_4,
                                     VAR_2 - VAR_4, VAR_8);

    if (VAR_9 != sizeof(VAR_8))
        return -1;

    uint64_t VAR_10;
    FUNC_1(&VAR_10, VAR_8, sizeof(VAR_10));
    uint64_t VAR_11 = FUNC_2();

    if (VAR_10 + VAR_3 < VAR_11 || VAR_11 < VAR_10)
        return -1;

    FUNC_1(VAR_5, VAR_8 + sizeof(VAR_10), VAR_1);
    return 0;
}
