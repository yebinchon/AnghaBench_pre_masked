
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,size_t) ;
 void* FUNC_1 (int *,size_t,int,int ,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

void *FUNC_4(int *restrict VAR_4, size_t VAR_5)
{
    int VAR_6 = FUNC_3();
    if (VAR_6 == -1)
        return ((void*)0);

    if (FUNC_0(VAR_6, VAR_5)) {
error:
        FUNC_2(VAR_6);
        return ((void*)0);
    }

    void *VAR_7 = FUNC_1(((void*)0), VAR_5, VAR_2 | VAR_3, VAR_1, VAR_6, 0);
    if (VAR_7 == VAR_0)
        goto error;

    *VAR_4 = VAR_6;
    return VAR_7;
}
