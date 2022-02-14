
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct fec TYPE_1__ ;


typedef int tab ;
struct fec {char* dvb; char* vlc; } ;


 struct fec* FUNC_0 (char const*,TYPE_1__ const*,int,int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_1)
{
     static const struct fec
     {
         char dvb[5];
         char vlc[5];
     } VAR_2[] = {
         { "1_2", "1/2" }, { "2_3", "2/3" }, { "3_4", "3/4" },
         { "4_5", "4/5" }, { "5_6", "5/6" }, { "6_7", "6/7" },
         { "7_8", "7/8" }, { "8_9", "8/9" }, { "9_10", "9/10" },
         { "AUTO", "" }, { "NONE", "0" }
     };

     if (VAR_1 == ((void*)0) || FUNC_1(VAR_1, "FEC_", 4))
         return ((void*)0);
     VAR_1 += 4;

     const struct fec *VAR_3 = FUNC_0(VAR_1, VAR_2, sizeof (VAR_2) / sizeof(VAR_2[0]),
                                   sizeof (VAR_2[0]), VAR_0);
     return (VAR_3 != ((void*)0)) ? VAR_3->vlc : ((void*)0);
}
