
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ sqliterk_page ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

int FUNC_1(sqliterk_page *VAR_2)
{
    if (!VAR_2) {
        return VAR_0;
    }
    if (VAR_2->data) {
        FUNC_0(VAR_2->data);
        VAR_2->data = ((void*)0);
    }
    return VAR_1;
}
