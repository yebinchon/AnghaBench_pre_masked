
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* path; char* upath; char* vdev_enc_sysfs_path; } ;
typedef TYPE_1__ vdev_cmd_data_t ;


 int FUNC_0 (char**) ;
 int FUNC_1 (char**,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,int) ;
 int FUNC_4 (char*,char**,char**,char***,int*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char*) ;

__attribute__((used)) static void
FUNC_6(vdev_cmd_data_t *VAR_0, char *VAR_1)
{
 int VAR_2;
 char *VAR_3[2] = {VAR_1, 0};
 char *VAR_4[5] = {"PATH=/bin:/sbin:/usr/bin:/usr/sbin", ((void*)0), ((void*)0), ((void*)0),
     ((void*)0)};
 char **VAR_5 = ((void*)0);
 int VAR_6 = 0;
 int VAR_7;


 VAR_2 = FUNC_1(&VAR_4[1], "VDEV_PATH=%s",
     VAR_0->path ? VAR_0->path : "");
 if (VAR_2 == -1)
  goto out;

 VAR_2 = FUNC_1(&VAR_4[2], "VDEV_UPATH=%s",
     VAR_0->upath ? VAR_0->upath : "");
 if (VAR_2 == -1)
  goto out;

 VAR_2 = FUNC_1(&VAR_4[3], "VDEV_ENC_SYSFS_PATH=%s",
     VAR_0->vdev_enc_sysfs_path ?
     VAR_0->vdev_enc_sysfs_path : "");
 if (VAR_2 == -1)
  goto out;


 VAR_2 = FUNC_4(VAR_1, VAR_3, VAR_4, &VAR_5,
     &VAR_6);
 if (VAR_2 != 0)
  goto out;


 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  if (FUNC_5(VAR_0, VAR_5[VAR_7]) != 0)
   break;

out:
 if (VAR_5 != ((void*)0))
  FUNC_3(VAR_5, VAR_6);


 for (VAR_7 = 1; VAR_7 < FUNC_0(VAR_4); VAR_7++)
  if (VAR_4[VAR_7] != ((void*)0))
   FUNC_2(VAR_4[VAR_7]);
}
