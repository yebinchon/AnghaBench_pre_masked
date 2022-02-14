
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ hrtime_t ;
struct TYPE_9__ {int sg_flags; scalar_t__ sg_count; scalar_t__ sg_n; scalar_t__ sg_t; int sg_name; int sg_list; } ;
typedef TYPE_1__ fmd_serd_eng_t ;
struct TYPE_10__ {scalar_t__ se_hrt; } ;
typedef TYPE_2__ fmd_serd_elem_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (char*,int ,...) ;

int
FUNC_6(fmd_serd_eng_t *VAR_4, hrtime_t VAR_5)
{
 fmd_serd_elem_t *VAR_6, *VAR_7;







 if (VAR_4->sg_flags & VAR_3) {
  FUNC_5("  SERD Engine: record %s already fired!",
      VAR_4->sg_name);
  return (VAR_0);
 }

 while (VAR_4->sg_count >= VAR_4->sg_n)
  FUNC_1(VAR_4, FUNC_3(&VAR_4->sg_list));

 VAR_6 = FUNC_4(sizeof (fmd_serd_elem_t));
 VAR_6->se_hrt = VAR_5;

 FUNC_2(&VAR_4->sg_list, VAR_6);
 VAR_4->sg_count++;

 FUNC_5("  SERD Engine: recording %s of %d (%llu)",
     VAR_4->sg_name, (int)VAR_4->sg_count, (long long unsigned)VAR_5);





 VAR_7 = FUNC_3(&VAR_4->sg_list);

 if (VAR_4->sg_count >= VAR_4->sg_n &&
     FUNC_0(VAR_7->se_hrt, VAR_6->se_hrt) <= VAR_4->sg_t) {
  VAR_4->sg_flags |= VAR_3 | VAR_2;
  FUNC_5("  SERD Engine: fired %s", VAR_4->sg_name);
  return (VAR_1);
 }

 VAR_4->sg_flags |= VAR_2;
 return (VAR_0);
}
