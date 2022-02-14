
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bo_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int) ;

bo_t *FUNC_5(const char *VAR_0)
{
    bo_t *VAR_1 = FUNC_4(sizeof(*VAR_1));
    if (!VAR_1)
        return ((void*)0);

    if(!FUNC_3(VAR_1, 1024))
    {
        FUNC_2(VAR_1);
        return ((void*)0);
    }

    FUNC_0 (VAR_1, 0);
    FUNC_1(VAR_1, VAR_0);

    return VAR_1;
}
