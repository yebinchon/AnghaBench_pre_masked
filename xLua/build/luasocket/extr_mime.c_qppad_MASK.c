
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int luaL_Buffer ;
typedef size_t UC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__* VAR_2 ;
 int FUNC_2 (size_t,int *) ;

__attribute__((used)) static size_t FUNC_3(UC *VAR_3, size_t VAR_4, luaL_Buffer *VAR_5)
{
    size_t VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        if (VAR_2[VAR_3[VAR_6]] == VAR_1) FUNC_0(VAR_5, VAR_3[VAR_6]);
        else FUNC_2(VAR_3[VAR_6], VAR_5);
    }
    if (VAR_4 > 0) FUNC_1(VAR_5, VAR_0);
    return 0;
}
