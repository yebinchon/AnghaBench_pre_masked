
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ks_raw_bufsize; int ks_raw_buf; } ;
typedef TYPE_1__ kstat_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(kstat_t *VAR_3)
{
 if (VAR_3->ks_raw_bufsize == VAR_2)
  return (VAR_0);

 FUNC_2(VAR_3->ks_raw_buf, VAR_3->ks_raw_bufsize);
 VAR_3->ks_raw_bufsize = FUNC_0(VAR_3->ks_raw_bufsize * 2, VAR_2);
 VAR_3->ks_raw_buf = FUNC_1(VAR_3->ks_raw_bufsize, VAR_1);

 return (0);
}
