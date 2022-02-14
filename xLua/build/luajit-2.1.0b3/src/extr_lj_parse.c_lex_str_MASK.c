
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tok; int tokval; } ;
typedef TYPE_1__ LexState ;
typedef int GCstr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static GCstr *FUNC_3(LexState *VAR_3)
{
  GCstr *VAR_4;
  if (VAR_3->tok != VAR_2 && (VAR_0 || VAR_3->tok != VAR_1))
    FUNC_0(VAR_3, VAR_2);
  VAR_4 = FUNC_2(&VAR_3->tokval);
  FUNC_1(VAR_3);
  return VAR_4;
}
