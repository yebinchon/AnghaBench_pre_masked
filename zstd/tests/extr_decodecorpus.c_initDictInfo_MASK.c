
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dictOp ;
struct TYPE_4__ {int useDict; size_t dictContentSize; int dictID; int * dictContent; } ;
typedef TYPE_1__ dictInfo ;
typedef int U32 ;
typedef int BYTE ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static dictInfo FUNC_1(int VAR_0, size_t VAR_1, BYTE* VAR_2, U32 VAR_3){

    dictInfo VAR_4;
    FUNC_0(&VAR_4, 0, sizeof(VAR_4));
    VAR_4.useDict = VAR_0;
    VAR_4.dictContentSize = VAR_1;
    VAR_4.dictContent = VAR_2;
    VAR_4.dictID = VAR_3;
    return VAR_4;
}
