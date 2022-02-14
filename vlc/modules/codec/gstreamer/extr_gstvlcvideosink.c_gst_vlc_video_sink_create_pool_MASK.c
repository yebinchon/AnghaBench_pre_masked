
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gsize ;
typedef int gint ;
struct TYPE_3__ {int p_dec; int p_allocator; } ;
typedef TYPE_1__ GstVlcVideoSink ;
typedef int GstVlcVideoPool ;
typedef int GstStructure ;
typedef int GstCaps ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,int ,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ) ;

__attribute__((used)) static GstVlcVideoPool* FUNC_6(
        GstVlcVideoSink *VAR_0, GstCaps *VAR_1, gsize VAR_2, gint VAR_3 )
{
    GstVlcVideoPool *VAR_4;
    GstStructure *VAR_5;

    VAR_4 = FUNC_5( VAR_0->p_allocator, VAR_0->p_dec );

    VAR_5 = FUNC_2( FUNC_0( VAR_4 ));
    FUNC_1( VAR_5, VAR_1, VAR_2, VAR_3, 0);

    if( !FUNC_3( FUNC_0( VAR_4 ), VAR_5 ))
        goto config_failed;

    return VAR_4;

config_failed:
    {
        FUNC_4 (VAR_4);
        return ((void*)0);
    }
}
