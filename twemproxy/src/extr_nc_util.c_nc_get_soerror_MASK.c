
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int err ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int*,int*) ;

int
FUNC_1(int VAR_3)
{
    int VAR_4, VAR_5;
    socklen_t VAR_6;

    VAR_5 = 0;
    VAR_6 = sizeof(VAR_5);

    VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_1, &VAR_5, &VAR_6);
    if (VAR_4 == 0) {
        VAR_2 = VAR_5;
    }

    return VAR_4;
}
