
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int s; } ;
typedef TYPE_1__ demux_t ;


 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int FUNC_1( void *VAR_0, uint8_t *VAR_1, int VAR_2 )
{
    demux_t *VAR_3 = VAR_0;
    if( VAR_2 < 0 ) return -1;
    int VAR_4 = FUNC_0( VAR_3->s, VAR_1, VAR_2 );
    return VAR_4 >= 0 ? VAR_4 : -1;
}
