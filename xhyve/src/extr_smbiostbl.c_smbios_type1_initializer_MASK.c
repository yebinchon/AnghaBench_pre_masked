
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int u_char ;
struct smbios_table_type1 {int uuid; } ;
struct smbios_structure {int dummy; } ;
typedef int hostname ;
typedef int digest ;
typedef int CC_SHA256_CTX ;


 int VAR_0 ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,unsigned int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*,int) ;
 int * VAR_2 ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (struct smbios_structure*,char const**,char*,char**,int *,int *) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,scalar_t__*) ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;

__attribute__((used)) static int
FUNC_9(struct smbios_structure *VAR_5,
    const char **VAR_6, char *VAR_7, char **VAR_8,
    uint16_t *VAR_9, uint16_t *VAR_10)
{
 struct smbios_table_type1 *VAR_11;

 FUNC_5(VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_9, VAR_10);
 VAR_11 = (struct smbios_table_type1 *)VAR_7;

 if (VAR_2 != ((void*)0)) {
  uuid_t VAR_12;
  uint32_t VAR_13;

  FUNC_8(VAR_2, &VAR_12, &VAR_13);
  if (VAR_13 != VAR_3)
   return (-1);

  FUNC_7(&VAR_11->uuid, &VAR_12);
 } else {
  CC_SHA256_CTX VAR_14;
  u_char VAR_15[VAR_0];
  char VAR_16[VAR_1];






  if (FUNC_3(VAR_16, sizeof(VAR_16)))
   return (-1);

  FUNC_1(&VAR_14);
  FUNC_2(&VAR_14, VAR_4, ((unsigned) FUNC_6(VAR_4)));
  FUNC_2(&VAR_14, VAR_16, ((unsigned) sizeof(VAR_16)));
  FUNC_0(VAR_15, &VAR_14);




  VAR_15[6] &= 0x0F;
  VAR_15[6] |= 0x30;
  VAR_15[8] &= 0x3F;
  VAR_15[8] |= 0x80;

  FUNC_4(&VAR_11->uuid, VAR_15, sizeof (VAR_15));
 }

 return (0);
}
