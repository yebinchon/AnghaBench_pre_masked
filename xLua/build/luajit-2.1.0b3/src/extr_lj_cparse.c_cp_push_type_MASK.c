
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int attr; size_t pos; TYPE_2__* stack; TYPE_1__* cp; } ;
struct TYPE_10__ {int info; int size; int sib; } ;
struct TYPE_9__ {int sib; } ;
struct TYPE_8__ {int cts; } ;
typedef int CTypeID ;
typedef TYPE_3__ CType ;
typedef int CTSize ;
typedef int CTInfo ;
typedef TYPE_4__ CPDecl ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int VAR_4 ;





 int VAR_5 ;
 size_t FUNC_2 (TYPE_4__*,int,int) ;
 int FUNC_3 (int) ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(CPDecl *VAR_6, CTypeID VAR_7)
{
  CType *VAR_8 = FUNC_4(VAR_6->cp->cts, VAR_7);
  CTInfo VAR_9 = VAR_8->info;
  CTSize VAR_10 = VAR_8->size;
  switch (FUNC_6(VAR_9)) {
  case 128: case 130:
    FUNC_2(VAR_6, FUNC_1(VAR_5, VAR_7), 0);
    if ((VAR_6->attr & VAR_2)) {
      FUNC_2(VAR_6, FUNC_1(131, FUNC_0(VAR_0)),
       (VAR_6->attr & VAR_2));
      VAR_6->attr &= ~VAR_2;
    }
    break;
  case 131:
    if (FUNC_5(VAR_9, VAR_0))
      VAR_6->attr &= ~VAR_10;
    FUNC_7(VAR_6, FUNC_3(VAR_9));
    FUNC_2(VAR_6, VAR_9 & ~VAR_4, VAR_10);
    break;
  case 132:
    if ((VAR_8->info & (VAR_3|VAR_1))) {
      VAR_9 |= (VAR_6->attr & VAR_2);
      VAR_6->attr &= ~VAR_2;
    }
    FUNC_7(VAR_6, FUNC_3(VAR_9));
    FUNC_2(VAR_6, VAR_9 & ~VAR_4, VAR_10);
    VAR_6->stack[VAR_6->pos].sib = 1;

    break;
  case 129:

    VAR_6->stack[FUNC_2(VAR_6, VAR_9, VAR_10)].sib = VAR_8->sib;
    break;
  default:

    FUNC_2(VAR_6, VAR_9|(VAR_6->attr & VAR_2), VAR_10);
    VAR_6->attr &= ~VAR_2;
    break;
  }
}
