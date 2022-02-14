
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqliterk_page ;
typedef int sqliterk_btree ;
struct TYPE_3__ {int listen; int pager; } ;
typedef TYPE_1__ sqliterk ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(sqliterk *VAR_2, sqliterk_btree *VAR_3)
{
    if (!VAR_2) {
        return VAR_0;
    }
    sqliterk_page *VAR_4 = FUNC_0(VAR_3);
    int VAR_5 = FUNC_3(VAR_4);
    if (!VAR_4 || FUNC_4(VAR_2->pager, VAR_5) != VAR_1) {
        return VAR_0;
    }
    int VAR_6 = VAR_1;
    FUNC_2(VAR_3, &VAR_2->listen);
    VAR_6 = FUNC_1(VAR_3);
    return VAR_6;
}
