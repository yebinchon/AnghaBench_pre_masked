
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b_evict_lock; } ;
typedef TYPE_1__ arc_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int *,int ,int *) ;

__attribute__((used)) static int
FUNC_3(void *VAR_2, void *VAR_3, int VAR_4)
{
 arc_buf_t *VAR_5 = VAR_2;

 FUNC_1(VAR_5, sizeof (arc_buf_t));
 FUNC_2(&VAR_5->b_evict_lock, ((void*)0), VAR_1, ((void*)0));
 FUNC_0(sizeof (arc_buf_t), VAR_0);

 return (0);
}
