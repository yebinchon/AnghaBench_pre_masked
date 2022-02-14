
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RowSetEntry {scalar_t__ v; struct RowSetEntry* pRight; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct RowSetEntry *FUNC_1(
  struct RowSetEntry *VAR_0,
  struct RowSetEntry *VAR_1
){
  struct RowSetEntry VAR_2;
  struct RowSetEntry *VAR_3;

  VAR_3 = &VAR_2;
  FUNC_0( VAR_0!=0 && VAR_1!=0 );
  for(;;){
    FUNC_0( VAR_0->pRight==0 || VAR_0->v<=VAR_0->pRight->v );
    FUNC_0( VAR_1->pRight==0 || VAR_1->v<=VAR_1->pRight->v );
    if( VAR_0->v<=VAR_1->v ){
      if( VAR_0->v<VAR_1->v ) VAR_3 = VAR_3->pRight = VAR_0;
      VAR_0 = VAR_0->pRight;
      if( VAR_0==0 ){
        VAR_3->pRight = VAR_1;
        break;
      }
    }else{
      VAR_3 = VAR_3->pRight = VAR_1;
      VAR_1 = VAR_1->pRight;
      if( VAR_1==0 ){
        VAR_3->pRight = VAR_0;
        break;
      }
    }
  }
  return VAR_2.pRight;
}
