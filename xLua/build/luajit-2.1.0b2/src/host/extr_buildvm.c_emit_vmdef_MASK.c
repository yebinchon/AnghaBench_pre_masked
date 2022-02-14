
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fp; } ;
typedef TYPE_1__ BuildCtx ;


 char** VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 char** VAR_1 ;
 char** VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 char* FUNC_1 (char*,scalar_t__) ;
 char* FUNC_2 (char*,char) ;
 char** VAR_5 ;

__attribute__((used)) static void FUNC_3(BuildCtx *VAR_6)
{
  char VAR_7[80];
  int VAR_8;
  FUNC_0(VAR_6->fp, "-- This is a generated file. DO NOT EDIT!\n\n");
  FUNC_0(VAR_6->fp, "return {\n\n");

  FUNC_0(VAR_6->fp, "bcnames = \"");
  for (VAR_8 = 0; VAR_0[VAR_8]; VAR_8++) FUNC_0(VAR_6->fp, "%-6s", VAR_0[VAR_8]);
  FUNC_0(VAR_6->fp, "\",\n\n");

  FUNC_0(VAR_6->fp, "irnames = \"");
  for (VAR_8 = 0; VAR_1[VAR_8]; VAR_8++) FUNC_0(VAR_6->fp, "%-6s", VAR_1[VAR_8]);
  FUNC_0(VAR_6->fp, "\",\n\n");

  FUNC_0(VAR_6->fp, "irfpm = { [0]=");
  for (VAR_8 = 0; VAR_4[VAR_8]; VAR_8++)
    FUNC_0(VAR_6->fp, "\"%s\", ", FUNC_1(VAR_7, VAR_4[VAR_8]));
  FUNC_0(VAR_6->fp, "},\n\n");

  FUNC_0(VAR_6->fp, "irfield = { [0]=");
  for (VAR_8 = 0; VAR_3[VAR_8]; VAR_8++) {
    char *VAR_9;
    FUNC_1(VAR_7, VAR_3[VAR_8]);
    VAR_9 = FUNC_2(VAR_7, '_');
    if (VAR_9) *VAR_9 = '.';
    FUNC_0(VAR_6->fp, "\"%s\", ", VAR_7);
  }
  FUNC_0(VAR_6->fp, "},\n\n");

  FUNC_0(VAR_6->fp, "ircall = {\n[0]=");
  for (VAR_8 = 0; VAR_2[VAR_8]; VAR_8++)
    FUNC_0(VAR_6->fp, "\"%s\",\n", VAR_2[VAR_8]);
  FUNC_0(VAR_6->fp, "},\n\n");

  FUNC_0(VAR_6->fp, "traceerr = {\n[0]=");
  for (VAR_8 = 0; VAR_5[VAR_8]; VAR_8++)
    FUNC_0(VAR_6->fp, "\"%s\",\n", VAR_5[VAR_8]);
  FUNC_0(VAR_6->fp, "},\n\n");
}
