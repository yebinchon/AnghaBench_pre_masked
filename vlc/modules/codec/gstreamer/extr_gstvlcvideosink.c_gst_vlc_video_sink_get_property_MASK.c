
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int guint ;
struct TYPE_3__ {int b_use_pool; int p_allocator; } ;
typedef TYPE_1__ GstVlcVideoSink ;
typedef int GValue ;
typedef int GParamSpec ;
typedef int GObject ;


 TYPE_1__* FUNC_0 (int *) ;


 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4( GObject *VAR_0, guint VAR_1,
    GValue *VAR_2, GParamSpec *VAR_3 )
{
    FUNC_1( VAR_3 );

    GstVlcVideoSink *VAR_4 = FUNC_0( VAR_0 );

    switch( VAR_1 )
    {
        case 129:
            FUNC_3( VAR_2, VAR_4->p_allocator );
        break;

        case 128:
            FUNC_2( VAR_2, VAR_4->b_use_pool );
        break;

        default:
        break;
   }
}
