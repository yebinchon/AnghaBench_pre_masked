
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {int attr; int mode; int bits; int nameid; int name; int pos; } ;
struct TYPE_21__ {int id; } ;
struct TYPE_22__ {scalar_t__ depth; char tok; TYPE_1__ val; int str; } ;
typedef int CTSize ;
typedef int CTInfo ;
typedef TYPE_2__ CPState ;
typedef int CPDeclIdx ;
typedef TYPE_3__ CPDecl ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (TYPE_2__*,char) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,char) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,char) ;
 int FUNC_13 (TYPE_3__*,int,int) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int) ;

__attribute__((used)) static void FUNC_16(CPState *VAR_15, CPDecl *VAR_16)
{
  if (++VAR_15->depth > VAR_0) FUNC_7(VAR_15, VAR_14);

  for (;;) {
    if (FUNC_12(VAR_15, '*')) {
      CTSize VAR_17;
      CTInfo VAR_18;
      FUNC_5(VAR_15, VAR_16);
      VAR_17 = VAR_12;
      VAR_18 = FUNC_1(VAR_13, VAR_4);






      VAR_18 += (VAR_16->attr & (VAR_5|VAR_6));
      VAR_16->attr &= ~(VAR_5|(VAR_7<<VAR_11));
      FUNC_13(VAR_16, VAR_18, VAR_17);
    } else if (FUNC_12(VAR_15, '&') || FUNC_12(VAR_15, VAR_8)) {
      VAR_16->attr &= ~(VAR_5|(VAR_7<<VAR_11));
      FUNC_13(VAR_16, FUNC_2(0), VAR_12);
    } else {
      break;
    }
  }

  if (FUNC_12(VAR_15, '(')) {
    CPDeclIdx VAR_19;
    FUNC_5(VAR_15, VAR_16);

    if ((VAR_16->mode & VAR_1) &&
 (VAR_15->tok == ')' || FUNC_10(VAR_15))) goto func_decl;
    VAR_19 = VAR_16->pos;
    FUNC_16(VAR_15, VAR_16);
    FUNC_3(VAR_15, ')');
    VAR_16->pos = VAR_19;
  } else if (VAR_15->tok == VAR_10) {
    if (!(VAR_16->mode & VAR_2)) FUNC_8(VAR_15, VAR_9);
    VAR_16->name = VAR_15->str;
    VAR_16->nameid = VAR_15->val.id;
    FUNC_11(VAR_15);
  } else {
    if (!(VAR_16->mode & VAR_1)) FUNC_8(VAR_15, VAR_10);
  }

  for (;;) {
    if (FUNC_12(VAR_15, '[')) {
      FUNC_4(VAR_15, VAR_16);
    } else if (FUNC_12(VAR_15, '(')) {
    func_decl:
      FUNC_6(VAR_15, VAR_16);
    } else {
      break;
    }
  }

  if ((VAR_16->mode & VAR_3) && FUNC_12(VAR_15, ':'))
    VAR_16->bits = FUNC_9(VAR_15);


  FUNC_5(VAR_15, VAR_16);
  FUNC_14(VAR_16);

  VAR_15->depth--;
}
