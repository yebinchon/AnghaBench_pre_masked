
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pos; } ;
typedef TYPE_1__ zpl_dir_context_t ;
struct file {int f_pos; } ;
typedef int filldir_t ;


 TYPE_1__ FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (struct file*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_0, void *VAR_1, filldir_t VAR_2)
{
 zpl_dir_context_t VAR_3 =
     FUNC_0(VAR_1, VAR_2, VAR_0->f_pos);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, &VAR_3);
 VAR_0->f_pos = VAR_3.pos;

 return (VAR_4);
}
