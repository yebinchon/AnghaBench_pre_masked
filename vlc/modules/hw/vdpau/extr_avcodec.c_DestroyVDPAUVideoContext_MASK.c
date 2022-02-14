
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_context_private {int vdp; int ** pool; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    struct video_context_private *VAR_1 = VAR_0;
    for (unsigned VAR_2 = 0; VAR_1->pool[VAR_2] != ((void*)0); VAR_2++)
        FUNC_1(VAR_1->pool[VAR_2]);
    FUNC_0(VAR_1->vdp);
}
