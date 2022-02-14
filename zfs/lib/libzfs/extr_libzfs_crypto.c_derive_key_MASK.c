
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_keyformat_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int *,int,int ,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int *) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int
FUNC_9(libzfs_handle_t *VAR_5, zfs_keyformat_t VAR_6, uint64_t VAR_7,
    uint8_t *VAR_8, size_t VAR_9, uint64_t VAR_10,
    uint8_t **VAR_11)
{
 int VAR_12;
 uint8_t *VAR_13;

 *VAR_11 = ((void*)0);

 VAR_13 = FUNC_7(VAR_5, VAR_4);
 if (!VAR_13)
  return (VAR_2);

 switch (VAR_6) {
 case 128:
  FUNC_2(VAR_8, VAR_13, VAR_4);
  break;
 case 130:
  VAR_12 = FUNC_5((char *)VAR_8,
      VAR_4 * 2, VAR_13);
  if (VAR_12 != 0) {
   FUNC_8(VAR_5, FUNC_3(VAR_3,
       "Invalid hex key provided."));
   goto error;
  }
  break;
 case 129:
  VAR_10 = FUNC_0(VAR_10);

  VAR_12 = FUNC_1((char *)VAR_8,
      FUNC_6((char *)VAR_8), ((uint8_t *)&VAR_10),
      sizeof (uint64_t), VAR_7, VAR_4, VAR_13);
  if (VAR_12 != 1) {
   VAR_12 = VAR_1;
   FUNC_8(VAR_5, FUNC_3(VAR_3,
       "Failed to generate key from passphrase."));
   goto error;
  }
  break;
 default:
  VAR_12 = VAR_0;
  goto error;
 }

 *VAR_11 = VAR_13;
 return (0);

error:
 FUNC_4(VAR_13);

 *VAR_11 = ((void*)0);
 return (VAR_12);
}
