
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_2(FILE *VAR_11)
{
 int VAR_12;

 VAR_12 = 0;

 FUNC_1(VAR_11, "/*\n");
 FUNC_1(VAR_11, " * bhyve FADT template\n");
 FUNC_1(VAR_11, " */\n");
 FUNC_1(VAR_11, "[0004]\t\tSignature : \"FACP\"\n");
 FUNC_1(VAR_11, "[0004]\t\tTable Length : 0000010C\n");
 FUNC_1(VAR_11, "[0001]\t\tRevision : 05\n");
 FUNC_1(VAR_11, "[0001]\t\tChecksum : 00\n");
 FUNC_1(VAR_11, "[0006]\t\tOem ID : \"BHYVE \"\n");
 FUNC_1(VAR_11, "[0008]\t\tOem Table ID : \"BVFACP  \"\n");
 FUNC_1(VAR_11, "[0004]\t\tOem Revision : 00000001\n");

 FUNC_1(VAR_11, "[0004]\t\tAsl Compiler ID : \"xxxx\"\n");
 FUNC_1(VAR_11, "[0004]\t\tAsl Compiler Revision : 00000000\n");
 FUNC_1(VAR_11, "\n");

 FUNC_1(VAR_11, "[0004]\t\tFACS Address : %08X\n",
     VAR_9 + VAR_3);
 FUNC_1(VAR_11, "[0004]\t\tDSDT Address : %08X\n",
     VAR_9 + VAR_2);
 FUNC_1(VAR_11, "[0001]\t\tModel : 01\n");
 FUNC_1(VAR_11, "[0001]\t\tPM Profile : 00 [Unspecified]\n");
 FUNC_1(VAR_11, "[0002]\t\tSCI Interrupt : %04X\n",
     VAR_7);
 FUNC_1(VAR_11, "[0004]\t\tSMI Command Port : %08X\n",
     VAR_8);
 FUNC_1(VAR_11, "[0001]\t\tACPI Enable Value : %02X\n",
     VAR_1);
 FUNC_1(VAR_11, "[0001]\t\tACPI Disable Value : %02X\n",
     VAR_0);
 FUNC_1(VAR_11, "[0001]\t\tS4BIOS Command : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tP-State Control : 00\n");
 FUNC_1(VAR_11, "[0004]\t\tPM1A Event Block Address : %08X\n",
     VAR_6);
 FUNC_1(VAR_11, "[0004]\t\tPM1B Event Block Address : 00000000\n");
 FUNC_1(VAR_11, "[0004]\t\tPM1A Control Block Address : %08X\n",
     VAR_5);
 FUNC_1(VAR_11, "[0004]\t\tPM1B Control Block Address : 00000000\n");
 FUNC_1(VAR_11, "[0004]\t\tPM2 Control Block Address : 00000000\n");
 FUNC_1(VAR_11, "[0004]\t\tPM Timer Block Address : %08X\n",
     VAR_4);
 FUNC_1(VAR_11, "[0004]\t\tGPE0 Block Address : 00000000\n");
 FUNC_1(VAR_11, "[0004]\t\tGPE1 Block Address : 00000000\n");
 FUNC_1(VAR_11, "[0001]\t\tPM1 Event Block Length : 04\n");
 FUNC_1(VAR_11, "[0001]\t\tPM1 Control Block Length : 02\n");
 FUNC_1(VAR_11, "[0001]\t\tPM2 Control Block Length : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tPM Timer Block Length : 04\n");
 FUNC_1(VAR_11, "[0001]\t\tGPE0 Block Length : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tGPE1 Block Length : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tGPE1 Base Offset : 00\n");
 FUNC_1(VAR_11, "[0001]\t\t_CST Support : 00\n");
 FUNC_1(VAR_11, "[0002]\t\tC2 Latency : 0000\n");
 FUNC_1(VAR_11, "[0002]\t\tC3 Latency : 0000\n");
 FUNC_1(VAR_11, "[0002]\t\tCPU Cache Size : 0000\n");
 FUNC_1(VAR_11, "[0002]\t\tCache Flush Stride : 0000\n");
 FUNC_1(VAR_11, "[0001]\t\tDuty Cycle Offset : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tDuty Cycle Width : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tRTC Day Alarm Index : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tRTC Month Alarm Index : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tRTC Century Index : 32\n");
 FUNC_1(VAR_11, "[0002]\t\tBoot Flags (decoded below) : 0000\n");
 FUNC_1(VAR_11, "\t\t\tLegacy Devices Supported (V2) : 0\n");
 FUNC_1(VAR_11, "\t\t\t8042 Present on ports 60/64 (V2) : 0\n");
 FUNC_1(VAR_11, "\t\t\tVGA Not Present (V4) : 1\n");
 FUNC_1(VAR_11, "\t\t\tMSI Not Supported (V4) : 0\n");
 FUNC_1(VAR_11, "\t\t\tPCIe ASPM Not Supported (V4) : 1\n");
 FUNC_1(VAR_11, "\t\t\tCMOS RTC Not Present (V5) : 0\n");
 FUNC_1(VAR_11, "[0001]\t\tReserved : 00\n");
 FUNC_1(VAR_11, "[0004]\t\tFlags (decoded below) : 00000000\n");
 FUNC_1(VAR_11, "\t\t\tWBINVD instruction is operational (V1) : 1\n");
 FUNC_1(VAR_11, "\t\t\tWBINVD flushes all caches (V1) : 0\n");
 FUNC_1(VAR_11, "\t\t\tAll CPUs support C1 (V1) : 1\n");
 FUNC_1(VAR_11, "\t\t\tC2 works on MP system (V1) : 0\n");
 FUNC_1(VAR_11, "\t\t\tControl Method Power Button (V1) : 0\n");
 FUNC_1(VAR_11, "\t\t\tControl Method Sleep Button (V1) : 1\n");
 FUNC_1(VAR_11, "\t\t\tRTC wake not in fixed reg space (V1) : 0\n");
 FUNC_1(VAR_11, "\t\t\tRTC can wake system from S4 (V1) : 0\n");
 FUNC_1(VAR_11, "\t\t\t32-bit PM Timer (V1) : 1\n");
 FUNC_1(VAR_11, "\t\t\tDocking Supported (V1) : 0\n");
 FUNC_1(VAR_11, "\t\t\tReset Register Supported (V2) : 1\n");
 FUNC_1(VAR_11, "\t\t\tSealed Case (V3) : 0\n");
 FUNC_1(VAR_11, "\t\t\tHeadless - No Video (V3) : 1\n");
 FUNC_1(VAR_11, "\t\t\tUse native instr after SLP_TYPx (V3) : 0\n");
 FUNC_1(VAR_11, "\t\t\tPCIEXP_WAK Bits Supported (V4) : 0\n");
 FUNC_1(VAR_11, "\t\t\tUse Platform Timer (V4) : 0\n");
 FUNC_1(VAR_11, "\t\t\tRTC_STS valid on S4 wake (V4) : 0\n");
 FUNC_1(VAR_11, "\t\t\tRemote Power-on capable (V4) : 0\n");
 FUNC_1(VAR_11, "\t\t\tUse APIC Cluster Model (V4) : 0\n");
 FUNC_1(VAR_11, "\t\t\tUse APIC Physical Destination Mode (V4) : 1\n");
 FUNC_1(VAR_11, "\t\t\tHardware Reduced (V5) : 0\n");
 FUNC_1(VAR_11, "\t\t\tLow Power S0 Idle (V5) : 0\n");
 FUNC_1(VAR_11, "\n");

 FUNC_1(VAR_11,
     "[0012]\t\tReset Register : [Generic Address Structure]\n");
 FUNC_1(VAR_11, "[0001]\t\tSpace ID : 01 [SystemIO]\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Width : 08\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Offset : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tEncoded Access Width : 01 [Byte Access:8]\n");
 FUNC_1(VAR_11, "[0008]\t\tAddress : 0000000000000CF9\n");
 FUNC_1(VAR_11, "\n");

 FUNC_1(VAR_11, "[0001]\t\tValue to cause reset : 06\n");
 FUNC_1(VAR_11, "[0002]\t\tARM Flags (decoded below): 0000\n");
 FUNC_1(VAR_11, "\t\t\tPSCI Compliant : 0\n");
 FUNC_1(VAR_11, "\t\t\tMust use HVC for PSCI : 0\n");
 FUNC_1(VAR_11, "[0001]\t\tFADT Minor Revision : 01\n");
 FUNC_1(VAR_11, "[0008]\t\tFACS Address : 00000000%08X\n",
     VAR_9 + VAR_3);
 FUNC_1(VAR_11, "[0008]\t\tDSDT Address : 00000000%08X\n",
     VAR_9 + VAR_2);
 FUNC_1(VAR_11,
     "[0012]\t\tPM1A Event Block : [Generic Address Structure]\n");
 FUNC_1(VAR_11, "[0001]\t\tSpace ID : 01 [SystemIO]\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Width : 20\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Offset : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tEncoded Access Width : 02 [Word Access:16]\n");
 FUNC_1(VAR_11, "[0008]\t\tAddress : 00000000%08X\n",
     VAR_6);
 FUNC_1(VAR_11, "\n");

 FUNC_1(VAR_11,
     "[0012]\t\tPM1B Event Block : [Generic Address Structure]\n");
 FUNC_1(VAR_11, "[0001]\t\tSpace ID : 01 [SystemIO]\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Width : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Offset : 00\n");
 FUNC_1(VAR_11,
     "[0001]\t\tEncoded Access Width : 00 [Undefined/Legacy]\n");
 FUNC_1(VAR_11, "[0008]\t\tAddress : 0000000000000000\n");
 FUNC_1(VAR_11, "\n");

 FUNC_1(VAR_11,
     "[0012]\t\tPM1A Control Block : [Generic Address Structure]\n");
 FUNC_1(VAR_11, "[0001]\t\tSpace ID : 01 [SystemIO]\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Width : 10\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Offset : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tEncoded Access Width : 02 [Word Access:16]\n");
 FUNC_1(VAR_11, "[0008]\t\tAddress : 00000000%08X\n",
     VAR_5);
 FUNC_1(VAR_11, "\n");

 FUNC_1(VAR_11,
     "[0012]\t\tPM1B Control Block : [Generic Address Structure]\n");
 FUNC_1(VAR_11, "[0001]\t\tSpace ID : 01 [SystemIO]\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Width : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Offset : 00\n");
 FUNC_1(VAR_11,
     "[0001]\t\tEncoded Access Width : 00 [Undefined/Legacy]\n");
 FUNC_1(VAR_11, "[0008]\t\tAddress : 0000000000000000\n");
 FUNC_1(VAR_11, "\n");

 FUNC_1(VAR_11,
     "[0012]\t\tPM2 Control Block : [Generic Address Structure]\n");
 FUNC_1(VAR_11, "[0001]\t\tSpace ID : 01 [SystemIO]\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Width : 08\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Offset : 00\n");
 FUNC_1(VAR_11,
     "[0001]\t\tEncoded Access Width : 00 [Undefined/Legacy]\n");
 FUNC_1(VAR_11, "[0008]\t\tAddress : 0000000000000000\n");
 FUNC_1(VAR_11, "\n");


 FUNC_1(VAR_11,
     "[0012]\t\tPM Timer Block : [Generic Address Structure]\n");
 FUNC_1(VAR_11, "[0001]\t\tSpace ID : 01 [SystemIO]\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Width : 20\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Offset : 00\n");
 FUNC_1(VAR_11,
     "[0001]\t\tEncoded Access Width : 03 [DWord Access:32]\n");
 FUNC_1(VAR_11, "[0008]\t\tAddress : 00000000%08X\n",
     VAR_4);
 FUNC_1(VAR_11, "\n");

 FUNC_1(VAR_11, "[0012]\t\tGPE0 Block : [Generic Address Structure]\n");
 FUNC_1(VAR_11, "[0001]\t\tSpace ID : 01 [SystemIO]\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Width : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Offset : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tEncoded Access Width : 01 [Byte Access:8]\n");
 FUNC_1(VAR_11, "[0008]\t\tAddress : 0000000000000000\n");
 FUNC_1(VAR_11, "\n");

 FUNC_1(VAR_11, "[0012]\t\tGPE1 Block : [Generic Address Structure]\n");
 FUNC_1(VAR_11, "[0001]\t\tSpace ID : 01 [SystemIO]\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Width : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Offset : 00\n");
 FUNC_1(VAR_11,
     "[0001]\t\tEncoded Access Width : 00 [Undefined/Legacy]\n");
 FUNC_1(VAR_11, "[0008]\t\tAddress : 0000000000000000\n");
 FUNC_1(VAR_11, "\n");

 FUNC_1(VAR_11,
    "[0012]\t\tSleep Control Register : [Generic Address Structure]\n");
 FUNC_1(VAR_11, "[0001]\t\tSpace ID : 01 [SystemIO]\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Width : 08\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Offset : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tEncoded Access Width : 01 [Byte Access:8]\n");
 FUNC_1(VAR_11, "[0008]\t\tAddress : 0000000000000000\n");
 FUNC_1(VAR_11, "\n");

 FUNC_1(VAR_11,
     "[0012]\t\tSleep Status Register : [Generic Address Structure]\n");
 FUNC_1(VAR_11, "[0001]\t\tSpace ID : 01 [SystemIO]\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Width : 08\n");
 FUNC_1(VAR_11, "[0001]\t\tBit Offset : 00\n");
 FUNC_1(VAR_11, "[0001]\t\tEncoded Access Width : 01 [Byte Access:8]\n");
 FUNC_1(VAR_11, "[0008]\t\tAddress : 0000000000000000\n");

 FUNC_0(VAR_11);

 return (0);

err_exit:
 return (VAR_10);
}
