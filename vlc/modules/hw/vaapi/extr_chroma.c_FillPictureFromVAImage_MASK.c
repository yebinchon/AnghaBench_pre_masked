
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_11__ {int i_chroma; } ;
struct TYPE_12__ {TYPE_2__ format; } ;
typedef TYPE_3__ picture_t ;
typedef int copy_cache_t ;
struct TYPE_10__ {int fourcc; } ;
struct TYPE_13__ {size_t const* pitches; int height; TYPE_1__ format; int * offsets; } ;
typedef TYPE_4__ VAImage ;


 int FUNC_0 (TYPE_3__*,int const**,size_t const*,int ,int,int *) ;
 int FUNC_1 (TYPE_3__*,int const**,size_t const*,int ,int *) ;
 int FUNC_2 (TYPE_3__*,int const**,size_t const*,int ,int *) ;


 int VAR_0 ;


 int FUNC_3 (int) ;
 int FUNC_4 () ;

__attribute__((used)) static inline void
FUNC_5(picture_t *VAR_1,
                       VAImage *VAR_2, uint8_t *VAR_3, copy_cache_t *VAR_4)
{
    const uint8_t * VAR_5[2] = { VAR_3 + VAR_2->offsets[0],
                                      VAR_3 + VAR_2->offsets[1] };
    const size_t VAR_6[2] = { VAR_2->pitches[0],
                                       VAR_2->pitches[1] };

    switch (VAR_2->format.fourcc)
    {
    case 131:
    {
        FUNC_3(VAR_1->format.i_chroma == VAR_0);
        FUNC_1(VAR_1, VAR_5, VAR_6, VAR_2->height, VAR_4);
        break;
    }
    case 130:
        switch (VAR_1->format.i_chroma)
        {
            case 128:
                FUNC_2(VAR_1, VAR_5, VAR_6, VAR_2->height,
                                 VAR_4);
                break;
            case 129:
                FUNC_0(VAR_1, VAR_5, VAR_6,
                                   VAR_2->height, 6, VAR_4);
                break;
            default:
                FUNC_4();
        }
        break;
    default:
        FUNC_4();
        break;
    }
}
