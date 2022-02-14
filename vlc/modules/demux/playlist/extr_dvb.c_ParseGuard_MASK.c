
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct guard TYPE_1__ ;


typedef int tab ;
struct guard {char* dvb; char* vlc; } ;


 struct guard* FUNC_0 (char const*,TYPE_1__ const*,int,int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_1)
{
     static const struct guard
     {
         char dvb[7];
         char vlc[7];
     } VAR_2[] = {
         { "19_128", "19/128" }, { "19_256", "19/256" }, { "1_128", "1/128" },
         { "1_16", "1/16" }, { "1_32", "1/32" }, { "1_4", "1/4" },
         { "1_8", "1/8" }, { "AUTO", "" },
     };

     if (VAR_1 == ((void*)0) || FUNC_1(VAR_1, "GUARD_INTERVAL_", 15))
         return ((void*)0);
     VAR_1 += 15;

     const struct guard *VAR_3 = FUNC_0(VAR_1, VAR_2, sizeof (VAR_2) / sizeof(VAR_2[0]),
                                     sizeof (VAR_2[0]), VAR_0);
     return (VAR_3 != ((void*)0)) ? VAR_3->vlc : ((void*)0);
}
