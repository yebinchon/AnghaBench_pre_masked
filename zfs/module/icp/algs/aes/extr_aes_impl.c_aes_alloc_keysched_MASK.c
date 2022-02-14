
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void aes_key_t ;


 scalar_t__ FUNC_0 (int,int) ;

void *
FUNC_1(size_t *VAR_0, int VAR_1)
{
 aes_key_t *VAR_2;

 VAR_2 = (aes_key_t *)FUNC_0(sizeof (aes_key_t), VAR_1);
 if (VAR_2 != ((void*)0)) {
  *VAR_0 = sizeof (aes_key_t);
  return (VAR_2);
 }
 return (((void*)0));
}
