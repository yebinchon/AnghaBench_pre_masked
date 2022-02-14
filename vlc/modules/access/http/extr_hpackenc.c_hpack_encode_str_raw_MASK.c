
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 size_t FUNC_0 (scalar_t__*,size_t,size_t,int) ;
 int FUNC_1 (scalar_t__*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static size_t FUNC_3(uint8_t *restrict VAR_0, size_t VAR_1,
                                   const char *VAR_2)
{
    size_t VAR_3 = FUNC_2(VAR_2);

    if (VAR_1 > 0)
        *VAR_0 = 0;

    size_t VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3, 7);
    if (VAR_4 < VAR_1)
    {
        VAR_0 += VAR_4;
        VAR_1 -= VAR_4;

        FUNC_1(VAR_0, VAR_2, (VAR_3 <= VAR_1) ? VAR_3 : VAR_1);
    }
    VAR_4 += VAR_3;
    return VAR_4;
}
