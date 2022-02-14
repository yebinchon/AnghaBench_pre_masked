
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ values; scalar_t__ overflowPages; } ;
typedef TYPE_1__ sqliterk_column ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(sqliterk_column *VAR_2)
{
    if (!VAR_2) {
        return VAR_0;
    }
    if (VAR_2->overflowPages) {
        FUNC_1(VAR_2->overflowPages);
    }
    if (VAR_2->values) {
        FUNC_1(VAR_2->values);
    }
    FUNC_0(VAR_2);
    return VAR_1;
}
