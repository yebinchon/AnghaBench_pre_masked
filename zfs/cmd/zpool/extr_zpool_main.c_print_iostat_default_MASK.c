
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ vs_space; scalar_t__ vs_alloc; double* vs_ops; double* vs_bytes; } ;
typedef TYPE_1__ vdev_stat_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int cb_scripted; scalar_t__ cb_literal; } ;
typedef TYPE_2__ iostat_cbdata_t ;
typedef enum zfs_nicenum_format { ____Placeholder_zfs_nicenum_format } zfs_nicenum_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 unsigned int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (scalar_t__,int,unsigned int,int ) ;
 int FUNC_2 (char*,unsigned int,char,...) ;

__attribute__((used)) static void
FUNC_3(vdev_stat_t *VAR_5, iostat_cbdata_t *VAR_6, double VAR_7)
{
 unsigned int VAR_8 = FUNC_0(VAR_6, VAR_0);
 enum zfs_nicenum_format VAR_9;
 char VAR_10;

 if (VAR_6->cb_literal) {
  VAR_9 = VAR_2;
  VAR_10 = '0';
 } else {
  VAR_9 = VAR_1;
  VAR_10 = '-';
 }


 if (VAR_5->vs_space == 0) {
  if (VAR_6->cb_scripted)
   FUNC_2("\t%c\t%c", VAR_10, VAR_10);
  else
   FUNC_2("  %*c  %*c", VAR_8, VAR_10, VAR_8,
       VAR_10);
 } else {
  FUNC_1(VAR_5->vs_alloc, VAR_9, VAR_8,
      VAR_6->cb_scripted);
  FUNC_1(VAR_5->vs_space - VAR_5->vs_alloc, VAR_9,
      VAR_8, VAR_6->cb_scripted);
 }

 FUNC_1((uint64_t)(VAR_5->vs_ops[VAR_3] * VAR_7),
     VAR_9, VAR_8, VAR_6->cb_scripted);
 FUNC_1((uint64_t)(VAR_5->vs_ops[VAR_4] * VAR_7),
     VAR_9, VAR_8, VAR_6->cb_scripted);
 FUNC_1((uint64_t)(VAR_5->vs_bytes[VAR_3] * VAR_7),
     VAR_9, VAR_8, VAR_6->cb_scripted);
 FUNC_1((uint64_t)(VAR_5->vs_bytes[VAR_4] * VAR_7),
     VAR_9, VAR_8, VAR_6->cb_scripted);
}
