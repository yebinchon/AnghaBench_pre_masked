
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callout {int wait; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct callout*,int ,int) ;
 scalar_t__ FUNC_2 (int *,int *) ;

void FUNC_3(struct callout *VAR_0, int VAR_1) {
  if (!VAR_1) {
    FUNC_0();
  }

  FUNC_1(VAR_0, 0, sizeof(struct callout));

  if (FUNC_2(&VAR_0->wait, ((void*)0))) {
    FUNC_0();
  }
}
