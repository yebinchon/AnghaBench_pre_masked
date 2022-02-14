
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * stride; scalar_t__* planes; int d_h; int d_w; } ;
typedef TYPE_2__ vpx_image_t ;
typedef int * vpx_codec_iter_t ;
typedef int uint8_t ;
struct RTPMessage {int len; int data; } ;
struct TYPE_7__ {int second; int (* first ) (int ,int ,int ,int ,int const*,int const*,int const*,int ,int ,int ,int ) ;} ;
struct TYPE_9__ {int queue_mutex; TYPE_1__ vcb; int friend_number; int av; int decoder; int vbuf_raw; } ;
typedef TYPE_3__ VCSession ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct RTPMessage*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,void**) ;
 int FUNC_5 (int ,int ,int ,int ,int const*,int const*,int const*,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int *,int ) ;
 int FUNC_7 (int) ;
 TYPE_2__* FUNC_8 (int ,int **) ;
 int FUNC_9 (TYPE_2__*) ;

void FUNC_10(VCSession *VAR_2)
{
    if (!VAR_2)
        return;

    struct RTPMessage *VAR_3;
    int VAR_4;

    FUNC_2(VAR_2->queue_mutex);

    if (FUNC_4(VAR_2->vbuf_raw, (void **)&VAR_3)) {
        FUNC_3(VAR_2->queue_mutex);

        VAR_4 = FUNC_6(VAR_2->decoder, VAR_3->data, VAR_3->len, ((void*)0), VAR_0);
        FUNC_1(VAR_3);

        if (VAR_4 != VAR_1)
            FUNC_0("Error decoding video: %s", FUNC_7(VAR_4));
        else {
            vpx_codec_iter_t VAR_5 = ((void*)0);
            vpx_image_t *VAR_6 = FUNC_8(VAR_2->decoder, &VAR_5);


            for (; VAR_6; VAR_6 = FUNC_8(VAR_2->decoder, &VAR_5)) {
                if (VAR_2->vcb.first)
                    VAR_2->vcb.first(VAR_2->av, VAR_2->friend_number, VAR_6->d_w, VAR_6->d_h,
                                  (const uint8_t *)VAR_6->planes[0], (const uint8_t *)VAR_6->planes[1], (const uint8_t *)VAR_6->planes[2],
                                  VAR_6->stride[0], VAR_6->stride[1], VAR_6->stride[2], VAR_2->vcb.second);

                FUNC_9(VAR_6);
            }
        }

        return;
    }

    FUNC_3(VAR_2->queue_mutex);
}
