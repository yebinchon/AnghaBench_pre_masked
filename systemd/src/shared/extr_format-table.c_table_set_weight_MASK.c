
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TableCell ;
typedef int Table ;
struct TYPE_2__ {unsigned int weight; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int *,int *) ;

int FUNC_3(Table *VAR_1, TableCell *VAR_2, unsigned VAR_3) {
        int VAR_4;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        if (VAR_3 == (unsigned) -1)
                VAR_3 = VAR_0;

        VAR_4 = FUNC_1(VAR_1, VAR_2);
        if (VAR_4 < 0)
                return VAR_4;

        FUNC_2(VAR_1, VAR_2)->weight = VAR_3;
        return 0;
}
