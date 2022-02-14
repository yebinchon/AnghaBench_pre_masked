
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 size_t FUNC_0 (char const*,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0)
{
    for (int VAR_1 = 0;;)
    {
        uint32_t VAR_2;
        size_t VAR_3 = FUNC_0(VAR_0, &VAR_2);

        if (VAR_3 == 0)
            return VAR_1;
        if (VAR_3 == (size_t)-1)
            return -1;
        VAR_0 += VAR_3;

        int VAR_4 = FUNC_1(VAR_2);
        if (VAR_4 == -1)
            return -1;
        VAR_1 += VAR_4;
    }
}
