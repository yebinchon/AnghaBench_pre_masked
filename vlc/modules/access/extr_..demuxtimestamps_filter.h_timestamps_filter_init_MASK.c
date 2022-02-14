
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timestamps_filter_s {int sequence; scalar_t__ contiguous_last; scalar_t__ sequence_offset; int mva; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct timestamps_filter_s *VAR_0)
{
    FUNC_0(&VAR_0->mva);
    VAR_0->sequence_offset = 0;
    VAR_0->contiguous_last = 0;
    VAR_0->sequence = -1;
}
