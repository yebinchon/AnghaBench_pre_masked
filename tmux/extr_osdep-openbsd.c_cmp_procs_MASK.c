
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {scalar_t__ p_estcpu; scalar_t__ p_slptime; int p_flag; scalar_t__ p_pid; int p_comm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kinfo_proc*) ;
 scalar_t__ FUNC_1 (struct kinfo_proc*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static struct kinfo_proc *
FUNC_3(struct kinfo_proc *VAR_1, struct kinfo_proc *VAR_2)
{
 if (FUNC_0(VAR_1) && !FUNC_0(VAR_2))
  return (VAR_1);
 if (!FUNC_0(VAR_1) && FUNC_0(VAR_2))
  return (VAR_2);

 if (FUNC_1(VAR_1) && !FUNC_1(VAR_2))
  return (VAR_1);
 if (!FUNC_1(VAR_1) && FUNC_1(VAR_2))
  return (VAR_2);

 if (VAR_1->p_estcpu > VAR_2->p_estcpu)
  return (VAR_1);
 if (VAR_1->p_estcpu < VAR_2->p_estcpu)
  return (VAR_2);

 if (VAR_1->p_slptime < VAR_2->p_slptime)
  return (VAR_1);
 if (VAR_1->p_slptime > VAR_2->p_slptime)
  return (VAR_2);

 if ((VAR_1->p_flag & VAR_0) && !(VAR_2->p_flag & VAR_0))
  return (VAR_1);
 if (!(VAR_1->p_flag & VAR_0) && (VAR_2->p_flag & VAR_0))
  return (VAR_2);

 if (FUNC_2(VAR_1->p_comm, VAR_2->p_comm) < 0)
  return (VAR_1);
 if (FUNC_2(VAR_1->p_comm, VAR_2->p_comm) > 0)
  return (VAR_2);

 if (VAR_1->p_pid > VAR_2->p_pid)
  return (VAR_1);
 return (VAR_2);
}
