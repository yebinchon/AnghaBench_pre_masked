
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint ;
typedef int hash_t ;
struct TYPE_3__ {int candidates_bucket_size; } ;
typedef TYPE_1__ Assoc ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int VAR_1 ;

__attribute__((used)) static hash_t FUNC_2(const Assoc *VAR_2, hash_t VAR_3)
{
    uint64_t VAR_4 = VAR_3 % VAR_2->candidates_bucket_size;
    VAR_4 = (VAR_4 * VAR_0) % VAR_2->candidates_bucket_size;

    hash_t VAR_5 = VAR_4;
    if (!VAR_5) {





        VAR_5 = 1;
    }

    return VAR_5;
}
