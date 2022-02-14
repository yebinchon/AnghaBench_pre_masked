
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int uint8_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0, uint8_t *VAR_1, uint_t VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0, "%02x", VAR_1[VAR_3] & 0xff);
  VAR_0 += VAR_4;
 }

 VAR_0[0] = '\0';
}
