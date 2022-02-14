
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint64_t ;
struct TYPE_5__ {int pf_control; int * pf_seek; int pf_read; TYPE_2__* p_sys; int s; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_6__ {int b_fastseek; void* b_seek; void* b_size; } ;
typedef TYPE_2__ stream_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (TYPE_1__*,char*) ;
 TYPE_2__* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5( vlc_object_t *VAR_8 )
{
    stream_t *VAR_9 = (stream_t *) VAR_8;
    stream_sys_t *VAR_10 = FUNC_2(VAR_8, sizeof (*VAR_10));
    if (FUNC_0(VAR_10 == ((void*)0)))
        return VAR_6;

    uint64_t VAR_11;
    bool VAR_12;
    bool VAR_13 = 0;

    VAR_10->b_seek = FUNC_1(VAR_9, "seek");
    VAR_10->b_size = FUNC_1(VAR_9, "stream-size");

    if (!VAR_10->b_seek)
    {
        if (FUNC_3(VAR_9->s, VAR_3, &VAR_12) == 0)
            VAR_13 = VAR_12;

        VAR_10->b_fastseek = 0;
    }
    else
    {
        VAR_10->b_fastseek = FUNC_1(VAR_9, "fastseek");
        if (!VAR_10->b_fastseek
         && FUNC_3(VAR_9->s, VAR_2,
                               &VAR_12) == 0)
            VAR_13 = VAR_12;
    }

    if (!VAR_10->b_size && FUNC_4(VAR_9->s, &VAR_11) == 0)
        VAR_13 = 1;

    if (!VAR_13)
        return VAR_5;

    VAR_9->p_sys = VAR_10;
    VAR_9->pf_read = VAR_1;
    VAR_9->pf_seek = VAR_10->b_seek ? VAR_4 : ((void*)0);
    VAR_9->pf_control = VAR_0;

    return VAR_7;
}
