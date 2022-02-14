
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

void FUNC_2 (void) {
  if (sizeof (int) != 4u) {
    FUNC_1 ("sizeof (int) isn't equal 4.\n");
    FUNC_0 (1);
  }
  if (sizeof (char) != 1u) {
    FUNC_1 ("sizeof (char) isn't equal 1.\n");
    FUNC_0 (1);
  }
}
