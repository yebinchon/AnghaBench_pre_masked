
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ id; } ;
struct TYPE_14__ {char tok; int mode; int cts; int str; TYPE_2__* ct; TYPE_1__ val; int tmask; } ;
struct TYPE_13__ {int info; scalar_t__ size; int sib; int name; } ;
typedef scalar_t__ CTypeID ;
typedef TYPE_2__ CType ;
typedef int CTInfo ;
typedef TYPE_3__ CPState ;
typedef int CPDecl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__**) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static CTypeID FUNC_10(CPState *VAR_9, CPDecl *VAR_10, CTInfo VAR_11)
{
  CTypeID VAR_12;
  CType *VAR_13;
  VAR_9->tmask = VAR_2;
  FUNC_3(VAR_9);
  FUNC_0(VAR_9, VAR_10);
  VAR_9->tmask = VAR_1;
  if (VAR_9->tok != '{') {
    if (VAR_9->tok != VAR_5) FUNC_1(VAR_9, VAR_5);
    if (VAR_9->val.id) {
      VAR_12 = VAR_9->val.id;
      VAR_13 = VAR_9->ct;
      if ((VAR_13->info ^ VAR_11) & (VAR_4|VAR_3))
 FUNC_2(VAR_9, 0, VAR_8, FUNC_9(FUNC_5(FUNC_6(VAR_13->name))));
    } else {
      if ((VAR_9->mode & VAR_0))
 FUNC_2(VAR_9, 0, VAR_7, FUNC_9(VAR_9->str));
      VAR_12 = FUNC_8(VAR_9->cts, &VAR_13);
      VAR_13->info = VAR_11;
      VAR_13->size = VAR_6;
      FUNC_4(VAR_13, VAR_9->str);
      FUNC_7(VAR_9->cts, VAR_13, VAR_12);
    }
    FUNC_3(VAR_9);
  } else {
    VAR_12 = FUNC_8(VAR_9->cts, &VAR_13);
    VAR_13->info = VAR_11;
    VAR_13->size = VAR_6;
  }
  if (VAR_9->tok == '{') {
    if (VAR_13->size != VAR_6 || VAR_13->sib)
      FUNC_2(VAR_9, 0, VAR_8, FUNC_9(FUNC_5(FUNC_6(VAR_13->name))));
    VAR_13->sib = 1;
  }
  return VAR_12;
}
