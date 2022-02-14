
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int) ;

int
FUNC_1(int VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_0(VAR_3, VAR_0, 0);
    if (VAR_4 < 0) {
        return VAR_4;
    }

    return FUNC_0(VAR_3, VAR_1, VAR_4 & ~VAR_2);
}
