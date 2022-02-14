
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fmt; } ;
typedef TYPE_1__ ts_es_t ;
typedef int dvbpsi_pmt_es_t ;
typedef int demux_t ;


 int FUNC_0 (int *,int const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3( demux_t *VAR_2, ts_es_t *VAR_3,
                           const dvbpsi_pmt_es_t *VAR_4 )
{

    if( !FUNC_0( VAR_2, VAR_4, "drac" ) )
    {
        FUNC_2( VAR_2, "Registration descriptor not found or invalid" );
        return;
    }



    FUNC_1( &VAR_3->fmt, VAR_0, VAR_1 );
}
