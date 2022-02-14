
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int zbm_creation_txg; int zbm_flags; } ;
struct TYPE_4__ {int dbn_name; TYPE_1__ dbn_phys; } ;
typedef TYPE_2__ dsl_bookmark_node_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(const void *VAR_1, const void *VAR_2)
{
 const dsl_bookmark_node_t *VAR_3 = VAR_1;
 const dsl_bookmark_node_t *VAR_4 = VAR_2;

 int64_t VAR_5 = FUNC_0(VAR_3->dbn_phys.zbm_creation_txg,
     VAR_4->dbn_phys.zbm_creation_txg);
 if (FUNC_2(VAR_5))
  return (VAR_5);
 VAR_5 = FUNC_0((VAR_3->dbn_phys.zbm_flags & VAR_0),
     (VAR_4->dbn_phys.zbm_flags & VAR_0));
 if (FUNC_2(VAR_5))
  return (VAR_5);
 VAR_5 = FUNC_3(VAR_3->dbn_name, VAR_4->dbn_name);
 return (FUNC_1(VAR_5));
}
