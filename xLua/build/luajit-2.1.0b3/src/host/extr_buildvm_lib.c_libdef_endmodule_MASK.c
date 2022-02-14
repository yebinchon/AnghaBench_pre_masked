
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int fp; } ;
typedef TYPE_1__ BuildCtx ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int const* VAR_5 ;
 scalar_t__ FUNC_1 (char*,char*,int const) ;

__attribute__((used)) static void FUNC_2(BuildCtx *VAR_6)
{
  if (VAR_3 != 0) {
    char VAR_7[80];
    const uint8_t *VAR_8;
    int VAR_9;
    if (VAR_3 == 1)
      FUNC_0(VAR_6->fp, "  (lua_CFunction)0");
    FUNC_0(VAR_6->fp, "\n};\n");
    FUNC_0(VAR_6->fp, "static const uint8_t %s%d[] = {\n",
     VAR_0, VAR_2);
    VAR_7[0] = '\0';
    for (VAR_9 = 0, VAR_8 = VAR_4; VAR_8 < VAR_5; VAR_8++) {
      VAR_9 += FUNC_1(VAR_7+VAR_9, "%d,", *VAR_8);
      if (VAR_9 >= 75) {
 FUNC_0(VAR_6->fp, "%s\n", VAR_7);
 VAR_9 = 0;
 VAR_7[0] = '\0';
      }
    }
    FUNC_0(VAR_6->fp, "%s%d\n};\n#endif\n\n", VAR_7, VAR_1);
  }
}
