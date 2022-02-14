
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iocb {int dummy; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct iocb*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int VAR_8 ;
 int FUNC_5 (struct iocb*,int,char*,int,int ) ;
 int FUNC_6 (struct iocb*,int,char*,int,int ) ;
 scalar_t__ FUNC_7 (int,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 char* FUNC_9 (int ,int,int,int ,int,int ) ;
 int FUNC_10 (char*,int,int) ;
 int FUNC_11 (char*,int *,int ) ;

int
FUNC_12(int VAR_9, char **VAR_10)
{
 char *VAR_11;
 int VAR_12 = FUNC_4();
 int VAR_13 = FUNC_11(VAR_10[2], ((void*)0), 0);
 int VAR_14;
 struct iocb VAR_15;

 if (FUNC_7(1024, &VAR_8))
  FUNC_2(1, "io_queue_init failed");

 VAR_14 = FUNC_10(VAR_10[1], VAR_3 | VAR_2, VAR_6 | VAR_7);
 if (VAR_14 < 0)
  FUNC_2(1, "open failed");

 if (FUNC_3(VAR_14, VAR_13) < 0)
  FUNC_2(1, "ftruncate failed");

 VAR_11 = FUNC_9(0, VAR_12, VAR_4 | VAR_5, VAR_1, VAR_14, 0);
 if (VAR_11 == VAR_0)
  FUNC_2(1, "mmap failed");

 (void) FUNC_6(&VAR_15, VAR_14, VAR_11, VAR_13, 0);
 FUNC_1(&VAR_15);

 (void) FUNC_5(&VAR_15, VAR_14, VAR_11, VAR_13, 0);
 FUNC_1(&VAR_15);

 if (FUNC_0(VAR_14))
  FUNC_2(1, "close failed");

 if (FUNC_8(VAR_8) != 0)
  FUNC_2(1, "io_queue_release failed");

 return (0);
}
