
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t top; size_t pos; TYPE_1__* stack; int cp; } ;
struct TYPE_4__ {scalar_t__ next; int name; scalar_t__ sib; int size; int info; } ;
typedef scalar_t__ CTypeID1 ;
typedef int CTSize ;
typedef int CTInfo ;
typedef size_t CPDeclIdx ;
typedef TYPE_2__ CPDecl ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static CPDeclIdx FUNC_2(CPDecl *VAR_2, CTInfo VAR_3, CTSize VAR_4)
{
  CPDeclIdx VAR_5 = VAR_2->top;
  if (VAR_5 >= VAR_0) FUNC_0(VAR_2->cp, VAR_1);
  VAR_2->stack[VAR_5].info = VAR_3;
  VAR_2->stack[VAR_5].size = VAR_4;
  VAR_2->stack[VAR_5].sib = 0;
  FUNC_1(VAR_2->stack[VAR_5].name);
  VAR_2->stack[VAR_5].next = VAR_2->stack[VAR_2->pos].next;
  VAR_2->stack[VAR_2->pos].next = (CTypeID1)VAR_5;
  VAR_2->top = VAR_5+1;
  return VAR_5;
}
