
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int i_chroma; } ;
typedef TYPE_1__ video_format_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(video_format_t *VAR_1, const video_format_t *VAR_2)
{
    FUNC_1(VAR_1, VAR_2);
    VAR_1->i_chroma = FUNC_3(VAR_0, VAR_2->i_chroma);
    FUNC_0( VAR_1 );
    FUNC_2(VAR_1);
}
