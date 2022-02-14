
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pos; int specpos; int top; int * redir; int * name; int specfattr; int fattr; int specattr; int attr; TYPE_1__* stack; } ;
struct TYPE_4__ {scalar_t__ next; } ;
typedef TYPE_2__ CPDecl ;



__attribute__((used)) static void FUNC_0(CPDecl *VAR_0)
{
  VAR_0->pos = VAR_0->specpos;
  VAR_0->top = VAR_0->specpos+1;
  VAR_0->stack[VAR_0->specpos].next = 0;
  VAR_0->attr = VAR_0->specattr;
  VAR_0->fattr = VAR_0->specfattr;
  VAR_0->name = ((void*)0);
  VAR_0->redir = ((void*)0);
}
