
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tq_flags; scalar_t__ tq_nthreads; int tq_nspawn; scalar_t__ tq_maxthreads; } ;
typedef TYPE_1__ taskq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,TYPE_1__*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1(taskq_t *VAR_5)
{
 int VAR_6 = 0;

 if (!(VAR_5->tq_flags & VAR_1))
  return (0);

 if ((VAR_5->tq_nthreads + VAR_5->tq_nspawn < VAR_5->tq_maxthreads) &&
     (VAR_5->tq_flags & VAR_0)) {
  VAR_6 = (++VAR_5->tq_nspawn);
  FUNC_0(VAR_3, VAR_4,
      VAR_5, VAR_2);
 }

 return (VAR_6);
}
