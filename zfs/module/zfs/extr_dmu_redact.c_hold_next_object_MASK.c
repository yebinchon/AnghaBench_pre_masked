
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct redact_record {scalar_t__ start_object; } ;
typedef int objset_t ;
struct TYPE_5__ {int dn_type; } ;
typedef TYPE_1__ dnode_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_1 ;
 int FUNC_1 (int *,scalar_t__*,int ,int ) ;
 int FUNC_2 (int *,scalar_t__,void*,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*,void*) ;

__attribute__((used)) static int
FUNC_4(objset_t *VAR_2, struct redact_record *VAR_3, void *VAR_4,
    uint64_t *VAR_5, dnode_t **VAR_6)
{
 int VAR_7 = 0;
 if (*VAR_6 != ((void*)0))
  FUNC_3(*VAR_6, VAR_1);
 *VAR_6 = ((void*)0);
 if (*VAR_5 < VAR_3->start_object) {
  *VAR_5 = VAR_3->start_object - 1;
 }
 VAR_7 = FUNC_1(VAR_2, VAR_5, VAR_0, 0);
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_7 = FUNC_2(VAR_2, *VAR_5, VAR_4, VAR_6);
 while (VAR_7 == 0 && (*VAR_5 < VAR_3->start_object ||
     FUNC_0((*VAR_6)->dn_type))) {
  FUNC_3(*VAR_6, VAR_4);
  *VAR_6 = ((void*)0);
  VAR_7 = FUNC_1(VAR_2, VAR_5, VAR_0, 0);
  if (VAR_7 != 0)
   break;
  VAR_7 = FUNC_2(VAR_2, *VAR_5, VAR_4, VAR_6);
 }
 return (VAR_7);
}
