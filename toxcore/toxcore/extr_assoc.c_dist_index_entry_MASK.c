
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef size_t uint32_t ;
struct TYPE_6__ {TYPE_2__* list; } ;
typedef TYPE_1__ candidates_bucket ;
typedef size_t bucket_t ;
struct TYPE_8__ {size_t candidates_bucket_count; size_t candidates_bucket_size; TYPE_1__* candidates; } ;
struct TYPE_7__ {scalar_t__ hash; } ;
typedef TYPE_2__ Client_entry ;
typedef TYPE_3__ Assoc ;


 size_t VAR_0 ;

__attribute__((used)) static Client_entry *FUNC_0(Assoc *VAR_1, uint64_t VAR_2)
{
    if ((VAR_2 & VAR_0) == VAR_0)
        return ((void*)0);

    size_t VAR_3 = VAR_1->candidates_bucket_count * VAR_1->candidates_bucket_size;
    uint32_t VAR_4 = VAR_2 & VAR_0;

    if (VAR_4 < VAR_3) {
        bucket_t VAR_5 = VAR_4 / VAR_1->candidates_bucket_size;
        candidates_bucket *VAR_6 = &VAR_1->candidates[VAR_5];
        size_t VAR_7 = VAR_4 % VAR_1->candidates_bucket_size;
        Client_entry *VAR_8 = &VAR_6->list[VAR_7];

        if (VAR_8->hash)
            return VAR_8;
    }

    return ((void*)0);
}
