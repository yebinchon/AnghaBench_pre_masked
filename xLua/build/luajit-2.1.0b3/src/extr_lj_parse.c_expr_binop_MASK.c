
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {scalar_t__ left; scalar_t__ right; } ;
struct TYPE_8__ {int fs; int tok; } ;
typedef TYPE_1__ LexState ;
typedef int ExpDesc ;
typedef size_t BinOpr ;


 size_t VAR_0 ;
 int FUNC_0 (int ,size_t,int *,int *) ;
 int FUNC_1 (int ,size_t,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 size_t FUNC_6 (int ) ;

__attribute__((used)) static BinOpr FUNC_7(LexState *VAR_2, ExpDesc *VAR_3, uint32_t VAR_4)
{
  BinOpr VAR_5;
  FUNC_4(VAR_2);
  FUNC_2(VAR_2, VAR_3);
  VAR_5 = FUNC_6(VAR_2->tok);
  while (VAR_5 != VAR_0 && VAR_1[VAR_5].left > VAR_4) {
    ExpDesc VAR_6;
    BinOpr VAR_7;
    FUNC_3(VAR_2);
    FUNC_1(VAR_2->fs, VAR_5, VAR_3);

    VAR_7 = FUNC_7(VAR_2, &VAR_6, VAR_1[VAR_5].right);
    FUNC_0(VAR_2->fs, VAR_5, VAR_3, &VAR_6);
    VAR_5 = VAR_7;
  }
  FUNC_5(VAR_2);
  return VAR_5;
}
