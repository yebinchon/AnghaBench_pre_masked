
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int longlong_t ;
struct TYPE_5__ {scalar_t__ bpo_object; } ;
struct TYPE_4__ {TYPE_2__ dle_bpobj; scalar_t__ dle_mintxg; } ;
typedef TYPE_1__ dsl_deadlist_entry_t ;
typedef int buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int* VAR_0 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_1, dsl_deadlist_entry_t *VAR_2)
{
 FUNC_0(VAR_1 == ((void*)0));
 if (VAR_0['d'] >= 5) {
  char VAR_3[128];
  (void) FUNC_3(VAR_3, sizeof (VAR_3),
      "mintxg %llu -> obj %llu",
      (longlong_t)VAR_2->dle_mintxg,
      (longlong_t)VAR_2->dle_bpobj.bpo_object);

  FUNC_1(&VAR_2->dle_bpobj, VAR_3, 0);
 } else {
  (void) FUNC_2("mintxg %llu -> obj %llu\n",
      (longlong_t)VAR_2->dle_mintxg,
      (longlong_t)VAR_2->dle_bpobj.bpo_object);
 }
 return (0);
}
