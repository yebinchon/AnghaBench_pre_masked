
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int subtitle ;
typedef int subpicture_t ;
struct TYPE_21__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_22__ {int p_context; TYPE_1__* p_codec; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_23__ {int i_flags; size_t i_buffer; TYPE_5__* p_buffer; int i_pts; } ;
typedef TYPE_4__ block_t ;
struct TYPE_25__ {int size; int pts; TYPE_5__* data; } ;
struct TYPE_24__ {int pts; } ;
struct TYPE_20__ {scalar_t__ id; } ;
typedef TYPE_5__ AVSubtitle ;
typedef TYPE_6__ AVPacket ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_2__*,TYPE_5__*,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ,TYPE_5__*,int*,TYPE_6__*) ;
 TYPE_4__* FUNC_6 (TYPE_4__*,int ,int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_5__*,int ,int) ;
 int FUNC_9 (TYPE_2__*,char*,int) ;

__attribute__((used)) static subpicture_t *FUNC_10(decoder_t *VAR_4, block_t **VAR_5)
{
    decoder_sys_t *VAR_6 = VAR_4->p_sys;

    if (!VAR_5 || !*VAR_5)
        return ((void*)0);

    block_t *VAR_7 = *VAR_5;

    if (VAR_7->i_flags & (VAR_2 | VAR_1)) {
        if (VAR_7->i_flags & VAR_1) {
            FUNC_2(VAR_4);
            FUNC_7(VAR_7);
            return ((void*)0);
        }
    }

    if (VAR_7->i_buffer <= 0) {
        FUNC_7(VAR_7);
        return ((void*)0);
    }

    *VAR_5 =
    VAR_7 = FUNC_6(VAR_7,
                               0,
                               VAR_7->i_buffer + VAR_3);
    if (!VAR_7)
        return ((void*)0);
    VAR_7->i_buffer -= VAR_3;
    FUNC_8(&VAR_7->p_buffer[VAR_7->i_buffer], 0, VAR_3);

    if( VAR_6->p_codec->id == VAR_0 && VAR_7->i_buffer > 3 )
    {
        VAR_7->p_buffer += 2;
        VAR_7->i_buffer -= 3;
    }


    AVSubtitle VAR_8;
    FUNC_8(&VAR_8, 0, sizeof(VAR_8));

    AVPacket VAR_9;
    FUNC_4(&VAR_9);
    VAR_9.data = VAR_7->p_buffer;
    VAR_9.size = VAR_7->i_buffer;
    VAR_9.pts = FUNC_3(VAR_7->i_pts);

    int VAR_10 = 0;
    int VAR_11 = FUNC_5(VAR_6->p_context,
                                        &VAR_8, &VAR_10, &VAR_9);

    if (VAR_11 < 0) {
        FUNC_9(VAR_4, "cannot decode one subtitle (%zu bytes)",
                 VAR_7->i_buffer);

        FUNC_7(VAR_7);
        return ((void*)0);
    } else if ((size_t)VAR_11 > VAR_7->i_buffer) {
        VAR_11 = VAR_7->i_buffer;
    }

    VAR_7->i_buffer -= VAR_11;
    VAR_7->p_buffer += VAR_11;


    subpicture_t *VAR_12 = ((void*)0);
    if (VAR_10)
        VAR_12 = FUNC_0(VAR_4, &VAR_8,
                              FUNC_1(VAR_8.pts),
                              VAR_6->p_context);


    if (!VAR_12)
        FUNC_7(VAR_7);
    return VAR_12;
}
