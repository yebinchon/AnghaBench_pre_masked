
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i_chroma; } ;
typedef TYPE_1__ video_format_t ;
struct TYPE_8__ {int video; } ;
typedef TYPE_2__ es_format_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (int *,TYPE_1__ const*) ;

void FUNC_2( es_format_t *VAR_1, const video_format_t *VAR_2 )
{
    FUNC_0( VAR_1, VAR_0, VAR_2->i_chroma );
    FUNC_1( &VAR_1->video, VAR_2 );
}
