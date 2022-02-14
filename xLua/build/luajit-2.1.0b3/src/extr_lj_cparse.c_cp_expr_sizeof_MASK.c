
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int cts; } ;
struct TYPE_14__ {scalar_t__ id; unsigned int u32; } ;
typedef scalar_t__ CTSize ;
typedef int CTInfo ;
typedef TYPE_1__ CPValue ;
typedef TYPE_2__ CPState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,char) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void FUNC_9(CPState *VAR_4, CPValue *VAR_5, int VAR_6)
{
  CTSize VAR_7;
  CTInfo VAR_8;
  if (FUNC_6(VAR_4, '(')) {
    if (FUNC_5(VAR_4))
      VAR_5->id = FUNC_1(VAR_4);
    else
      FUNC_3(VAR_4, VAR_5);
    FUNC_0(VAR_4, ')');
  } else {
    FUNC_4(VAR_4, VAR_5);
  }
  VAR_8 = FUNC_8(VAR_4->cts, VAR_5->id, &VAR_7);
  if (VAR_6) {
    if (VAR_7 != VAR_2)
      VAR_5->u32 = VAR_7;
    else if (VAR_5->id != VAR_0)
      FUNC_2(VAR_4, VAR_3);
  } else {
    VAR_5->u32 = 1u << FUNC_7(VAR_8);
  }
  VAR_5->id = VAR_1;
}
