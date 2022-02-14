
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_5__ {int za_integer_length; int za_num_integers; int za_name; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int xattr_filldir_t ;
struct inode {int dummy; } ;
struct TYPE_7__ {int z_id; } ;
struct TYPE_6__ {int z_os; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,int ,int ) ;

int
FUNC_8(struct inode *VAR_2, xattr_filldir_t *VAR_3)
{
 zap_cursor_t VAR_4;
 zap_attribute_t VAR_5;
 int VAR_6;

 FUNC_5(&VAR_4, FUNC_1(VAR_2)->z_os, FUNC_0(VAR_2)->z_id);

 while ((VAR_6 = -FUNC_6(&VAR_4, &VAR_5)) == 0) {

  if (VAR_5.za_integer_length != 8 || VAR_5.za_num_integers != 1) {
   VAR_6 = -VAR_1;
   break;
  }

  VAR_6 = FUNC_7(VAR_3, VAR_5.za_name, FUNC_2(VAR_5.za_name));
  if (VAR_6)
   break;

  FUNC_3(&VAR_4);
 }

 FUNC_4(&VAR_4);

 if (VAR_6 == -VAR_0)
  VAR_6 = 0;

 return (VAR_6);
}
