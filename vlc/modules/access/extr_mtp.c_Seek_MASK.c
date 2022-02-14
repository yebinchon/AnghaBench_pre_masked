
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;

__attribute__((used)) static int FUNC_1( stream_t *VAR_3, uint64_t VAR_4 )
{
    int *VAR_5 = VAR_3->p_sys, VAR_6 = *VAR_5;

    if (FUNC_0( VAR_6, VAR_4, VAR_0 ) == (off_t)-1)
        return VAR_1;
    return VAR_2;
}
