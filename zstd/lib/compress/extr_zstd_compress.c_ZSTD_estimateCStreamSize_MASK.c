
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 size_t FUNC_1 (int) ;

size_t FUNC_2(int VAR_0)
{
    int VAR_1;
    size_t VAR_2 = 0;
    for (VAR_1=FUNC_0(VAR_0, 1); VAR_1<=VAR_0; VAR_1++) {
        size_t const VAR_3 = FUNC_1(VAR_1);
        if (VAR_3 > VAR_2) VAR_2 = VAR_3;
    }
    return VAR_2;
}
