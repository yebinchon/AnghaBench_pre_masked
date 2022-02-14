
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int orientation; } ;
struct TYPE_15__ {TYPE_1__ video; } ;
struct TYPE_13__ {int fmt_in; TYPE_8__ fmt_out; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_14__ {int video; } ;
typedef TYPE_3__ es_format_t ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_8__*,int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6( filter_t *VAR_1 )
{

    es_format_t VAR_2;
    int VAR_3;


    FUNC_4( VAR_1, "Trying to build transform, then chroma+resize" );
    FUNC_3( &VAR_2, &VAR_1->fmt_in );
    FUNC_5(&VAR_2.video, VAR_1->fmt_out.video.orientation);
    VAR_3 = FUNC_0( VAR_1, &VAR_2 );
    FUNC_2( &VAR_2 );
    if( VAR_3 == VAR_0 )
        return VAR_0;


    FUNC_4( VAR_1, "Trying to build chroma+resize" );
    FUNC_1( &VAR_2, &VAR_1->fmt_out, &VAR_1->fmt_in );
    VAR_3 = FUNC_0( VAR_1, &VAR_2 );
    FUNC_2( &VAR_2 );
    return VAR_3;
}
