
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* cmd; char** vdev_names; int vdev_names_count; int cb_name_flags; int * g_zfs; } ;
typedef TYPE_1__ vdev_cmd_data_list_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char**,int ,int *,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;

vdev_cmd_data_list_t *
FUNC_4(int VAR_2, char **VAR_3, char *VAR_4,
    libzfs_handle_t *VAR_5, char **VAR_6, int VAR_7,
    int VAR_8)
{
 vdev_cmd_data_list_t *VAR_9;
 VAR_9 = FUNC_3(sizeof (vdev_cmd_data_list_t));
 VAR_9->cmd = VAR_4;

 VAR_9->vdev_names = VAR_6;
 VAR_9->vdev_names_count = VAR_7;
 VAR_9->cb_name_flags = VAR_8;
 VAR_9->g_zfs = VAR_5;


 FUNC_1(VAR_2, VAR_3, VAR_0, ((void*)0),
     VAR_1, VAR_9);


 FUNC_0(VAR_9);






 FUNC_2(VAR_9);

 return (VAR_9);
}
