
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,long,int ) ;
 long FUNC_1 (int *) ;

__attribute__((used)) static long
FUNC_2(FILE *VAR_2)
{
    long VAR_3, VAR_4;

    VAR_3 = FUNC_1(VAR_2);
    if (VAR_3 == -1) {
        return -1;
    }

    if (FUNC_0(VAR_2, 0, VAR_0) != 0) {
        return -1;
    }

    VAR_4 = FUNC_1(VAR_2);
    if (VAR_4 == -1) {
        return -1;
    }

    if (FUNC_0(VAR_2, VAR_3, VAR_1) != 0) {
        return -1;
    }

    return VAR_4;
}
