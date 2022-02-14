
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t pos; int fattr; int attr; int mode; TYPE_1__* stack; } ;
struct TYPE_5__ {int info; } ;
typedef TYPE_1__ CType ;
typedef TYPE_2__ CPDecl ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(CPDecl *VAR_8)
{
  CType *VAR_9 = &VAR_8->stack[VAR_8->pos];
  if (FUNC_4(VAR_9->info)) {





  } else {
    if ((VAR_8->attr & VAR_2) && !(VAR_8->mode & VAR_0))
      FUNC_2(VAR_8, FUNC_1(VAR_7, FUNC_0(VAR_1)),
       FUNC_3(VAR_8->attr));
  }
}
