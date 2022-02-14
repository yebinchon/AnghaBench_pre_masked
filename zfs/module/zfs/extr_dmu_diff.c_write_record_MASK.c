
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ddr_type; } ;
struct diffarg {int da_err; int* da_offp; TYPE_1__ da_ddr; int da_vp; } ;
typedef int ssize_t ;
typedef int caddr_t ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct diffarg *VAR_5)
{
 ssize_t VAR_6;

 if (VAR_5->da_ddr.ddr_type == VAR_0) {
  VAR_5->da_err = 0;
  return (0);
 }

 VAR_5->da_err = FUNC_1(VAR_4, VAR_5->da_vp, (caddr_t)&VAR_5->da_ddr,
     sizeof (VAR_5->da_ddr), 0, VAR_3, VAR_1,
     VAR_2, FUNC_0(), &VAR_6);
 *VAR_5->da_offp += sizeof (VAR_5->da_ddr);
 return (VAR_5->da_err);
}
