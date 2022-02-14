
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sa_share_ops_t ;
struct TYPE_5__ {char const* name; struct TYPE_5__* next; int fsinfo_index; int const* ops; } ;
typedef TYPE_1__ sa_fstype_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

sa_fstype_t *
FUNC_1(const char *VAR_2, const sa_share_ops_t *VAR_3)
{
 sa_fstype_t *VAR_4;

 VAR_4 = FUNC_0(1, sizeof (sa_fstype_t));

 if (VAR_4 == ((void*)0))
  return (((void*)0));

 VAR_4->name = VAR_2;
 VAR_4->ops = VAR_3;
 VAR_4->fsinfo_index = VAR_1;

 VAR_1++;

 VAR_4->next = VAR_0;
 VAR_0 = VAR_4;

 return (VAR_4);
}
