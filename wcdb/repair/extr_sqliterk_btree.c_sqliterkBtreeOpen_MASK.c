
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqliterk_pager ;
struct TYPE_6__ {int maxLocal; int minLocal; int maxLeaf; int minLeaf; int * rk; int * pager; int rootpage; int type; } ;
typedef TYPE_1__ sqliterk_btree ;
typedef int sqliterk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





int FUNC_7(sqliterk *VAR_7,
                      sqliterk_pager *VAR_8,
                      int VAR_9,
                      sqliterk_btree **VAR_10)
{
    if (!VAR_8 || !VAR_10) {
        return VAR_1;
    }
    int VAR_11 = VAR_3;
    sqliterk_btree *VAR_12 = FUNC_2(sizeof(sqliterk_btree));
    if (!VAR_12) {
        VAR_11 = VAR_2;
        goto sqliterkBtreeOpen_Failed;
    }
    VAR_12->pager = VAR_8;

    VAR_11 = FUNC_3(VAR_12->pager, VAR_9, &VAR_12->rootpage);
    if (VAR_11 != VAR_3) {
        goto sqliterkBtreeOpen_Failed;
    }
    if (VAR_9 == 1) {
        VAR_11 = FUNC_1(VAR_12, "sqlite_master",
                                  VAR_5);
        if (VAR_11 != VAR_3) {
            goto sqliterkBtreeOpen_Failed;
        }
    } else {
        switch (FUNC_5(VAR_12->rootpage)) {
            case 131:
            case 129:
                VAR_12->type = VAR_4;
                break;
            case 130:
            case 128:
                VAR_12->type = VAR_6;
                break;
            default:
                VAR_11 = VAR_0;
                goto sqliterkBtreeOpen_Failed;
        }
    }

    FUNC_4(VAR_12->rootpage);

    VAR_12->maxLocal =
        (FUNC_6(VAR_12->pager) - 12) * 64 / 255 - 23;
    VAR_12->minLocal =
        (FUNC_6(VAR_12->pager) - 12) * 32 / 255 - 23;
    VAR_12->maxLeaf = FUNC_6(VAR_12->pager) - 35;
    VAR_12->minLeaf =
        (FUNC_6(VAR_12->pager) - 12) * 32 / 255 - 23;

    VAR_12->rk = VAR_7;

    *VAR_10 = VAR_12;
    return VAR_3;

sqliterkBtreeOpen_Failed:
    if (VAR_12) {
        FUNC_0(VAR_12);
    }
    *VAR_10 = ((void*)0);
    return VAR_11;
}
