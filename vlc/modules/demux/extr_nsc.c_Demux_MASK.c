
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s; } ;
typedef TYPE_1__ demux_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 ( demux_t *VAR_1 )
{
    char *VAR_2;

    while( ( VAR_2 = FUNC_2( VAR_1->s ) ) )
    {
        FUNC_0( VAR_1, VAR_2 );
        FUNC_1( VAR_2 );
    }
    return VAR_0;
}
