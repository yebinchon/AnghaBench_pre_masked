
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int,int ,int*) ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (int,int ) ;

void
FUNC_7(int VAR_12)
{
 int VAR_13, VAR_14;

 if (FUNC_1()) {
  VAR_13 = FUNC_4(VAR_12, VAR_1, &VAR_14);
  if (VAR_13 < 0) {
   FUNC_3(VAR_8, "VM exit on HLT not supported\n");
   FUNC_0(1);
  }
  FUNC_5(VAR_12, VAR_1, 1);
  if (VAR_12 == VAR_0)
   VAR_7[VAR_3] = VAR_9;
 }

        if (FUNC_2()) {



  VAR_13 = FUNC_4(VAR_12, VAR_2, &VAR_14);
  if (VAR_13 < 0) {
   FUNC_3(VAR_8,
       "SMP mux requested, no pause support\n");
   FUNC_0(1);
  }
  FUNC_5(VAR_12, VAR_2, 1);
  if (VAR_12 == VAR_0)
   VAR_7[VAR_4] = VAR_10;
        }

 if (VAR_11)
  VAR_13 = FUNC_6(VAR_12, VAR_6);
 else
  VAR_13 = FUNC_6(VAR_12, VAR_5);

 if (VAR_13) {
  FUNC_3(VAR_8, "Unable to set x2apic state (%d)\n", VAR_13);
  FUNC_0(1);
 }
}
