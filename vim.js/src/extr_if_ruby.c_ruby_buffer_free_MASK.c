
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ b_ruby_ref; } ;
typedef TYPE_1__ buf_T ;
typedef int VALUE ;
struct TYPE_5__ {int * data; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(buf_T *VAR_2)
{
    if (VAR_2->b_ruby_ref)
    {
 FUNC_1(VAR_1, FUNC_2((VALUE) VAR_2->b_ruby_ref), VAR_0);
 FUNC_0(VAR_2->b_ruby_ref)->data = ((void*)0);
    }
}
