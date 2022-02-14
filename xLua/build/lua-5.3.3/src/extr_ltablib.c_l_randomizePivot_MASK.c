
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int* time_t ;
typedef unsigned int* clock_t ;


 unsigned int* FUNC_0 () ;
 int FUNC_1 (unsigned int*,unsigned int**,int) ;
 unsigned int FUNC_2 (unsigned int*) ;
 unsigned int* FUNC_3 (int *) ;

__attribute__((used)) static unsigned int FUNC_4 (void) {
  clock_t VAR_0 = FUNC_0();
  time_t VAR_1 = FUNC_3(((void*)0));
  unsigned int VAR_2[FUNC_2(VAR_0) + FUNC_2(VAR_1)];
  unsigned int VAR_3, VAR_4 = 0;
  FUNC_1(VAR_2, &VAR_0, FUNC_2(VAR_0) * sizeof(unsigned int));
  FUNC_1(VAR_2 + FUNC_2(VAR_0), &VAR_1, FUNC_2(VAR_1) * sizeof(unsigned int));
  for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_2); VAR_3++)
    VAR_4 += VAR_2[VAR_3];
  return VAR_4;
}
