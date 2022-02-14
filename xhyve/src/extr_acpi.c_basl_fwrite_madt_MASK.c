
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(FILE *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_4 = 0;

 FUNC_1(VAR_3, "/*\n");
 FUNC_1(VAR_3, " * bhyve MADT template\n");
 FUNC_1(VAR_3, " */\n");
 FUNC_1(VAR_3, "[0004]\t\tSignature : \"APIC\"\n");
 FUNC_1(VAR_3, "[0004]\t\tTable Length : 00000000\n");
 FUNC_1(VAR_3, "[0001]\t\tRevision : 01\n");
 FUNC_1(VAR_3, "[0001]\t\tChecksum : 00\n");
 FUNC_1(VAR_3, "[0006]\t\tOem ID : \"BHYVE \"\n");
 FUNC_1(VAR_3, "[0008]\t\tOem Table ID : \"BVMADT  \"\n");
 FUNC_1(VAR_3, "[0004]\t\tOem Revision : 00000001\n");


 FUNC_1(VAR_3, "[0004]\t\tAsl Compiler ID : \"xxxx\"\n");
 FUNC_1(VAR_3, "[0004]\t\tAsl Compiler Revision : 00000000\n");
 FUNC_1(VAR_3, "\n");

 FUNC_1(VAR_3, "[0004]\t\tLocal Apic Address : FEE00000\n");
 FUNC_1(VAR_3, "[0004]\t\tFlags (decoded below) : 00000001\n");
 FUNC_1(VAR_3, "\t\t\tPC-AT Compatibility : 1\n");
 FUNC_1(VAR_3, "\n");


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_1(VAR_3, "[0001]\t\tSubtable Type : 00\n");
  FUNC_1(VAR_3, "[0001]\t\tLength : 08\n");

  FUNC_1(VAR_3, "[0001]\t\tProcessor ID : %02x\n", VAR_5);
  FUNC_1(VAR_3, "[0001]\t\tLocal Apic ID : %02x\n", VAR_5);
  FUNC_1(VAR_3, "[0004]\t\tFlags (decoded below) : 00000001\n");
  FUNC_1(VAR_3, "\t\t\tProcessor Enabled : 1\n");
  FUNC_1(VAR_3, "\n");
 }


 FUNC_1(VAR_3, "[0001]\t\tSubtable Type : 01\n");
 FUNC_1(VAR_3, "[0001]\t\tLength : 0C\n");

 FUNC_1(VAR_3, "[0001]\t\tI/O Apic ID : %02x\n", 0);
 FUNC_1(VAR_3, "[0001]\t\tReserved : 00\n");
 FUNC_1(VAR_3, "[0004]\t\tAddress : fec00000\n");
 FUNC_1(VAR_3, "[0004]\t\tInterrupt : 00000000\n");
 FUNC_1(VAR_3, "\n");


 FUNC_1(VAR_3, "[0001]\t\tSubtable Type : 02\n");
 FUNC_1(VAR_3, "[0001]\t\tLength : 0A\n");
 FUNC_1(VAR_3, "[0001]\t\tBus : 00\n");
 FUNC_1(VAR_3, "[0001]\t\tSource : 00\n");
 FUNC_1(VAR_3, "[0004]\t\tInterrupt : 00000002\n");
 FUNC_1(VAR_3, "[0002]\t\tFlags (decoded below) : 0005\n");
 FUNC_1(VAR_3, "\t\t\tPolarity : 1\n");
 FUNC_1(VAR_3, "\t\t\tTrigger Mode : 1\n");
 FUNC_1(VAR_3, "\n");

 FUNC_1(VAR_3, "[0001]\t\tSubtable Type : 02\n");
 FUNC_1(VAR_3, "[0001]\t\tLength : 0A\n");
 FUNC_1(VAR_3, "[0001]\t\tBus : 00\n");
 FUNC_1(VAR_3, "[0001]\t\tSource : %02X\n", VAR_0);
 FUNC_1(VAR_3, "[0004]\t\tInterrupt : %08X\n", VAR_0);
 FUNC_1(VAR_3, "[0002]\t\tFlags (decoded below) : 0000\n");
 FUNC_1(VAR_3, "\t\t\tPolarity : 3\n");
 FUNC_1(VAR_3, "\t\t\tTrigger Mode : 3\n");
 FUNC_1(VAR_3, "\n");


 FUNC_1(VAR_3, "[0001]\t\tSubtable Type : 04\n");
 FUNC_1(VAR_3, "[0001]\t\tLength : 06\n");
 FUNC_1(VAR_3, "[0001]\t\tProcessorId : FF\n");
 FUNC_1(VAR_3, "[0002]\t\tFlags (decoded below) : 0005\n");
 FUNC_1(VAR_3, "\t\t\tPolarity : 1\n");
 FUNC_1(VAR_3, "\t\t\tTrigger Mode : 1\n");
 FUNC_1(VAR_3, "[0001]\t\tInterrupt : 01\n");
 FUNC_1(VAR_3, "\n");

 FUNC_0(VAR_3);

 return (0);

err_exit:
 return (VAR_2);
}
