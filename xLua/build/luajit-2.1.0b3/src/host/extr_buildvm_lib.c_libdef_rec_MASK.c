
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ mode; int fp; } ;
typedef TYPE_1__ BuildCtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static void FUNC_4(BuildCtx *VAR_4, char *VAR_5, int VAR_6)
{
  FUNC_0(VAR_6);
  if (VAR_4->mode == VAR_0) {
    char *VAR_7;
    uint32_t VAR_8;
    for (; VAR_3+1 < VAR_1; VAR_3++)
      FUNC_2(VAR_4->fp, ",\n0");
    VAR_3 = VAR_1;
    if (*VAR_5 == '.') VAR_5 = VAR_2;
    VAR_7 = FUNC_3(VAR_5, ' ');
    if (VAR_7) *VAR_7++ = '\0';
    VAR_8 = FUNC_1(VAR_5);
    if (VAR_7)
      FUNC_2(VAR_4->fp, ",\n0x%02x00+(%s)", VAR_8, VAR_7);
    else
      FUNC_2(VAR_4->fp, ",\n0x%02x00", VAR_8);
  }
}
