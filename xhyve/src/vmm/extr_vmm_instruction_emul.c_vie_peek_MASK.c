
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vie {size_t num_processed; size_t num_valid; int * inst; } ;



__attribute__((used)) static int
FUNC_0(struct vie *VAR_0, uint8_t *VAR_1)
{

 if (VAR_0->num_processed < VAR_0->num_valid) {
  *VAR_1 = VAR_0->inst[VAR_0->num_processed];
  return (0);
 } else
  return (-1);
}
