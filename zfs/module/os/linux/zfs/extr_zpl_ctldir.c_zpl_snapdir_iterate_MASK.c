
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pos; } ;
typedef TYPE_1__ zpl_dir_context_t ;
struct TYPE_10__ {int z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef scalar_t__ uint64_t ;
struct file {int dummy; } ;
typedef int fstrans_cookie_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,char*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct file*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_1__*,char*,int ,scalar_t__,int ) ;
 int FUNC_12 (struct file*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_13(struct file *VAR_5, zpl_dir_context_t *VAR_6)
{
 zfsvfs_t *VAR_7 = FUNC_0(FUNC_7(VAR_5));
 fstrans_cookie_t VAR_8;
 char VAR_9[VAR_3];
 boolean_t VAR_10;
 uint64_t VAR_11, VAR_12;
 int VAR_13 = 0;

 FUNC_1(VAR_7);
 VAR_8 = FUNC_8();

 if (!FUNC_12(VAR_5, VAR_6))
  goto out;

 VAR_12 = VAR_6->pos;
 while (VAR_13 == 0) {
  FUNC_5(FUNC_3(VAR_7->z_os), VAR_2);
  VAR_13 = -FUNC_4(VAR_7->z_os, VAR_3,
      VAR_9, &VAR_11, &VAR_12, &VAR_10);
  FUNC_6(FUNC_3(VAR_7->z_os), VAR_2);
  if (VAR_13)
   goto out;

  if (!FUNC_11(VAR_6, VAR_9, FUNC_10(VAR_9),
      VAR_4 - VAR_11, VAR_0))
   goto out;

  VAR_6->pos = VAR_12;
 }
out:
 FUNC_9(VAR_8);
 FUNC_2(VAR_7);

 if (VAR_13 == -VAR_1)
  return (0);

 return (VAR_13);
}
