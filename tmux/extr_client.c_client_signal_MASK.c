
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; int sa_flags; int sa_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct sigaction*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int *,int ) ;
 int FUNC_4 (int ,struct sigaction*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int*,int ) ;

__attribute__((used)) static void
FUNC_7(int VAR_16)
{
 struct sigaction VAR_17;
 int VAR_18;

 if (VAR_16 == VAR_6)
  FUNC_6(VAR_9, &VAR_18, VAR_10);
 else if (!VAR_11) {
  if (VAR_16 == 129)
   FUNC_2(VAR_15);
 } else {
  switch (VAR_16) {
  case 130:
   VAR_12 = VAR_0;
   VAR_13 = 1;
   FUNC_3(VAR_14, VAR_2, -1, ((void*)0), 0);
   break;
  case 129:
   VAR_12 = VAR_1;
   VAR_13 = 1;
   FUNC_3(VAR_14, VAR_2, -1, ((void*)0), 0);
   break;
  case 128:
   FUNC_3(VAR_14, VAR_3, -1, ((void*)0), 0);
   break;
  case 131:
   FUNC_1(&VAR_17, 0, sizeof VAR_17);
   FUNC_5(&VAR_17.sa_mask);
   VAR_17.sa_flags = VAR_5;
   VAR_17.sa_handler = VAR_8;
   if (FUNC_4(VAR_7, &VAR_17, ((void*)0)) != 0)
    FUNC_0("sigaction failed");
   FUNC_3(VAR_14, VAR_4, -1, ((void*)0), 0);
   break;
  }
 }
}
