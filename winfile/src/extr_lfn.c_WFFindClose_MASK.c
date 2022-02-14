
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hFindFile; } ;
typedef TYPE_1__* LPLFNDTA ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;

BOOL
FUNC_1(LPLFNDTA VAR_2)
{
    BOOL VAR_3;
    if (VAR_2->hFindFile == VAR_1) {
        return(VAR_0);
    }

    VAR_3 = FUNC_0(VAR_2->hFindFile);


    VAR_2->hFindFile = VAR_1;

    return(VAR_3);
}
