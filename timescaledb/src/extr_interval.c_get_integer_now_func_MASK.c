
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int integer_now_func; int integer_now_func_schema; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef int Oid ;
typedef TYPE_2__ Dimension ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,int *,int ,int *) ;

__attribute__((used)) static Oid
FUNC_5(Dimension *VAR_1)
{
 Oid VAR_2;
 Oid VAR_3;

 VAR_2 = FUNC_3(VAR_1);

 FUNC_0(FUNC_1(VAR_2));

 VAR_3 = FUNC_4(FUNC_2(VAR_1->fd.integer_now_func_schema),
            FUNC_2(VAR_1->fd.integer_now_func),
            ((void*)0),
            VAR_0,
            &VAR_2);
 return VAR_3;
}
