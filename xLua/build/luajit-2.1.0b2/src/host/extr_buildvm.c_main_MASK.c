
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int mode; char* outname; int fp; } ;
typedef TYPE_1__ BuildCtx ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (TYPE_1__*,char**) ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_19 (int ) ;

int FUNC_20(int VAR_6, char **VAR_7)
{
  BuildCtx VAR_8;
  BuildCtx *VAR_9 = &VAR_8;
  int VAR_10, VAR_11;

  if (sizeof(void *) != 4*VAR_0+8*VAR_1) {
    FUNC_17(VAR_4,"Error: pointer size mismatch in cross-build.\n");
    FUNC_17(VAR_4,"Try: make HOST_CC=\"gcc -m32\" CROSS=...\n\n");
    return 1;
  }

  FUNC_0(VAR_6);
  FUNC_18(VAR_9, VAR_7);

  if ((VAR_10 = FUNC_3(VAR_9))) {
    FUNC_17(VAR_4,"Error: DASM error %08x\n", VAR_10);
    return 1;
  }

  switch (VAR_9->mode) {
  case 131:
  case 130:
    VAR_11 = 1;
    break;
  default:
    VAR_11 = 0;
    break;
  }

  if (VAR_9->outname[0] == '-' && VAR_9->outname[1] == '\0') {
    VAR_9->fp = VAR_5;




  } else if (!(VAR_9->fp = FUNC_16(VAR_9->outname, VAR_11 ? "wb" : "w"))) {
    FUNC_17(VAR_4, "Error: cannot open output file '%s': %s\n",
     VAR_9->outname, FUNC_19(VAR_3));
    FUNC_12(1);
  }

  switch (VAR_9->mode) {
  case 136:
  case 137:
  case 132:
    FUNC_4(VAR_9);
    FUNC_5(VAR_9);
    break;
  case 131:
    FUNC_9(VAR_9);
    break;
  case 130:
    FUNC_10(VAR_9);
    break;
  case 138:
    FUNC_6(VAR_9);
    FUNC_8(VAR_9);
    break;
  case 128:
    FUNC_11(VAR_9);
    FUNC_8(VAR_9);
    FUNC_17(VAR_9->fp, "}\n\n");
    break;
  case 135:
  case 133:
  case 129:
    FUNC_8(VAR_9);
    break;
  case 134:
    FUNC_7(VAR_9);
    break;
  default:
    break;
  }

  FUNC_15(VAR_9->fp);
  if (FUNC_14(VAR_9->fp)) {
    FUNC_17(VAR_4, "Error: cannot write to output file: %s\n",
     FUNC_19(VAR_3));
    FUNC_12(1);
  }
  FUNC_13(VAR_9->fp);

  return 0;
}
