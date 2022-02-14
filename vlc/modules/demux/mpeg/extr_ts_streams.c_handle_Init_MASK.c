
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* p_sys; } ;
typedef TYPE_1__ dvbpsi_t ;
typedef int demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int ) ;

__attribute__((used)) static inline bool FUNC_1( demux_t *VAR_2, dvbpsi_t **VAR_3 )
{
    *VAR_3 = FUNC_0( &VAR_1, VAR_0 );
    if( !*VAR_3 )
        return 0;
    (*VAR_3)->p_sys = (void *) VAR_2;
    return 1;
}
