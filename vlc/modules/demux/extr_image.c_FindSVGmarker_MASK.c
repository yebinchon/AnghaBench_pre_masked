
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int const*,char const*,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static bool FUNC_2(int *VAR_0, const uint8_t *VAR_1, const int VAR_2, const char *VAR_3)
{
    for( int VAR_4 = *VAR_0; VAR_4 < VAR_2; VAR_4++)
    {
        if (FUNC_0(&VAR_1[VAR_4], VAR_3, FUNC_1(VAR_3)) == 0)
        {
            *VAR_0 = VAR_4;
            return 1;
        }
    }
    return 0;
}
