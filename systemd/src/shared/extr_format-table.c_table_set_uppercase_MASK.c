
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uppercase; int formatted; } ;
typedef TYPE_1__ TableData ;
typedef int TableCell ;
typedef int Table ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 TYPE_1__* FUNC_4 (int *,int *) ;

int FUNC_5(Table *VAR_0, TableCell *VAR_1, bool VAR_2) {
        TableData *VAR_3;
        int VAR_4;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_4 = FUNC_3(VAR_0, VAR_1);
        if (VAR_4 < 0)
                return VAR_4;

        FUNC_1(VAR_3 = FUNC_4(VAR_0, VAR_1));

        if (VAR_3->uppercase == VAR_2)
                return 0;

        VAR_3->formatted = FUNC_2(VAR_3->formatted);
        VAR_3->uppercase = VAR_2;
        return 1;
}
