
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct smbios_table_type19 {int xsaddr; scalar_t__ xeaddr; void* arrayhand; } ;
struct smbios_structure {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct smbios_structure*,char const**,char*,char**,int *,int *) ;
 void* VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct smbios_structure *VAR_4,
    const char **VAR_5, char *VAR_6, char **VAR_7,
    uint16_t *VAR_8, uint16_t *VAR_9)
{
 struct smbios_table_type19 *VAR_10;

 FUNC_0(VAR_4, VAR_5,
     VAR_6, VAR_7, VAR_8, VAR_9);
 VAR_10 = (struct smbios_table_type19 *)VAR_6;
 VAR_10->arrayhand = VAR_3;
 VAR_10->xsaddr = 0;
 VAR_10->xeaddr = VAR_2;

 if (VAR_1 > 0) {
  VAR_6 = *VAR_7;
  FUNC_0(VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8, VAR_9);
  VAR_10 = (struct smbios_table_type19 *)VAR_6;
  VAR_10->arrayhand = VAR_3;
  VAR_10->xsaddr = 4*VAR_0;
  VAR_10->xeaddr = VAR_1;
 }

 return (0);
}
