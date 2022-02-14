
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_22__ {int attr; int specattr; scalar_t__ fattr; scalar_t__ specfattr; scalar_t__ pos; scalar_t__ specpos; TYPE_1__* stack; scalar_t__ top; int * redir; int * name; int mode; TYPE_4__* cp; } ;
struct TYPE_20__ {scalar_t__ id; } ;
struct TYPE_21__ {unsigned int tok; TYPE_3__ val; TYPE_2__* ct; int mode; } ;
struct TYPE_19__ {int size; int info; } ;
struct TYPE_18__ {scalar_t__ next; } ;
typedef scalar_t__ CTypeID ;
typedef int CTInfo ;
typedef int CPscl ;
typedef TYPE_4__ CPState ;
typedef TYPE_5__ CPDecl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_1 (int ,int) ;

 unsigned int VAR_21 ;
 scalar_t__ VAR_22 ;

 unsigned int VAR_23 ;


 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_5__*,int) ;
 int FUNC_5 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_5__*,int,int) ;
 int FUNC_8 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static CPscl FUNC_13(CPState *VAR_31, CPDecl *VAR_32, CPscl VAR_33)
{
  uint32_t VAR_34 = 0, VAR_35 = 0;
  CTypeID VAR_36 = 0;

  VAR_32->cp = VAR_31;
  VAR_32->mode = VAR_31->mode;
  VAR_32->name = ((void*)0);
  VAR_32->redir = ((void*)0);
  VAR_32->attr = 0;
  VAR_32->fattr = 0;
  VAR_32->pos = VAR_32->top = 0;
  VAR_32->stack[0].next = 0;

  for (;;) {
    FUNC_2(VAR_31, VAR_32);
    if (VAR_31->tok >= VAR_21 && VAR_31->tok <= VAR_23) {
      uint32_t VAR_37;
      if (VAR_31->ct->size) {
 if (VAR_35) goto end_decl;
 VAR_35 = VAR_31->ct->size;
      }
      VAR_37 = (1u << (VAR_31->tok - VAR_21));
      VAR_34 = VAR_34 | VAR_37 | ((VAR_37 & VAR_34 & VAR_5) << 1);
      if (VAR_31->tok >= VAR_22) {
 if (!(VAR_33 & VAR_37)) FUNC_5(VAR_31, VAR_31->tok, VAR_28);
      } else if (VAR_36) {
 goto end_decl;
      }
      FUNC_6(VAR_31);
      continue;
    }
    if (VAR_35 || VAR_36 ||
 (VAR_34 & (VAR_8|VAR_5|VAR_9|VAR_10|VAR_2)))
      break;
    switch (VAR_31->tok) {
    case 129:
      VAR_36 = FUNC_4(VAR_31, VAR_32, FUNC_1(VAR_26, 0));
      continue;
    case 128:
      VAR_36 = FUNC_4(VAR_31, VAR_32, FUNC_1(VAR_26, VAR_17));
      continue;
    case 131:
      VAR_36 = FUNC_3(VAR_31, VAR_32);
      continue;
    case 130:
      if (FUNC_10(VAR_31->ct->info)) {
 VAR_36 = FUNC_9(VAR_31->ct->info);
 FUNC_6(VAR_31);
 continue;
      }
      break;
    case '$':
      VAR_36 = VAR_31->val.id;
      FUNC_6(VAR_31);
      continue;
    default:
      break;
    }
    break;
  }
end_decl:

  if ((VAR_34 & VAR_2))
    VAR_36 = VAR_35 == 4 ? VAR_20 : VAR_19;

  if (VAR_36) {
    FUNC_8(VAR_32, VAR_36);
  } else if ((VAR_34 & VAR_11)) {
    FUNC_7(VAR_32, FUNC_1(VAR_27, (VAR_32->attr & VAR_15)), VAR_24);
    VAR_32->attr &= ~VAR_15;
  } else {

    CTInfo VAR_38 = FUNC_1(VAR_25, (VAR_34 & VAR_10) ? VAR_18 : 0);
    if ((VAR_34 & VAR_0)) {
      if ((VAR_34 & ~(VAR_7|VAR_0|VAR_4|VAR_9|VAR_10)))
 FUNC_5(VAR_31, 0, VAR_30);
      VAR_38 |= VAR_12;
      if (!(VAR_34 & VAR_9)) VAR_38 |= VAR_18;
      if (!VAR_35) {
 VAR_35 = 1;
      }
    } else if ((VAR_34 & VAR_3)) {
      VAR_38 = FUNC_1(VAR_25, VAR_13);
      if ((VAR_34 & VAR_5)) VAR_35 = sizeof(long double);
    } else if ((VAR_34 & VAR_1)) {
      if ((VAR_34 & (VAR_1|VAR_9|VAR_10)) == VAR_1)
 VAR_38 |= VAR_16;
    } else if ((VAR_34 & VAR_8)) {
      VAR_35 = sizeof(short);
    } else if ((VAR_34 & VAR_6)) {
      VAR_35 = 8;
    } else if ((VAR_34 & VAR_5)) {
      VAR_38 |= VAR_14;
      VAR_35 = sizeof(long);
    } else if (!VAR_35) {
      if (!(VAR_34 & (VAR_9|VAR_10)))
 FUNC_5(VAR_31, VAR_31->tok, VAR_29);
      VAR_35 = sizeof(int);
    }
    FUNC_12(VAR_35 != 0);
    VAR_38 += FUNC_0(FUNC_11(VAR_35));
    VAR_38 += (VAR_32->attr & VAR_15);
    FUNC_7(VAR_32, VAR_38, VAR_35);
    VAR_32->attr &= ~VAR_15;
  }
  VAR_32->specpos = VAR_32->pos;
  VAR_32->specattr = VAR_32->attr;
  VAR_32->specfattr = VAR_32->fattr;
  return (VAR_34 & VAR_7);
}
