
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,int*,int*) ;

__attribute__((used)) static bool FUNC_1( const char *VAR_0, int VAR_1 )
{
    int VAR_2, VAR_3;
    int VAR_4 = FUNC_0(VAR_0, "%d-%d", &VAR_2, &VAR_3);
    if (VAR_4 == 0)
        return 0;
    else if (VAR_4 == 1)
        return VAR_2 == VAR_1;
    return (VAR_1 >= VAR_2 && VAR_1 <= VAR_3)
        || (VAR_2 > VAR_3 && (VAR_1 <= VAR_2 && VAR_1 >= VAR_3));
}
