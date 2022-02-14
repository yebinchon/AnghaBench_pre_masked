
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* f_ksid; } ;
typedef TYPE_2__ fuid_domain_t ;
struct TYPE_3__ {int kd_name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const fuid_domain_t *VAR_2 = (const fuid_domain_t *)VAR_0;
 const fuid_domain_t *VAR_3 = (const fuid_domain_t *)VAR_1;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->f_ksid->kd_name, VAR_3->f_ksid->kd_name);

 return (FUNC_0(VAR_4));
}
