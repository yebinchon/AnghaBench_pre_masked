
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* zc_value; scalar_t__ zc_nvlist_src; scalar_t__ zc_nvlist_conf; char* zc_string; int zc_nvlist_dst_size; int zc_action_handle; int zc_obj; int zc_cookie; int zc_cleanup_fd; int zc_guid; int zc_begin_record; int zc_iflags; int zc_nvlist_conf_size; int zc_nvlist_src_size; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int tofs ;
typedef int nvlist_t ;
struct TYPE_7__ {int drr_begin; } ;
struct TYPE_9__ {TYPE_1__ drr_u; scalar_t__ drr_payloadlen; int drr_type; } ;
typedef TYPE_3__ dmu_replay_record_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,int *,int *) ;
 int FUNC_2 (scalar_t__,int ,int ,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*,char*,int *,int *,int *,int ,int ,int ,TYPE_3__*,int ,int *,int *,int *,int **) ;

__attribute__((used)) static int
FUNC_9(zfs_cmd_t *VAR_4)
{
 dmu_replay_record_t VAR_5;
 nvlist_t *VAR_6 = ((void*)0);
 nvlist_t *VAR_7 = ((void*)0);
 nvlist_t *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);
 char *VAR_10;
 char VAR_11[VAR_3];
 int VAR_12 = 0;

 if (FUNC_1(VAR_4->zc_value, ((void*)0), ((void*)0)) != 0 ||
     FUNC_6(VAR_4->zc_value, '@') == ((void*)0) ||
     FUNC_6(VAR_4->zc_value, '%'))
  return (FUNC_0(VAR_2));

 (void) FUNC_7(VAR_11, VAR_4->zc_value, sizeof (VAR_11));
 VAR_10 = FUNC_6(VAR_11, '@');
 *VAR_10++ = '\0';

 if (VAR_4->zc_nvlist_src != 0 &&
     (VAR_12 = FUNC_2(VAR_4->zc_nvlist_src, VAR_4->zc_nvlist_src_size,
     VAR_4->zc_iflags, &VAR_7)) != 0)
  return (VAR_12);

 if (VAR_4->zc_nvlist_conf != 0 &&
     (VAR_12 = FUNC_2(VAR_4->zc_nvlist_conf, VAR_4->zc_nvlist_conf_size,
     VAR_4->zc_iflags, &VAR_8)) != 0)
  return (VAR_12);

 if (VAR_4->zc_string[0])
  VAR_9 = VAR_4->zc_string;

 VAR_5.drr_type = VAR_1;
 VAR_5.drr_payloadlen = 0;
 VAR_5.drr_u.drr_begin = VAR_4->zc_begin_record;

 VAR_12 = FUNC_8(VAR_11, VAR_10, VAR_9, VAR_7, VAR_8,
     ((void*)0), VAR_4->zc_guid, VAR_0, VAR_4->zc_cookie, &VAR_5,
     VAR_4->zc_cleanup_fd, &VAR_4->zc_cookie, &VAR_4->zc_obj,
     &VAR_4->zc_action_handle, &VAR_6);
 FUNC_3(VAR_7);
 FUNC_3(VAR_8);





 if (VAR_4->zc_nvlist_dst_size != 0 && VAR_6 != ((void*)0) &&
     (FUNC_4(VAR_6, VAR_4->zc_nvlist_dst_size) != 0 ||
     FUNC_5(VAR_4, VAR_6) != 0)) {




  VAR_12 = FUNC_0(VAR_2);
 }

 FUNC_3(VAR_6);

 return (VAR_12);
}
