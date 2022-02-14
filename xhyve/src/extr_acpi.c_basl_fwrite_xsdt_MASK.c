
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(FILE *VAR_6)
{
 int VAR_7;

 VAR_7 = 0;

 FUNC_1(VAR_6, "/*\n");
 FUNC_1(VAR_6, " * bhyve XSDT template\n");
 FUNC_1(VAR_6, " */\n");
 FUNC_1(VAR_6, "[0004]\t\tSignature : \"XSDT\"\n");
 FUNC_1(VAR_6, "[0004]\t\tTable Length : 00000000\n");
 FUNC_1(VAR_6, "[0001]\t\tRevision : 01\n");
 FUNC_1(VAR_6, "[0001]\t\tChecksum : 00\n");
 FUNC_1(VAR_6, "[0006]\t\tOem ID : \"BHYVE \"\n");
 FUNC_1(VAR_6, "[0008]\t\tOem Table ID : \"BVXSDT  \"\n");
 FUNC_1(VAR_6, "[0004]\t\tOem Revision : 00000001\n");

 FUNC_1(VAR_6, "[0004]\t\tAsl Compiler ID : \"xxxx\"\n");
 FUNC_1(VAR_6, "[0004]\t\tAsl Compiler Revision : 00000000\n");
 FUNC_1(VAR_6, "\n");


 FUNC_1(VAR_6, "[0004]\t\tACPI Table Address 0 : 00000000%08X\n",
     VAR_4 + VAR_2);
 FUNC_1(VAR_6, "[0004]\t\tACPI Table Address 1 : 00000000%08X\n",
     VAR_4 + VAR_0);
 FUNC_1(VAR_6, "[0004]\t\tACPI Table Address 2 : 00000000%08X\n",
     VAR_4 + VAR_1);
 FUNC_1(VAR_6, "[0004]\t\tACPI Table Address 3 : 00000000%08X\n",
     VAR_4 + VAR_3);

 FUNC_0(VAR_6);

 return (0);

err_exit:
 return (VAR_5);
}
