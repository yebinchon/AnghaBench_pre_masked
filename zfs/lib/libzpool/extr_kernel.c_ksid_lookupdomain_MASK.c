
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kd_name; } ;
typedef TYPE_1__ ksiddomain_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (int,int ) ;

ksiddomain_t *
FUNC_2(const char *VAR_1)
{
 ksiddomain_t *VAR_2;

 VAR_2 = FUNC_1(sizeof (ksiddomain_t), VAR_0);
 VAR_2->kd_name = FUNC_0(VAR_1);
 return (VAR_2);
}
