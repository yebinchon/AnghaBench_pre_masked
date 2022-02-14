
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int uint8_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0, uint8_t *VAR_1, uint_t VAR_2)
{
 int VAR_3;

 FUNC_0("\t%s\t", VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_0("%02x", VAR_1[VAR_3] & 0xff);
 }
 FUNC_0("\n");
}
