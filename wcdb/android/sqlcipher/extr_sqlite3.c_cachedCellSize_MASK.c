
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {int nCell; scalar_t__* szCell; } ;
typedef TYPE_1__ CellArray ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static u16 FUNC_2(CellArray *VAR_0, int VAR_1){
  FUNC_0( VAR_1>=0 && VAR_1<VAR_0->nCell );
  if( VAR_0->szCell[VAR_1] ) return VAR_0->szCell[VAR_1];
  return FUNC_1(VAR_0, VAR_1);
}
