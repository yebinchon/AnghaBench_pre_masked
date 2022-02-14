
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p_first; } ;
struct TYPE_7__ {TYPE_3__* p_first; } ;
struct TYPE_9__ {struct TYPE_9__* p_indexentries; TYPE_2__ towrite; int p_block; struct TYPE_9__* p_next; TYPE_1__ read; struct TYPE_9__* p_held_entry; scalar_t__ extrabuilder; } ;
typedef TYPE_3__ mp4_stream_t ;
typedef TYPE_3__ mp4_fragentry_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(mp4_stream_t *VAR_0)
{
    if(VAR_0->extrabuilder)
        FUNC_2(VAR_0->extrabuilder);


    if (VAR_0->p_held_entry)
    {
        FUNC_0(VAR_0->p_held_entry->p_block);
        FUNC_1(VAR_0->p_held_entry);
    }
    while(VAR_0->read.p_first)
    {
        mp4_fragentry_t *VAR_1 = VAR_0->read.p_first->p_next;
        FUNC_0(VAR_0->read.p_first->p_block);
        FUNC_1(VAR_0->read.p_first);
        VAR_0->read.p_first = VAR_1;
    }
    while(VAR_0->towrite.p_first)
    {
        mp4_fragentry_t *VAR_2 = VAR_0->towrite.p_first->p_next;
        FUNC_0(VAR_0->towrite.p_first->p_block);
        FUNC_1(VAR_0->towrite.p_first);
        VAR_0->towrite.p_first = VAR_2;
    }
    FUNC_1(VAR_0->p_indexentries);

    FUNC_1(VAR_0);
}
