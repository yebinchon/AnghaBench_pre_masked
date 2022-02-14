
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fp; } ;
typedef TYPE_1__ BuildCtx ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 size_t FUNC_2 (void const*,int,size_t,int ) ;
 int VAR_1 ;
 char* FUNC_3 (int ) ;

void FUNC_4(BuildCtx *VAR_2, const void *VAR_3, size_t VAR_4)
{
  if (FUNC_2(VAR_3, 1, VAR_4, VAR_2->fp) != VAR_4) {
    FUNC_1(VAR_1, "Error: cannot write to output file: %s\n",
     FUNC_3(VAR_0));
    FUNC_0(1);
  }
}
