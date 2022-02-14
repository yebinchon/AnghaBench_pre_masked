
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef scalar_t__ uint_fast64_t ;
struct skiptags_sys_t {TYPE_2__* p_tags; scalar_t__ header_skip; } ;
struct TYPE_7__ {int pf_control; int pf_seek; int pf_read; struct skiptags_sys_t* p_sys; struct TYPE_7__* s; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_8__ {struct TYPE_8__* p_next; } ;
typedef TYPE_2__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,TYPE_2__**,unsigned int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 struct skiptags_sys_t* FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(vlc_object_t *VAR_7)
{
    stream_t *VAR_8 = (stream_t *)VAR_7;
    stream_t *VAR_9 = VAR_8->s;
    struct skiptags_sys_t *VAR_10;

    block_t *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    unsigned VAR_13 = 0;

    while (FUNC_0(VAR_9, VAR_4, &VAR_12, &VAR_13)||
           FUNC_0(VAR_9, VAR_3, &VAR_12, &VAR_13))
    {
        if(VAR_12)
        {
            VAR_12->p_next = VAR_11;
            VAR_11 = VAR_12;
            VAR_12 = ((void*)0);
        }
    }

    uint_fast64_t VAR_14 = FUNC_3(VAR_9);
    if (VAR_14 == 0 || !(VAR_10 = FUNC_2()))
    {
        FUNC_1( VAR_11 );
        return VAR_5;
    }

    VAR_10->header_skip = VAR_14;
    VAR_10->p_tags = VAR_11;
    VAR_8->p_sys = VAR_10;
    VAR_8->pf_read = VAR_1;
    VAR_8->pf_seek = VAR_2;
    VAR_8->pf_control = VAR_0;
    return VAR_6;
}
