
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int stream_t ;
typedef int int32_t ;


 int FUNC_0 (int *,int*,int) ;

__attribute__((used)) static int32_t FUNC_1 (stream_t *VAR_0)
{
    uint32_t VAR_1 = 0;
    uint8_t VAR_2;

    for (unsigned VAR_3 = 0; VAR_3 < 4; VAR_3++)
    {
        if (FUNC_0 (VAR_0, &VAR_2, 1) < 1)
            return -1;

        VAR_1 = (VAR_1 << 7) | (VAR_2 & 0x7f);
        if ((VAR_2 & 0x80) == 0)
            return VAR_1;
    }

    return -1;
}
