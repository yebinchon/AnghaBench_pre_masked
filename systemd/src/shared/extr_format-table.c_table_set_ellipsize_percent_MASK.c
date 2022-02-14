
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TableCell ;
typedef int Table ;
struct TYPE_2__ {unsigned int ellipsize_percent; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int *,int *) ;

int FUNC_3(Table *VAR_0, TableCell *VAR_1, unsigned VAR_2) {
        int VAR_3;

        FUNC_0(*VAR_0);
        FUNC_0(*VAR_1);

        if (VAR_2 == (unsigned) -1)
                VAR_2 = 100;

        FUNC_0(VAR_2 <= 100);

        VAR_3 = FUNC_1(VAR_0, VAR_1);
        if (VAR_3 < 0)
                return VAR_3;

        FUNC_2(VAR_0, VAR_1)->ellipsize_percent = VAR_2;
        return 0;
}
