
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct smbios_table_type4 {scalar_t__ socket; } ;
struct smbios_structure {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct smbios_structure*,char const**,char*,char**,int *,int *) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct smbios_structure *VAR_1,
    const char **VAR_2, char *VAR_3, char **VAR_4,
    uint16_t *VAR_5, uint16_t *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  struct smbios_table_type4 *VAR_8;
  char *VAR_9;
  int VAR_10, VAR_11;

  FUNC_0(VAR_1, VAR_2,
      VAR_3, VAR_4, VAR_5, VAR_6);
  VAR_8 = (struct smbios_table_type4 *)VAR_3;
  VAR_9 = VAR_3 + sizeof (struct smbios_table_type4);
  VAR_10 = 0;
  while (VAR_9 < *VAR_4 - 1) {
   if (*VAR_9++ == '\0')
    VAR_10++;
  }
  VAR_11 = FUNC_1(*VAR_4 - 1, "CPU #%d", VAR_7) + 1;
  *VAR_4 += VAR_11 - 1;
  *(*VAR_4) = '\0';
  (*VAR_4)++;
  VAR_8->socket = (uint8_t) (VAR_10 + 1);
  VAR_3 = *VAR_4;
 }

 return (0);
}
