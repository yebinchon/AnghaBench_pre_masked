
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
typedef int video_format_t ;
struct TYPE_4__ {int lock; int cond; int * chroma_list; int fmtsrc; int fmtdst; } ;
struct TYPE_5__ {TYPE_1__ prerender; } ;
typedef TYPE_2__ spu_private_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int const*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(spu_private_t *VAR_1,
                              const video_format_t *VAR_2,
                              const video_format_t *VAR_3,
                              const vlc_fourcc_t *VAR_4)
{
    FUNC_4(&VAR_1->prerender.lock);
    if(!FUNC_2(VAR_2, &VAR_1->prerender.fmtdst))
    {
        FUNC_0(&VAR_1->prerender.fmtdst);
        FUNC_1(&VAR_1->prerender.fmtdst, VAR_2);
    }
    if(!FUNC_2(VAR_3, &VAR_1->prerender.fmtsrc))
    {
        FUNC_0(&VAR_1->prerender.fmtsrc);
        FUNC_1(&VAR_1->prerender.fmtsrc, VAR_3);
    }

    for(size_t VAR_5=0; VAR_5<VAR_0; VAR_5++)
    {
        VAR_1->prerender.chroma_list[VAR_5] = VAR_4[VAR_5];
        if(!VAR_4[VAR_5])
            break;
    }

    FUNC_3(&VAR_1->prerender.cond);
    FUNC_5(&VAR_1->prerender.lock);
}
