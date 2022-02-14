
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct mod TYPE_1__ ;


typedef int tab ;
struct mod {char* dvb; char* vlc; } ;


 struct mod* FUNC_0 (char const*,TYPE_1__ const*,int,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_1)
{
     static const struct mod
     {
         char dvb[9];
         char vlc[7];
     } VAR_2[] = {
         { "8VSB", "8VSB" }, { "APSK_16", "16APSK" }, { "APSK_32", "32APSK" },
         { "DQPSK", "DQPSK" }, { "PSK_8", "8PSK" }, { "QPSK", "QPSK" },
         { "QAM_128", "128QAM" }, { "QAM_16", "16QAM" },
         { "QAM_256", "256QAM" }, { "QAM_32", "32QAM" },
         { "QAM_64", "64QAM" }, { "QAM_AUTO", "QAM" },
         { "VSB_16", "16VSB" }, { "VSB_8", "8VSB" }
     };

     if( VAR_1 == ((void*)0) )
         return ((void*)0);

     const struct mod *VAR_3 = FUNC_0(VAR_1, VAR_2, sizeof (VAR_2) / sizeof(VAR_2[0]),
                                   sizeof (VAR_2[0]), VAR_0);
     return (VAR_3 != ((void*)0)) ? VAR_3->vlc : ((void*)0);
}
