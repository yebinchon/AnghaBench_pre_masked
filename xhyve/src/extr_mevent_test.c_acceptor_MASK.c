
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (int,int ,int ,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,int ,void*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void *
FUNC_13(void *VAR_12)
{
 struct sockaddr_in VAR_13;
 pthread_t VAR_14;
 int VAR_15;
 int VAR_16;
 static int VAR_17;

        if ((VAR_16 = FUNC_12(VAR_0, VAR_4, 0)) < 0) {
                FUNC_7("socket");
                FUNC_2(1);
        }

        VAR_13.sin_len = sizeof(VAR_13);
        VAR_13.sin_family = VAR_0;
        VAR_13.sin_addr.s_addr = FUNC_3(VAR_3);
        VAR_13.sin_port = FUNC_4(VAR_5);

        if (FUNC_1(VAR_16, (struct sockaddr *)&VAR_13, sizeof(VAR_13)) < 0) {
                FUNC_7("bind");
                FUNC_2(1);
        }

        if (FUNC_5(VAR_16, 1) < 0) {
                FUNC_7("listen");
                FUNC_2(1);
        }

 (void) FUNC_6(VAR_16, VAR_1, VAR_8, ((void*)0));

 FUNC_11(&VAR_7);

 while (!FUNC_9(&VAR_6, &VAR_7)) {
  VAR_15 = FUNC_0(VAR_16, ((void*)0), ((void*)0));
  if (VAR_15 < 0) {
   FUNC_7("accept error");
  } else {
   static int VAR_18 = 1;

   if (VAR_18) {



    VAR_18 = 0;
    VAR_10 = FUNC_6(1, VAR_2, VAR_11,
        ((void*)0));
   }

   FUNC_8("incoming connection, spawning thread\n");
   FUNC_10(&VAR_14, ((void*)0), VAR_9,
           (void *)(uintptr_t)VAR_15);
  }
 }

 return (((void*)0));
}
