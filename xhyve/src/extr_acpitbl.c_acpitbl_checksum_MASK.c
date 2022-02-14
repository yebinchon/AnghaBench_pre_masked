
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static uint8_t
FUNC_0(void *VAR_0, size_t VAR_1) {
 unsigned int VAR_2;
 uint8_t VAR_3;

 for (VAR_3 = 0, VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 += ((uint8_t *) VAR_0)[VAR_2];
 }

 return (((uint8_t) 0) - VAR_3);
}
