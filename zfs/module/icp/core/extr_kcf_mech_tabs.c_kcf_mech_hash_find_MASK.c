
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mod_hash_val_t ;
typedef int mod_hash_key_t ;
typedef scalar_t__ crypto_mech_type_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__*) ;

__attribute__((used)) static crypto_mech_type_t
FUNC_2(char *VAR_2)
{
 mod_hash_val_t VAR_3;
 crypto_mech_type_t VAR_4;

 VAR_4 = VAR_0;
 if (FUNC_1(VAR_1, (mod_hash_key_t)VAR_2, &VAR_3) == 0) {
  VAR_4 = *(crypto_mech_type_t *)VAR_3;
  FUNC_0(VAR_4 != VAR_0);
 }

 return (VAR_4);
}
