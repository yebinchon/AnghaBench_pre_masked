
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int framesize; } ;
typedef int MSize ;
typedef int LexState ;
typedef TYPE_1__ GCproto ;
typedef int BCIns ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(LexState *VAR_3, GCproto *VAR_4, MSize VAR_5)
{
  BCIns *VAR_6 = FUNC_4(VAR_4);
  VAR_6[0] = FUNC_0((VAR_4->flags & VAR_2) ? VAR_1 : VAR_0,
     VAR_4->framesize, 0);
  FUNC_1(VAR_3, VAR_6+1, (VAR_5-1)*(MSize)sizeof(BCIns));

  if (FUNC_2(VAR_3)) {
    MSize VAR_7;
    for (VAR_7 = 1; VAR_7 < VAR_5; VAR_7++) VAR_6[VAR_7] = FUNC_3(VAR_6[VAR_7]);
  }
}
