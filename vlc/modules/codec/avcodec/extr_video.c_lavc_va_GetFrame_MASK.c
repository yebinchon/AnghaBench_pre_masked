
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_va_t ;
struct AVCodecContext {TYPE_1__* opaque; } ;
typedef int picture_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_8__ {int * p_va; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_9__ {int * opaque; int ** data; int ** buf; } ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ,int (*) (int *,int *),int *,int ) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int *,int **) ;

__attribute__((used)) static int FUNC_8(struct AVCodecContext *VAR_0, AVFrame *VAR_1)
{
    decoder_t *VAR_2 = VAR_0->opaque;
    decoder_sys_t *VAR_3 = VAR_2->p_sys;
    vlc_va_t *VAR_4 = VAR_3->p_va;

    picture_t *VAR_5;
    VAR_5 = FUNC_2(VAR_2);
    if (VAR_5 == ((void*)0))
        return -1;

    if (FUNC_7(VAR_4, VAR_5, &VAR_1->data[0]))
    {
        FUNC_4(VAR_2, "hardware acceleration picture allocation failed");
        FUNC_5(VAR_5);
        return -1;
    }
    FUNC_0(VAR_1->data[0] != ((void*)0));


    VAR_1->data[3] = VAR_1->data[0];

    VAR_1->buf[0] = FUNC_1(VAR_1->data[0], 0, FUNC_3, VAR_5, 0);
    if (FUNC_6(VAR_1->buf[0] == ((void*)0)))
    {
        FUNC_3(VAR_5, VAR_1->data[0]);
        return -1;
    }

    VAR_1->opaque = VAR_5;
    return 0;
}
