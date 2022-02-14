
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;
struct TYPE_2__ {scalar_t__ rto_sweep; scalar_t__ rto_benchmark; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int*,char**) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 char* VAR_9 ;
 unsigned int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*,int,int ) ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 () ;
 int* VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *,int ,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_13 (int ,struct sigaction*,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,char*,unsigned int) ;
 int FUNC_16 (unsigned int) ;
 int VAR_13 ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int,int ) ;
 int FUNC_20 (int*,int) ;

int
FUNC_21(int VAR_14, char **VAR_15)
{
 size_t VAR_16;
 struct sigaction VAR_17;
 int VAR_18 = 0;


 (void) FUNC_15(VAR_8, VAR_9, FUNC_3());

 VAR_17.sa_handler = VAR_12;
 FUNC_14(&VAR_17.sa_mask);
 VAR_17.sa_flags = 0;

 if (FUNC_13(VAR_3, &VAR_17, ((void*)0)) < 0) {
  FUNC_0("raidz_test: cannot catch SIGSEGV: %s.\n", FUNC_17(VAR_7));
  FUNC_2(VAR_0);
 }

 (void) FUNC_12(VAR_13, ((void*)0), VAR_6, 0);

 FUNC_1(&VAR_14, VAR_15);

 FUNC_7(VAR_14, VAR_15);

 FUNC_5(VAR_1);


 VAR_10 = (int *)FUNC_19(VAR_4, VAR_5);
 FUNC_16((unsigned)FUNC_18(((void*)0)) * FUNC_3());
 for (VAR_16 = 0; VAR_16 < VAR_4 / sizeof (int); VAR_16++)
  VAR_10[VAR_16] = FUNC_8();

 FUNC_6(VAR_10, VAR_4, VAR_2);

 if (VAR_11.rto_benchmark) {
  FUNC_9();
 } else if (VAR_11.rto_sweep) {
  VAR_18 = FUNC_10();
 } else {
  VAR_18 = FUNC_11(((void*)0));
 }

 FUNC_20(VAR_10, VAR_4);
 FUNC_4();

 return (VAR_18);
}
