
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct reconst_q_struct {int exp; int * q; } ;
typedef int dst ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, size_t VAR_1, void *VAR_2)
{
 struct reconst_q_struct *VAR_3 = VAR_2;
 uint64_t *VAR_4 = VAR_0;
 int VAR_5 = VAR_1 / sizeof (VAR_4[0]);

 for (int VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_4++, VAR_3->q++) {
  int VAR_7;
  uint8_t *VAR_8;

  *VAR_4 ^= *VAR_3->q;
  for (VAR_7 = 0, VAR_8 = (uint8_t *)VAR_4; VAR_7 < 8; VAR_7++, VAR_8++) {
   *VAR_8 = FUNC_0(*VAR_8, VAR_3->exp);
  }
 }

 return (0);
}
