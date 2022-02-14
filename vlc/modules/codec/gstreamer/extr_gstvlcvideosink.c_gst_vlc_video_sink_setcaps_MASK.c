
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int gpointer ;
typedef int gboolean ;
struct TYPE_11__ {int member_0; } ;
struct TYPE_10__ {scalar_t__ p_dec; int (* new_caps ) (int ,int *,int ) ;int vinfo; } ;
typedef TYPE_1__ GstVlcVideoSink ;
typedef int GstVideoInfo ;
typedef int GstCaps ;
typedef int GstBaseSink ;
typedef TYPE_2__ GValue ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *) ;
 size_t VAR_3 ;
 int FUNC_2 (TYPE_2__*,int ,int ,int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (int *,int *) ;
 int * VAR_4 ;
 int FUNC_7 (int ,int *,int ) ;

__attribute__((used)) static gboolean FUNC_8( GstBaseSink *VAR_5,
        GstCaps *VAR_6 )
{
    GstVlcVideoSink *VAR_7 = FUNC_1( VAR_5 );
    GstVideoInfo VAR_8;
    gboolean VAR_9 = VAR_0;







    if( !FUNC_6( &VAR_8, VAR_6 ))
        return VAR_0;

    VAR_7->vinfo = VAR_8;
    VAR_9 = VAR_7->new_caps( FUNC_0( VAR_7 ), VAR_6,
            (gpointer) VAR_7->p_dec );


    return VAR_9;
}
