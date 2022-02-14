
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int VAR_2 ;
 void* FUNC_1 (size_t,size_t) ;

int FUNC_2(void **VAR_3, size_t VAR_4, size_t VAR_5)
{
    int VAR_6 = FUNC_0(VAR_4);
    if (VAR_6)
        return VAR_6;




    if (VAR_5 > (VAR_1 / 2))
        return VAR_0;

    VAR_5 += (-VAR_5) & (VAR_4 - 1);

    int VAR_7 = VAR_2;
    void *VAR_8 = FUNC_1(VAR_4, VAR_5);
    if (VAR_8 == ((void*)0)) {
        VAR_6 = VAR_2;
        VAR_2 = VAR_7;
        return VAR_6;
    }

    *VAR_3 = VAR_8;
    return 0;
}
