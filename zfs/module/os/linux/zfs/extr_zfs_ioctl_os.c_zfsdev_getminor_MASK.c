
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int zs_minor; struct TYPE_7__* zs_next; } ;
typedef TYPE_2__ zfsdev_state_t ;
typedef int minor_t ;
struct TYPE_8__ {TYPE_1__* f_file; } ;
typedef TYPE_3__ file_t ;
struct TYPE_6__ {TYPE_2__* private_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

int
FUNC_6(int VAR_3, minor_t *VAR_4)
{
 zfsdev_state_t *VAR_5, *VAR_6;
 file_t *VAR_7;

 FUNC_0(!FUNC_1(&VAR_2));
 VAR_7 = FUNC_3(VAR_3);

 if (VAR_7 == ((void*)0))
  return (FUNC_2(VAR_0));

 VAR_6 = VAR_7->f_file->private_data;
 if (VAR_6 == ((void*)0))
  return (FUNC_2(VAR_0));

 FUNC_4(&VAR_2);

 for (VAR_5 = VAR_1; VAR_5 != ((void*)0); VAR_5 = VAR_5->zs_next) {

  if (VAR_5->zs_minor == -1)
   continue;

  if (VAR_6 == VAR_5) {
   *VAR_4 = VAR_6->zs_minor;
   FUNC_5(&VAR_2);
   return (0);
  }
 }

 FUNC_5(&VAR_2);

 return (FUNC_2(VAR_0));
}
