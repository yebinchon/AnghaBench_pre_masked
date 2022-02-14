
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct zfs_stat {int zs_mode; scalar_t__ zs_links; scalar_t__ zs_gen; scalar_t__* zs_ctime; } ;
typedef int mode_t ;
struct TYPE_7__ {scalar_t__ shares; scalar_t__ zerr; int tosnap; int fromsnap; } ;
typedef TYPE_1__ differ_info_t ;
typedef int FILE ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__,char*,int,struct zfs_stat*) ;
 int FUNC_2 (int *,TYPE_1__*,int ,char*,struct zfs_stat*) ;
 int FUNC_3 (int *,TYPE_1__*,int,char*,struct zfs_stat*) ;
 int FUNC_4 (int *,TYPE_1__*,char*,char*,struct zfs_stat*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(FILE *VAR_8, differ_info_t *VAR_9, uint64_t VAR_10)
{
 struct zfs_stat VAR_11, VAR_12;
 mode_t VAR_13, VAR_14;
 char VAR_15[VAR_2], VAR_16[VAR_2];
 int VAR_17, VAR_18;
 int VAR_19;

 if (VAR_10 == VAR_9->shares)
  return (0);







 VAR_17 = FUNC_1(VAR_9, VAR_9->fromsnap, VAR_10, VAR_15,
     VAR_2, &VAR_11);
 if (VAR_17 && VAR_9->zerr != VAR_0 && VAR_9->zerr != VAR_1)
  return (-1);

 VAR_18 = FUNC_1(VAR_9, VAR_9->tosnap, VAR_10, VAR_16,
     VAR_2, &VAR_12);
 if (VAR_18 && VAR_9->zerr != VAR_0 && VAR_9->zerr != VAR_1)
  return (-1);




 if (VAR_17 && VAR_18) {
  FUNC_0(VAR_9->zerr == VAR_0 || VAR_9->zerr == VAR_1);
  VAR_9->zerr = 0;
  return (0);
 }

 VAR_9->zerr = 0;
 VAR_13 = VAR_11.zs_mode & VAR_4;
 VAR_14 = VAR_12.zs_mode & VAR_4;
 if (VAR_13 == VAR_3 || VAR_14 == VAR_3 || VAR_11.zs_links == 0 ||
     VAR_12.zs_links == 0)
  VAR_19 = 0;
 else
  VAR_19 = VAR_12.zs_links - VAR_11.zs_links;

 if (VAR_17) {
  if (VAR_19) {
   FUNC_3(VAR_8, VAR_9, VAR_19, VAR_16, &VAR_12);
   return (0);
  }
  FUNC_2(VAR_8, VAR_9, VAR_5, VAR_16, &VAR_12);
  return (0);
 } else if (VAR_18) {
  if (VAR_19) {
   FUNC_3(VAR_8, VAR_9, VAR_19, VAR_15, &VAR_11);
   return (0);
  }
  FUNC_2(VAR_8, VAR_9, VAR_7, VAR_15, &VAR_11);
  return (0);
 }

 if (VAR_13 != VAR_14 && VAR_11.zs_gen == VAR_12.zs_gen)
  VAR_12.zs_gen++;


 if (VAR_11.zs_gen == VAR_12.zs_gen) {

  if (VAR_11.zs_ctime[0] == VAR_12.zs_ctime[0] &&
      VAR_11.zs_ctime[1] == VAR_12.zs_ctime[1])
   return (0);
  if (VAR_19) {
   FUNC_3(VAR_8, VAR_9, VAR_19,
       VAR_19 > 0 ? VAR_15 : VAR_16, &VAR_12);
  } else if (FUNC_5(VAR_15, VAR_16) == 0) {
   FUNC_2(VAR_8, VAR_9, VAR_6, VAR_15, &VAR_12);
  } else {
   FUNC_4(VAR_8, VAR_9, VAR_15, VAR_16, &VAR_12);
  }
  return (0);
 } else {

  FUNC_2(VAR_8, VAR_9, VAR_7, VAR_15, &VAR_11);
  FUNC_2(VAR_8, VAR_9, VAR_5, VAR_16, &VAR_12);
  return (0);
 }
}
