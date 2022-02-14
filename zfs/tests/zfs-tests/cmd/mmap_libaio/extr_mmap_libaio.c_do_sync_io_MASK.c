
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int member_0; int member_1; } ;
struct iocb {int dummy; } ;
struct io_event {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int,struct io_event*,struct timespec*) ;
 int FUNC_2 (int ,int,struct iocb**) ;

__attribute__((used)) static void
FUNC_3(struct iocb *VAR_1)
{
 struct io_event VAR_2;
 struct iocb *VAR_3[] = { VAR_1 };
 struct timespec VAR_4 = { 30, 0 };

 if (FUNC_2(VAR_0, 1, VAR_3) != 1)
  FUNC_0(1, "io_submit failed");

 if (FUNC_1(VAR_0, 0, 1, &VAR_2, &VAR_4) != 1)
  FUNC_0(1, "io_getevents failed");
}
