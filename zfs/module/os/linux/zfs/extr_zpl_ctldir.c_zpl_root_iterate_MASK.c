
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pos; } ;
typedef TYPE_1__ zpl_dir_context_t ;
typedef int zfsvfs_t ;
struct file {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_6 (struct file*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(struct file *VAR_5, zpl_dir_context_t *VAR_6)
{
 zfsvfs_t *VAR_7 = FUNC_0(FUNC_3(VAR_5));
 int VAR_8 = 0;

 FUNC_1(VAR_7);

 if (!FUNC_6(VAR_5, VAR_6))
  goto out;

 if (VAR_6->pos == 2) {
  if (!FUNC_5(VAR_6, VAR_4,
      FUNC_4(VAR_4), VAR_2, VAR_0))
   goto out;

  VAR_6->pos++;
 }

 if (VAR_6->pos == 3) {
  if (!FUNC_5(VAR_6, VAR_3,
      FUNC_4(VAR_3), VAR_1, VAR_0))
   goto out;

  VAR_6->pos++;
 }
out:
 FUNC_2(VAR_7);

 return (VAR_8);
}
