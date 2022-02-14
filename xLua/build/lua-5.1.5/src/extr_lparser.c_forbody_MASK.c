
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * fs; } ;
typedef TYPE_1__ LexState ;
typedef int FuncState ;
typedef int BlockCnt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int,int ,int) ;
 int FUNC_6 (int *,int ,int,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static void FUNC_12 (LexState *VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9) {

  BlockCnt VAR_10;
  FuncState *VAR_11 = VAR_5->fs;
  int VAR_12, VAR_13;
  FUNC_0(VAR_5, 3);
  FUNC_2(VAR_5, VAR_4);
  VAR_12 = VAR_9 ? FUNC_6(VAR_11, VAR_2, VAR_6, VAR_0) : FUNC_8(VAR_11);
  FUNC_3(VAR_11, &VAR_10, 0);
  FUNC_0(VAR_5, VAR_8);
  FUNC_11(VAR_11, VAR_8);
  FUNC_1(VAR_5);
  FUNC_4(VAR_11);
  FUNC_10(VAR_11, VAR_12);
  VAR_13 = (VAR_9) ? FUNC_6(VAR_11, VAR_1, VAR_6, VAR_0) :
                     FUNC_5(VAR_11, VAR_3, VAR_6, 0, VAR_8);
  FUNC_7(VAR_11, VAR_7);
  FUNC_9(VAR_11, (VAR_9 ? VAR_13 : FUNC_8(VAR_11)), VAR_12 + 1);
}
