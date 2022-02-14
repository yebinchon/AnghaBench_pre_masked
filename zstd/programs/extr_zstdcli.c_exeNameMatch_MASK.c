
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static int FUNC_2(const char* VAR_0, const char* VAR_1)
{
    return !FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_1)) &&
        (VAR_0[FUNC_0(VAR_1)] == '\0' || VAR_0[FUNC_0(VAR_1)] == '.');
}
