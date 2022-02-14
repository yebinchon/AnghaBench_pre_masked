
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct reconst_pq_struct {int* p; int* q; int* pxy; int* qxy; int bexp; int aexp; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, void *VAR_1, size_t VAR_2, void *VAR_3)
{
 struct reconst_pq_struct *VAR_4 = VAR_3;
 uint8_t *VAR_5 = VAR_0;
 uint8_t *VAR_6 = VAR_1;

 for (int VAR_7 = 0; VAR_7 < VAR_2;
     VAR_7++, VAR_4->p++, VAR_4->q++, VAR_4->pxy++, VAR_4->qxy++, VAR_5++, VAR_6++) {
  *VAR_5 = FUNC_0(*VAR_4->p ^ *VAR_4->pxy, VAR_4->aexp) ^
      FUNC_0(*VAR_4->q ^ *VAR_4->qxy, VAR_4->bexp);
  *VAR_6 = *VAR_4->p ^ *VAR_4->pxy ^ *VAR_5;
 }

 return (0);
}
