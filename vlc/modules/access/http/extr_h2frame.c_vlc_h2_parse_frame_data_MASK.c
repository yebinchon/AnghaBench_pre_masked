
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint_fast8_t ;
typedef scalar_t__ uint_fast32_t ;
typedef unsigned int uint8_t ;
struct vlc_h2_parser {size_t rcwd_size; TYPE_1__* cbs; int opaque; } ;
struct vlc_h2_frame {int dummy; } ;
struct TYPE_2__ {int (* stream_data ) (void*,struct vlc_h2_frame*) ;int (* stream_end ) (void*) ;int (* window_status ) (int ,size_t*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vlc_h2_frame*) ;
 int FUNC_1 (int ,size_t*) ;
 int FUNC_2 (void*,struct vlc_h2_frame*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct vlc_h2_frame*) ;
 unsigned int* FUNC_5 (struct vlc_h2_frame*) ;
 int FUNC_6 (struct vlc_h2_parser*,int ) ;
 int FUNC_7 (struct vlc_h2_parser*,scalar_t__,int ) ;
 void* FUNC_8 (struct vlc_h2_parser*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct vlc_h2_parser *VAR_7,
                                   struct vlc_h2_frame *VAR_8, size_t VAR_9,
                                   uint_fast32_t VAR_10)
{
    uint_fast8_t VAR_11 = FUNC_4(VAR_8);
    const uint8_t *VAR_12 = FUNC_5(VAR_8);

    if (VAR_10 == 0)
    {
        FUNC_0(VAR_8);
        return FUNC_6(VAR_7, VAR_5);
    }

    if (VAR_9 > VAR_4)
    {
        FUNC_0(VAR_8);
        return FUNC_7(VAR_7, VAR_10, VAR_3);
    }

    if (VAR_11 & VAR_1)
    {
        if (VAR_9 < 1 || VAR_9 < (1u + VAR_12[0]))
        {
            FUNC_0(VAR_8);
            return FUNC_7(VAR_7, VAR_10, VAR_3);
        }
        VAR_9 -= 1 + VAR_12[0];
    }

    if (VAR_9 > VAR_7->rcwd_size)
    {
        FUNC_0(VAR_8);
        return FUNC_6(VAR_7, VAR_2);
    }

    VAR_7->rcwd_size -= VAR_9;
    VAR_7->cbs->window_status(VAR_7->opaque, &VAR_7->rcwd_size);

    void *VAR_13 = FUNC_8(VAR_7, VAR_10);
    if (VAR_13 == ((void*)0))
    {
        FUNC_0(VAR_8);
        return FUNC_7(VAR_7, VAR_10, VAR_6);
    }

    int VAR_14 = VAR_7->cbs->stream_data(VAR_13, VAR_8);


    if (VAR_11 & VAR_0)
        VAR_7->cbs->stream_end(VAR_13);
    return VAR_14;
}
