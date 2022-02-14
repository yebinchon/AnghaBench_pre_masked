
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {char* member_0; scalar_t__ zc_obj; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int longlong_t ;
typedef int libzfs_handle_t ;
struct TYPE_11__ {scalar_t__ ddr_first; scalar_t__ ddr_last; } ;
typedef TYPE_3__ dmu_diff_record_t ;
struct TYPE_12__ {scalar_t__ zerr; scalar_t__ shares; int errbuf; int fromsnap; TYPE_1__* zhp; } ;
typedef TYPE_4__ differ_info_t ;
struct TYPE_9__ {int * zfs_hdl; } ;
typedef int FILE ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_4__*,scalar_t__,char*,int) ;
 char* FUNC_2 (int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int,char*,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6(FILE *VAR_5, differ_info_t *VAR_6, dmu_diff_record_t *VAR_7)
{
 zfs_cmd_t VAR_8 = {"\0"};
 libzfs_handle_t *VAR_9 = VAR_6->zhp->zfs_hdl;
 char VAR_10[VAR_1];

 (void) FUNC_4(VAR_8.zc_name, VAR_6->fromsnap, sizeof (VAR_8.zc_name));
 VAR_8.zc_obj = VAR_7->ddr_first - 1;

 FUNC_0(VAR_6->zerr == 0);

 while (VAR_8.zc_obj < VAR_7->ddr_last) {
  int VAR_11;

  VAR_11 = FUNC_5(VAR_9, VAR_3, &VAR_8);
  if (VAR_11 == 0) {
   if (VAR_8.zc_obj == VAR_6->shares) {
    VAR_8.zc_obj++;
    continue;
   }
   if (VAR_8.zc_obj > VAR_7->ddr_last) {
    break;
   }
   VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_8.zc_obj, VAR_10,
       VAR_1);
   if (VAR_11)
    break;
  } else if (VAR_4 == VAR_0) {
   break;
  } else {
   (void) FUNC_3(VAR_6->errbuf, sizeof (VAR_6->errbuf),
       FUNC_2(VAR_2,
       "next allocated object (> %lld) find failure"),
       (longlong_t)VAR_8.zc_obj);
   VAR_6->zerr = VAR_4;
   break;
  }
 }
 if (VAR_6->zerr)
  return (-1);
 return (0);
}
