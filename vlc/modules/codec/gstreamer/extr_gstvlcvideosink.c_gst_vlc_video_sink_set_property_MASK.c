
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int guint ;
typedef int decoder_t ;
struct TYPE_3__ {int b_use_pool; int * p_dec; int p_allocator; } ;
typedef TYPE_1__ GstVlcVideoSink ;
typedef int GstAllocator ;
typedef int GValue ;
typedef int GParamSpec ;
typedef int GObject ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;



 int FUNC_2 (int *) ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static void FUNC_8( GObject *VAR_0, guint VAR_1,
        const GValue *VAR_2, GParamSpec *VAR_3 )
{
    FUNC_2( VAR_3 );

    GstVlcVideoSink *VAR_4 = FUNC_1( VAR_0 );

    switch( VAR_1 )
    {
        case 130:
        {
            GstAllocator *VAR_5 = (GstAllocator*) FUNC_4(
                    VAR_2 );
            if( FUNC_0( VAR_5 ))
            {
                if( VAR_4->p_allocator )
                    FUNC_6( VAR_4->p_allocator );
                VAR_4->p_allocator = FUNC_5( VAR_5 );
            } else
                FUNC_7( VAR_4->p_dec, "Invalid Allocator set");
        }
        break;

        case 129:
        {
            VAR_4->p_dec = (decoder_t*) FUNC_4( VAR_2 );
        }
        break;

        case 128:
        {
            VAR_4->b_use_pool = FUNC_3( VAR_2 );
        }
        break;

        default:
        break;
    }
}
