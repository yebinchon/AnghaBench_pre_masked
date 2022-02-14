
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* finalize ) (int *) ;} ;
struct TYPE_4__ {scalar_t__ p_allocator; } ;
typedef TYPE_1__ GstVlcVideoSink ;
typedef int GObject ;


 TYPE_1__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( GObject *VAR_1 )
{
    GstVlcVideoSink *VAR_2 = FUNC_0( VAR_1 );

    if( VAR_2->p_allocator )
        FUNC_2( VAR_2->p_allocator );

    FUNC_1( VAR_0)->finalize( VAR_1 );
}
