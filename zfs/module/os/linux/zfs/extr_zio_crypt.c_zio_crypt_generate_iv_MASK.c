
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

int
FUNC_2(uint8_t *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2 != 0)
  goto error;

 return (0);

error:
 FUNC_0(VAR_1, VAR_0);
 return (VAR_2);
}
