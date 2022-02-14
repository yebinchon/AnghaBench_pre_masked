
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int fp; } ;
typedef TYPE_1__ BuildCtx ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int*,int,int,int) ;

__attribute__((used)) static void FUNC_4(BuildCtx *VAR_3)
{
  uint32_t VAR_4[VAR_0*2+1];
  uint32_t VAR_5, VAR_6;

  for (VAR_5 = (VAR_1|1); VAR_5 < VAR_0*2; VAR_5 += 2) {

    for (VAR_6 = 0; VAR_6 < 32*32; VAR_6++) {
      if (FUNC_3(VAR_4, VAR_5, VAR_6, 0)) {
 FUNC_2(VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_3->fp,
  "#define fold_hashkey(k)\t(((((k)<<%u)-(k))<<%u)%%%u)\n\n",
  VAR_6>>5, VAR_6&31, VAR_5);
 return;
      }
    }

    for (VAR_6 = 0; VAR_6 < 32*32; VAR_6++) {
      if (FUNC_3(VAR_4, VAR_5, VAR_6, 1)) {
 FUNC_2(VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_3->fp,
   "#define fold_hashkey(k)\t(lj_rol(lj_rol((k),%u)-(k),%u)%%%u)\n\n",
  VAR_6>>5, VAR_6&31, VAR_5);
 return;
      }
    }
  }
  FUNC_1(VAR_2, "Error: search for perfect hash failed\n");
  FUNC_0(1);
}
