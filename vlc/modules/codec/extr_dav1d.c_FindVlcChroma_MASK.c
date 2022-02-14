
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
struct TYPE_8__ {scalar_t__ i_chroma_id; scalar_t__ i_bitdepth; int i_chroma; } ;
struct TYPE_6__ {scalar_t__ layout; scalar_t__ bpc; } ;
struct TYPE_7__ {TYPE_1__ p; } ;
typedef TYPE_2__ Dav1dPicture ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static vlc_fourcc_t FUNC_1(const Dav1dPicture *VAR_1)
{
    for (unsigned int VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
        if (VAR_0[VAR_2].i_chroma_id == VAR_1->p.layout &&
            VAR_0[VAR_2].i_bitdepth == VAR_1->p.bpc)
            return VAR_0[VAR_2].i_chroma;

    return 0;
}
