
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_5__ {int* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_6__ {int i_buffer; int p_buffer; } ;
typedef TYPE_2__ block_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_1( sout_access_out_t *VAR_2, block_t *VAR_3 )
{
    int *VAR_4 = VAR_2->p_sys, VAR_5 = *VAR_4;
    ssize_t VAR_6;

    do
        VAR_6 = FUNC_0(VAR_5, VAR_3->p_buffer, VAR_3->i_buffer);
    while (VAR_6 == -1 && VAR_1 == VAR_0);
    return VAR_6;
}
