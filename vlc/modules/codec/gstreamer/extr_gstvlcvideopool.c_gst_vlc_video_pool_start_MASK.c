
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_5__ {int (* start ) (int *) ;} ;
struct TYPE_4__ {int p_dec; int p_caps; int align; int info; } ;
typedef TYPE_1__ GstVlcVideoPool ;
typedef int GstBufferPool ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static gboolean FUNC_4( GstBufferPool *VAR_2 )
{
    GstVlcVideoPool *VAR_3 = FUNC_1( VAR_2 );

    if( !FUNC_2( &VAR_3->info, &VAR_3->align,
                VAR_3->p_caps, VAR_3->p_dec ))
        return VAR_0;

    return FUNC_0( VAR_1 )->start( VAR_2 );
}
