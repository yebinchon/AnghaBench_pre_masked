
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vm_exit {int exitcode; scalar_t__ inst_length; int rip; } ;
struct vm {int * rendezvous_func; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vm_exit* FUNC_1 (struct vm*,int) ;
 int FUNC_2 (struct vm*,int,int ,int) ;

void
FUNC_3(struct vm *VAR_2, int VAR_3, uint64_t VAR_4)
{
 struct vm_exit *VAR_5;

 FUNC_0(VAR_2->rendezvous_func != ((void*)0), ("rendezvous not in progress"));

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 VAR_5->rip = VAR_4;
 VAR_5->inst_length = 0;
 VAR_5->exitcode = VAR_1;
 FUNC_2(VAR_2, VAR_3, VAR_0, 1);
}
