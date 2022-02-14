
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {int dispatch; } ;
struct TYPE_5__ {void** mcbot; void** mctop; void** mclim; int J; } ;
typedef void* MCode ;
typedef int ExitNo ;
typedef TYPE_1__ ASMState ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (void**,void**) ;
 int FUNC_4 (int ,void**) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static MCode *FUNC_6(ASMState *VAR_10, ExitNo VAR_11)
{
  ExitNo VAR_12, VAR_13 = (VAR_11*VAR_0) & 0xff;
  MCode *VAR_14 = VAR_10->mcbot;
  MCode *VAR_15 = VAR_14;
  if (VAR_14 + (2+2)*VAR_0+8+5 >= VAR_10->mctop)
    FUNC_2(VAR_10);

  *VAR_14++ = VAR_6; *VAR_14++ = (MCode)VAR_13;
  for (VAR_12 = 1; VAR_12 < VAR_0; VAR_12++) {
    *VAR_14++ = VAR_4; *VAR_14++ = (MCode)((2+2)*(VAR_0 - VAR_12) - 2);
    *VAR_14++ = VAR_6; *VAR_14++ = (MCode)(VAR_13 + VAR_12);
  }

  *VAR_14++ = VAR_6; *VAR_14++ = (MCode)((VAR_11*VAR_0)>>8);


  *VAR_14++ = VAR_5;
  *VAR_14++ = FUNC_1(VAR_7, 0, VAR_2);
  *VAR_14++ = FUNC_1(VAR_8, VAR_2, VAR_2);
  *VAR_14++ = 2*sizeof(void *);
  *(int32_t *)VAR_14 = FUNC_5(FUNC_0(VAR_10->J)->dispatch); VAR_14 += 4;


  *VAR_14++ = VAR_3; VAR_14 += 4;
  *((int32_t *)(VAR_14-4)) = FUNC_3(VAR_14, (MCode *)(void *)VAR_9);

  FUNC_4(VAR_10->J, VAR_14);
  VAR_10->mcbot = VAR_14;
  VAR_10->mclim = VAR_10->mcbot + VAR_1;
  return VAR_15;
}
