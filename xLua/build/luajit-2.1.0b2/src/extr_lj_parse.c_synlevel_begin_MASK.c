
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ level; } ;
typedef TYPE_1__ LexState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_1(LexState *VAR_2)
{
  if (++VAR_2->level >= VAR_1)
    FUNC_0(VAR_2, 0, VAR_0);
}
