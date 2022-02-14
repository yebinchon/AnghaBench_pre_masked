
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** cb_vdev_names; } ;
typedef TYPE_1__ iostat_cbdata_t ;


 int VAR_0 ;
 int FUNC_0 (int,char**,int ,int *,int ,TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(int VAR_2, char **VAR_3, char *VAR_4,
    iostat_cbdata_t *VAR_5)
{
 char **VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9 = 0;

 if ((VAR_2 == 0) || !*VAR_3)
  return (0);

 if (VAR_4)
  VAR_9 = 1;


 VAR_6 = VAR_5->cb_vdev_names;


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_5->cb_vdev_names = VAR_3 + VAR_8;


  VAR_7 = FUNC_0(VAR_9, &VAR_4, VAR_0, ((void*)0),
      VAR_1, VAR_5);
  if (!VAR_7) {

   break;
  }
 }

 VAR_5->cb_vdev_names = VAR_6;

 return (VAR_7);
}
