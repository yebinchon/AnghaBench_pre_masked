
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct smbios_structure {int dummy; } ;
struct smbios_entry_point {int dummy; } ;
typedef int (* initializer_func_t ) (struct smbios_structure*,char const**,char*,char**,scalar_t__*,scalar_t__*) ;
struct TYPE_2__ {char** strings; int (* initializer ) (struct smbios_structure*,char const**,char*,char**,scalar_t__*,scalar_t__*) ;struct smbios_structure* entry; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct smbios_entry_point*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct smbios_entry_point*,scalar_t__) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct smbios_structure*,char const**,char*,char**,scalar_t__*,scalar_t__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

int
FUNC_8(void)
{
 struct smbios_entry_point *VAR_7;
 uint16_t VAR_8;
 uint16_t VAR_9;
 char *VAR_10, *VAR_11, *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_4 = FUNC_7();
 VAR_3 = FUNC_6();

 VAR_11 = FUNC_2(VAR_1, VAR_2);
 if (VAR_11 == ((void*)0)) {
  FUNC_1(VAR_6, "smbios table requires mapped mem\n");
  return (VAR_0);
 }

 VAR_10 = VAR_11;

 VAR_7 = (struct smbios_entry_point *)VAR_10;
 FUNC_4(VAR_7, VAR_1 +
     sizeof(struct smbios_entry_point));
 VAR_10 += sizeof(struct smbios_entry_point);
 VAR_12 = VAR_10;

 VAR_8 = 0;
 VAR_9 = 0;
 for (VAR_13 = 0; VAR_5[VAR_13].entry != ((void*)0); VAR_13++) {
  struct smbios_structure *VAR_15;
  const char **VAR_16;
  initializer_func_t VAR_17;
  char *VAR_18;
  uint16_t VAR_19;

  VAR_15 = VAR_5[VAR_13].entry;
  VAR_16 = VAR_5[VAR_13].strings;
  VAR_17 = VAR_5[VAR_13].initializer;

  VAR_14 = (*VAR_17)(VAR_15, VAR_16, VAR_10, &VAR_18,
      &VAR_8, &VAR_19);
  if (VAR_14 != 0)
   return (VAR_14);

  if (VAR_19 > VAR_9)
   VAR_9 = VAR_19;

  VAR_10 = VAR_18;
 }

 FUNC_0(VAR_10 - VAR_11 < VAR_2);
 FUNC_3(VAR_7, ((uint16_t) (VAR_10 - VAR_12)), VAR_8,
  VAR_9);

 return (0);
}
