
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int pVdbe; } ;
typedef TYPE_1__ Parse ;
typedef int Expr ;
typedef int CollSeq ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (int ,int,int,int,int,void*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(
  Parse *VAR_1,
  Expr *VAR_2,
  Expr *VAR_3,
  int VAR_4,
  int VAR_5, int VAR_6,
  int VAR_7,
  int VAR_8
){
  int VAR_9;
  int VAR_10;
  CollSeq *VAR_11;

  VAR_11 = FUNC_1(VAR_1, VAR_2, VAR_3);
  VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_8);
  VAR_10 = FUNC_2(VAR_1->pVdbe, VAR_4, VAR_6, VAR_7, VAR_5,
                           (void*)VAR_11, VAR_0);
  FUNC_3(VAR_1->pVdbe, (u8)VAR_9);
  return VAR_10;
}
