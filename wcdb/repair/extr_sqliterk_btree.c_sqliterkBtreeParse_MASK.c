
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* onEndParseBtree ) (int ,TYPE_2__*,int) ;int (* onBeginParseBtree ) (int ,TYPE_2__*) ;} ;
struct TYPE_8__ {int rk; TYPE_1__ notify; int rootpage; } ;
typedef TYPE_2__ sqliterk_btree ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*,int) ;

int FUNC_4(sqliterk_btree *VAR_1)
{
    if (!VAR_1) {
        return VAR_0;
    }
    if (VAR_1->notify.onBeginParseBtree) {
        VAR_1->notify.onBeginParseBtree(VAR_1->rk, VAR_1);
    }
    int VAR_2 =
        FUNC_0(VAR_1, FUNC_1(VAR_1->rootpage));
    if (VAR_1->notify.onEndParseBtree) {
        VAR_1->notify.onEndParseBtree(VAR_1->rk, VAR_1, VAR_2);
    }
    return VAR_2;
}
