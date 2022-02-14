
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int stream_t ;


 int FUNC_0 (int*,int const*,int) ;
 scalar_t__ FUNC_1 (int const*,char*,int) ;
 int FUNC_2 (int *,int const**,int) ;

__attribute__((used)) static bool FUNC_3(stream_t *VAR_0)
{
    const uint8_t *VAR_1;
    int VAR_2 = FUNC_2(VAR_0, &VAR_1, 256);
    int VAR_3 = 0;

    if (FUNC_0(&VAR_3, VAR_1, VAR_2) != 0xd8)
        return 0;
    if (FUNC_0(&VAR_3, VAR_1, VAR_2) != 0xe0)
        return 0;
    VAR_3 += 2;
    if (VAR_3 + 5 > VAR_2)
        return 0;
    if (FUNC_1(&VAR_1[VAR_3], "JFIF\0", 5))
        return 0;
    return 1;
}
