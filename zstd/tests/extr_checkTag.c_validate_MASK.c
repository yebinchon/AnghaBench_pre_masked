
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* const VAR_0 ;
 size_t FUNC_0 (char const* const) ;
 scalar_t__ FUNC_1 (char const* const,char const* const,size_t const) ;

__attribute__((used)) static int FUNC_2(const char* const VAR_1)
{
    size_t const VAR_2 = FUNC_0(VAR_1);
    size_t const VAR_3 = FUNC_0(VAR_0);

    if (VAR_2 < 2) return 0;
    if (VAR_1[0] != 'v') return 0;
    if (VAR_2 <= VAR_3) return 0;

    if (FUNC_1(VAR_0, VAR_1+1, VAR_3)) return 0;

    return 1;
}
