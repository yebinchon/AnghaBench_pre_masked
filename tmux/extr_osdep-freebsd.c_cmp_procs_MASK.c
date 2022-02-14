
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {scalar_t__ ki_estcpu; scalar_t__ ki_slptime; scalar_t__ ki_pid; int ki_comm; } ;


 scalar_t__ FUNC_0 (struct kinfo_proc*) ;
 scalar_t__ FUNC_1 (struct kinfo_proc*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

struct kinfo_proc *
FUNC_3(struct kinfo_proc *VAR_0, struct kinfo_proc *VAR_1)
{
 if (FUNC_0(VAR_0) && !FUNC_0(VAR_1))
  return (VAR_0);
 if (!FUNC_0(VAR_0) && FUNC_0(VAR_1))
  return (VAR_1);

 if (FUNC_1(VAR_0) && !FUNC_1(VAR_1))
  return (VAR_0);
 if (!FUNC_1(VAR_0) && FUNC_1(VAR_1))
  return (VAR_1);

 if (VAR_0->ki_estcpu > VAR_1->ki_estcpu)
  return (VAR_0);
 if (VAR_0->ki_estcpu < VAR_1->ki_estcpu)
  return (VAR_1);

 if (VAR_0->ki_slptime < VAR_1->ki_slptime)
  return (VAR_0);
 if (VAR_0->ki_slptime > VAR_1->ki_slptime)
  return (VAR_1);

 if (FUNC_2(VAR_0->ki_comm, VAR_1->ki_comm) < 0)
  return (VAR_0);
 if (FUNC_2(VAR_0->ki_comm, VAR_1->ki_comm) > 0)
  return (VAR_1);

 if (VAR_0->ki_pid > VAR_1->ki_pid)
  return (VAR_0);
 return (VAR_1);
}
