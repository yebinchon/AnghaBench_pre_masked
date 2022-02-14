
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int stream_t ;


 scalar_t__ FUNC_0 (int const*,char*,int) ;
 int FUNC_1 (int *,int const**,int) ;

__attribute__((used)) static bool FUNC_2(stream_t *VAR_0)
{
    const uint8_t *VAR_1;
    if (FUNC_1(VAR_0, &VAR_1, 36) < 36)
        return 0;
    if (VAR_1[0] != 0xff || VAR_1[1] != 0xd8 ||
        VAR_1[2] != 0xff || VAR_1[3] != 0xe8)
        return 0;
    if (FUNC_0(&VAR_1[6], "SPIFF\0", 6))
        return 0;
    return 1;
}
