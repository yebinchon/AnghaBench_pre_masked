
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pager; } ;
typedef TYPE_1__ sqliterk ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

int FUNC_2(sqliterk *VAR_2)
{
    if (!VAR_2) {
        return VAR_0;
    }

    int VAR_3;
    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->pager); VAR_3++) {
        int VAR_4 = VAR_3 + 1;
        FUNC_1(VAR_2, VAR_4);
    }
    return VAR_1;
}
