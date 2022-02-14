
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ abd_size; int abd_children; } ;
typedef TYPE_1__ abd_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(abd_t *VAR_4)
{
 FUNC_3(VAR_4);

 FUNC_5(&VAR_4->abd_children);
 FUNC_0(VAR_2);
 FUNC_1(VAR_3, -(int)VAR_4->abd_size);
 FUNC_1(VAR_1,
     (int)VAR_4->abd_size - (int)FUNC_2(VAR_4->abd_size, VAR_0));

 FUNC_4(VAR_4);
}
