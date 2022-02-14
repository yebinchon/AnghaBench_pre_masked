
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct WindowRewrite {int * pSubSelect; } ;
struct TYPE_5__ {struct WindowRewrite* pRewrite; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
typedef TYPE_2__ Walker ;
typedef int Select ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_1(Walker *VAR_2, Select *VAR_3){
  struct WindowRewrite *VAR_4 = VAR_2->u.pRewrite;
  Select *VAR_5 = VAR_4->pSubSelect;
  if( VAR_5==VAR_3 ){
    return VAR_0;
  }else{
    VAR_4->pSubSelect = VAR_3;
    FUNC_0(VAR_2, VAR_3);
    VAR_4->pSubSelect = VAR_5;
  }
  return VAR_1;
}
