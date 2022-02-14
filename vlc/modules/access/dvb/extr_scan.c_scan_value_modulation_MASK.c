
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int scan_modulation_t ;
const char *FUNC_0( scan_modulation_t VAR_0 )
{
    switch(VAR_0)
    {
        case 136: return "16QAM";
        case 134: return "32QAM";
        case 132: return "64QAM";
        case 137: return "128QAM";
        case 135: return "256QAM";
        case 131: return "QAM";
        case 138: return "8PSK";
        case 130: return "QPSK";
        case 139: return "DQPSK";
        case 142: return "16APSK";
        case 141: return "32APSK";
        case 128: return "8VSB";
        case 129: return "16VSB";
        case 133:
        case 140:
        default: return "";
    }
}
