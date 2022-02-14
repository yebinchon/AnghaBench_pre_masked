
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int zprop_source_t ;
struct TYPE_9__ {int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int origin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,char*,int,int *,int *,int ,int ) ;

__attribute__((used)) static zfs_handle_t *
FUNC_4(zfs_handle_t *VAR_4)
{
 char VAR_5[VAR_1];
 zprop_source_t VAR_6;
 zfs_handle_t *VAR_7 = FUNC_1(VAR_4);

 while (VAR_7 != ((void*)0)) {
  if (FUNC_3(VAR_7, VAR_2, VAR_5,
      sizeof (VAR_5), &VAR_6, ((void*)0), 0, VAR_0) != 0)
   break;

  (void) FUNC_0(VAR_7);
  VAR_7 = FUNC_2(VAR_4->zfs_hdl, VAR_5, VAR_3);
 }

 return (VAR_7);
}
