
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,void*,int ) ;
 size_t VAR_2 ;
 int * VAR_3 ;
 int ** VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7 (void) {
  FUNC_3 ("\n");
  FUNC_1 (VAR_7);

  VAR_6 = 0;
  FUNC_5 (VAR_3);
  VAR_3 = ((void*)0);
  FUNC_4 ();

  VAR_4[VAR_2] = FUNC_6 (VAR_1);
  ++VAR_2;

  if (VAR_2 < VAR_5) {
    FUNC_0 (VAR_0);
  } else {
    FUNC_2 (VAR_0, (void *)VAR_4, VAR_8);
    int VAR_9;
    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
      FUNC_5 (VAR_4[VAR_9]);
    }
  }
}
