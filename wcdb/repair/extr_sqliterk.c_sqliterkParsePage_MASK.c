
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqliterk_btree ;
struct TYPE_5__ {int pager; } ;
typedef TYPE_1__ sqliterk ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int,int **) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 scalar_t__ VAR_2 ;

int FUNC_4(sqliterk *VAR_3, int VAR_4)
{
    if (!VAR_3) {
        return VAR_0;
    }
    if (FUNC_2(VAR_3->pager, VAR_4) !=
        VAR_2) {
        return VAR_1;
    }
    int VAR_5 = VAR_1;
    sqliterk_btree *VAR_6 = ((void*)0);
    VAR_5 = FUNC_1(VAR_3, VAR_3->pager, VAR_4, &VAR_6);
    if (VAR_5 != VAR_1) {
        goto sqliterkParsePage_End;
    }
    VAR_5 = FUNC_3(VAR_3, VAR_6);
sqliterkParsePage_End:
    if (VAR_6) {
        FUNC_0(VAR_6);
    }
    return VAR_5;
}
