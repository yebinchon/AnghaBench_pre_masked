
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int found; TYPE_2__* new; TYPE_1__* old; } ;
typedef TYPE_3__ cagg_havingcxt ;
struct TYPE_8__ {scalar_t__ expr; } ;
struct TYPE_7__ {int expr; } ;
typedef int Node ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int * (*) (int *,TYPE_3__*),TYPE_3__*) ;

__attribute__((used)) static Node *
FUNC_2(Node *VAR_0, cagg_havingcxt *VAR_1)
{
 if (VAR_0 == ((void*)0))
  return ((void*)0);
 if (FUNC_0(VAR_0, VAR_1->old->expr))
 {
  VAR_1->found = 1;
  return (Node *) VAR_1->new->expr;
 }
 return FUNC_1(VAR_0, FUNC_2, VAR_1);
}
