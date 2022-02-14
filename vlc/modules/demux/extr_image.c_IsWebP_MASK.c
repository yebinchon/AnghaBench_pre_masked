
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int stream_t ;


 scalar_t__ FUNC_0 (int const*,char*,int) ;
 int FUNC_1 (int *,int const**,int) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static bool FUNC_3(stream_t *VAR_0)
{
    const uint8_t *VAR_1;
    if (FUNC_1(VAR_0, &VAR_1, 20) < 20)
        return 0;
    if (FUNC_0(&VAR_1[0], "RIFF", 4))
        return 0;

    if (FUNC_0(&VAR_1[8], "WEBPVP8 ", 8))
        return 0;

    return FUNC_2(VAR_0, 20) == 0;
}
