
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_class; } ;
typedef TYPE_1__ xds_t ;
typedef int xds_packet_t ;







 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3( xds_t *VAR_1, xds_packet_t *VAR_2 )
{
    switch( VAR_1->i_class )
    {
    case 131:
    case 130:
        FUNC_1( VAR_1, VAR_2 );
        break;
    case 132:
        FUNC_0( VAR_1, VAR_2 );
        break;
    case 129:



        break;
    case 128:



        break;
    default:

        break;
    }
}
