
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nCol; int iPKey; TYPE_4__* aCol; } ;
typedef TYPE_2__ Table ;
struct TYPE_10__ {int colFlags; int zName; } ;
struct TYPE_9__ {int nCol; TYPE_1__* aCol; } ;
struct TYPE_7__ {char* zCol; } ;
typedef TYPE_3__ FKey ;
typedef TYPE_4__ Column ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(
  Table *VAR_1,
  FKey *VAR_2,
  int *VAR_3,
  int VAR_4
){
  int VAR_5;
  for(VAR_5=0; VAR_5<VAR_2->nCol; VAR_5++){
    char *VAR_6 = VAR_2->aCol[VAR_5].zCol;
    int VAR_7;
    for(VAR_7=0; VAR_7<VAR_1->nCol; VAR_7++){
      if( VAR_3[VAR_7]>=0 || (VAR_7==VAR_1->iPKey && VAR_4) ){
        Column *VAR_8 = &VAR_1->aCol[VAR_7];
        if( VAR_6 ){
          if( 0==FUNC_0(VAR_8->zName, VAR_6) ) return 1;
        }else if( VAR_8->colFlags & VAR_0 ){
          return 1;
        }
      }
    }
  }
  return 0;
}
