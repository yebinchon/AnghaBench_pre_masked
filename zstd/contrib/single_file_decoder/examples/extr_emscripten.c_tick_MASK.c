
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (float,float,float,float) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,float) ;
 float VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_5() {
 FUNC_1(1.0f, 0.0f, 1.0f, 1.0f);
 FUNC_0(VAR_0 | VAR_1);

 if (VAR_5 >= 0) {
  FUNC_4(VAR_5, VAR_4);
  VAR_4 += 0.1f;
  if (VAR_4 >= 360.0f) {
   VAR_4 -= 360.0f;
  }
 }

 FUNC_2(VAR_2, 6, VAR_3, 0);
 FUNC_3();
}
